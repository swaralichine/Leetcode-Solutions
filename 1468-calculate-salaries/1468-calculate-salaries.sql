Select company_id,
       employee_id,
       employee_name,
case 
       when max_salary < 1000 then salary
       when max_salary >= 1000 and max_salary < 10000 then round(salary*(1-0.24))
       when max_salary >=10000 then round(salary *(1-0.49))
end as salary
from 
(
    select company_id,
           employee_id,
           employee_name,
           salary,
           max(salary) over (partition by company_id) as max_salary 
    from   Salaries
)a



