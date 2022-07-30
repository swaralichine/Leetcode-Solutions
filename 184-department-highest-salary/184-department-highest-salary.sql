Select Department.name as 'Department',
Employee.name as 'Employee',
salary
from 
Employee 
join Department on Employee.departmentId=Department.id
where (Employee.departmentId,salary) in (Select departmentId,max(salary)
                                        from Employee group by departmentId )
order by Department.name;




