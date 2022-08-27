select customer_id
from Customers
where year='2021' and revenue>0
group by customer_id;

