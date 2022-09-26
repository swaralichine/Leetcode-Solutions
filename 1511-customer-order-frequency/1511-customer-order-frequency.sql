# Write your MySQL query statement below
Select c.customer_id,
       c.name
       from orders o
       inner join customers c on o.customer_id=c.customer_id
       inner join Product p on o.product_id=p.product_id
       group by c.customer_id,
                c.name
       having sum(case when left(o.order_date,7) ='2020-06' then p.price*o.quantity end) >= 100
         and  sum(case when left(o.order_date,7) ='2020-07' then p.price*o.quantity end) >= 100
