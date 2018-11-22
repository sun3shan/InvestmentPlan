% clear;
clc;
close all;

% load('SLOPE_data2.mat');
% 
% csv_data = importdata('pricing_info.csv');
% data.od_code = csv_data.data(:,1);
% data.avg_price = csv_data.data(:,2);
% data.num_package = csv_data.data(:,3);
% data.discount_amount_limit = csv_data.data(:,4);
len = length(data.od_code);

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