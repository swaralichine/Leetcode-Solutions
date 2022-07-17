
SELECT co.name as country FROM Person p
LEFT JOIN Calls c
on p.id = c.caller_id or p.id = callee_id
LEFT JOIN Country co
on co.country_code = SUBSTRING(p.phone_number,1,3)
group by 1
having avg(duration) > (SELECT AVG(duration) FROM Calls)

