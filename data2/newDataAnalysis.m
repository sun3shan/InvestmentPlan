clear;
clc;
close all;

csv_data = importdata('pricing_info.csv');
data.od_code = csv_data.data(:,1);
data.avg_price = csv_data.data(:,2);
data.num_package = csv_data.data(:,3);
data.discount_amount_limit = csv_data.data(:,4);

step = 1;
% codegen -args {data, step} getAllSlope.m
% which getAllSlope_mex


SLOPE = getAllSlope_mex(data, step);

len = length(data.od_code);
figure(1);
hold on;
grid on;
for i = 1:len
    x = 1:min(data.discount_amount_limit(i),int32(3e6));
    plot(x, SLOPE(x, i)); 
end
legend('0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20', '21', '22', '23', '24', '25', '26', '27', '28', '29', '30', '31', '32', '33', '34', '35', '36', '37', '38', '39', '40', '41', '42', '43', '44', '45', '46', '47', '48', '49', '50', '51', '52', '53', '54', '55', '56', '57', '58', '59', '60', '61', '62', '63', '64', '65', '66', '67', '68', '69', '70', '71', '72', '73', '74', '75', '76', '77', '78', '79', '80', '81', '82', '83', '84', '85', '86', '87', '88', '89', '90', '91', '92', '93', '94', '95', '96', '97', '98', '99', '100', '101', '102', '103', '104', '105', '106', '107', '108', '109', '110', '111', '112', '113', '114', '115', '116', '117', '118', '119', '120', '121', '122', '123', '124', '125', '126', '127', '128', '129', '130', '131', '132', '133', '134', '135', '136', '137', '138', '139', '140', '141', '142', '143', '144', '145', '146', '147', '148', '149', '150', '151', '152', '153', '154', '155', '156', '157', '158', '159', '160', '161', '162', '163', '164', '165', '166', '167', '168', '169', '170', '171', '172', '173', '174', '175', '176', '177', '178', '179', '180', '181', '182', '183', '184', '185', '186', '187', '188', '189', '190', '191', '192', '193', '194', '195', '196', '197', '198', '199');

INCREMENT = zeros(size(SLOPE));

for discount = 1:size(INCREMENT,1)
    if mod(discount, 3e4) == 0
        fprintf('\b\b\b\b\b\b\b%5.2f%%', (discount/3e4));
    end
    x = find(data.discount_amount_limit>=discount)';
    if discount ~= 1
        INCREMENT(discount, x) = INCREMENT(discount-1, x)+SLOPE(discount,x);
    else
        INCREMENT(discount, x) = SLOPE(1,x);
    end
end
fprintf('\n');

save('SLOPE_data2.mat', 'SLOPE', 'data', 'INCREMENT', '-v7.3');