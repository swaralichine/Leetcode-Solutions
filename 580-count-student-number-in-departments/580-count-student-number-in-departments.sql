Select dept_name,
count(student_id) as student_number
from Department
left join Student on Department.dept_id=Student.dept_id
group by dept_name
order by student_number desc,
dept_name asc;


