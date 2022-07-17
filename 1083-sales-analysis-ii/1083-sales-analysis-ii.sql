select distinct s.buyer_id
from sales s,product p
where s.product_id = p.product_id
and p.product_name = 'S8'
and s.buyer_id not in 
(
    select buyer_id 
    from sales s1,product p1 
    where s1.product_id=p1.product_id 
    and p1.product_name='iPhone'
);

