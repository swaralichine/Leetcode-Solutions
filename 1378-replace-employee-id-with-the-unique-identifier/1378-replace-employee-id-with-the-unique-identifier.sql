Select EmployeeUNI.unique_id,
       Employees.name
From 
       Employees
LEFT JOIN 
       EmployeeUNI
ON
       EmployeeUNI.id = Employees.id


