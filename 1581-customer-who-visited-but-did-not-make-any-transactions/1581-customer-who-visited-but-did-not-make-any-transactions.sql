select  Visits.customer_id,
count(customer_id) as count_no_trans
from visits
left join Transactions on Visits.visit_id=Transactions.visit_id
where amount is null
group by customer_id;



