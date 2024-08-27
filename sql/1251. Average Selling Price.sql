# Write your MySQL query statement below
select a.product_id ,IFNULL(round(sum(a.price*b.units)/sum(b.units),2),0) as average_price
from Prices as a
left join UnitsSold as b on a.product_id =b.product_id 
and
b.purchase_date BETWEEN a.start_date AND a.end_date 
group by a.product_id;