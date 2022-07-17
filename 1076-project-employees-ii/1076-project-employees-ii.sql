select project_id
from project 
group by project_id
having count(employee_id)=(select count(employee_id) from project group by project_id order by 1 desc limit 1);

