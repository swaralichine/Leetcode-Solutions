Select sale_date,
sum(case when fruit='apples' then 1 else -1 end * sold_num) as diff 
from sales
group by sale_date
order by sale_date;


