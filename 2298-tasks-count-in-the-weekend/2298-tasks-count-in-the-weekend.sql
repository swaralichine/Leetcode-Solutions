Select 
sum(case when day in ("Saturday","Sunday") then 1 else 0 end) as "weekend_cnt",
sum(case when day in ("Monday","Tuesday","Wednesday","Thursday","Friday") then 1 else 0 end) as working_cnt
from 
(select task_id,dayname(submit_date) as day from tasks) as a;

