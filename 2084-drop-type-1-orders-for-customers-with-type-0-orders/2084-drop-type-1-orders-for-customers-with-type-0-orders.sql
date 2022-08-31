/*minimum will return either 0 or 1 but not both*/

Select *
from orders
where (customer_id,order_type) IN 
(select customer_id, MIN(order_type) from orders group by customer_id);

