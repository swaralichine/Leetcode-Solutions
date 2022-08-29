select e.name as name,
b.bonus as bonus
from employee e
left join bonus b on e.empid=b.empid
where b.bonus < 1000 or b.bonus is null;