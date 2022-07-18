select e1.employee_id
from Employees e1
where e1.employee_id not in (select employee_id from salaries)

union

select s1.employee_id
from Salaries s1
where s1.employee_id not in (select employee_id from employees)

order by employee_id 


