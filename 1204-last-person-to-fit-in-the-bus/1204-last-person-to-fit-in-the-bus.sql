SELECT a.person_name as person_name
FROM (
    SELECT person_name, SUM(weight) over (ORDER BY turn) as kg
    FROM queue
    ORDER BY kg DESC) a
WHERE a.kg <= 1000
LIMIT 1