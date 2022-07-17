select q.id,
q.year,
if(n.npv is null,0,n.npv) as npv
from npv n
right join queries q on n.id=q.id and n.year=q.year
order by q.id;

