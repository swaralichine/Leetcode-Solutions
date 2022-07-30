Select customer_id,
customer_name
from Customers
where customer_id in (select customer_id from orders where product_name='A')
and customer_id in (select customer_id from orders where product_name='B')
and customer_id not in (select customer_id from orders where product_name='C')
order by customer_id;



