select q.id,
q.year,
if(n.npv is null,0,n.npv) as npv
from Queries q
left join NPV n on q.id=n.id and q.year=n.year
order by q.id;
