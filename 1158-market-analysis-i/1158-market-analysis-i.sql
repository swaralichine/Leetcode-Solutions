Select u.user_id as buyer_id, 
u.join_date, 
count(o.order_id) as 'orders_in_2019'
from users u
left join Orders o
on o.buyer_id=u.user_id 
and YEAR(order_date)='2019'
group by u.user_id;