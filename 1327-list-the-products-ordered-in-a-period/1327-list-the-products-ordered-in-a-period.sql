select product_name,
sum(unit) as unit
from orders o
inner join products p on p.product_id=o.product_id
where DATE_FORMAT(order_date,"%M %Y")="February 2020"
group by o.product_id
having unit >=100;

