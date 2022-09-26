/*need to print the primary or the only department the employee belongs to*/

select employee_id,
department_id
from Employee
where primary_flag='Y'

union

select employee_id,
department_id
from Employee
where employee_id not in (select employee_id
                        from Employee
                        where primary_flag='Y')

