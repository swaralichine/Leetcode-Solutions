Select e.left_operand,
e.operator,
e.right_operand,
(
case when e.operator = ">" and v1.value > v2.value then "true"
     when e.operator = "<" and v1.value < v2.value then "true"
     when e.operator = "=" and v1.value = v2.value then "true"
     else "false"
     end
)as  value
from Expressions e
inner join Variables v1 on e.left_operand=v1.name
inner join Variables v2 on e.right_operand=v2.name;









