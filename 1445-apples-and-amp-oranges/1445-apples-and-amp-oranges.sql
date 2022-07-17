select sale_date,
sum(if(fruit='apples',1,-1)*sold_num) as diff 
from sales
group by 1;


