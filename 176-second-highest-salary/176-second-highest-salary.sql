select if(max(salary) is null, null,max(salary)) as 'SecondHighestSalary'
from Employee
where salary < (select max(salary) from employee);



