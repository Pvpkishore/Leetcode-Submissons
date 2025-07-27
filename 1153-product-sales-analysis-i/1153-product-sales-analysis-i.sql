# Write your MySQL query statement below
Select product.product_name,sales.year,sales.price
from sales
Left join product on  sales.product_id = product.product_id;