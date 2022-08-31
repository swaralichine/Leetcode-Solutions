Select
t1.account_id,
t1.day,
sum(case when t2.type = 'Deposit' then t2.amount
   when t2.type = 'Withdraw' then -t2.amount
    else 0 end) as balance
from transactions t1, transactions t2
where t1.account_id = t2.account_id and t1.day >= t2.day
group by 1,2
order by 1,2