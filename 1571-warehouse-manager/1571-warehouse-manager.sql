Select w1.name as "warehouse_name",
sum(p1.Width*p1.Length*p1.Height*w1.units) as "volume"
from Warehouse w1
inner join Products p1 on w1.product_id=p1.product_id
group by w1.name;


