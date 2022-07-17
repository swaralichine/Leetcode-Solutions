select sale_date,
sum(case when fruit='apples' then 1 else -1 end * sold_num) as diff 
from sales
group by 1
order by 1;


