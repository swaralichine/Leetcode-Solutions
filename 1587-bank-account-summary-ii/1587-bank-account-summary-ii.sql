Select users.name,
sum(Transactions.amount) as "balance"
from Users
join Transactions on Users.account=Transactions.account
group by Users.name
having sum(Transactions.amount)>10000;






