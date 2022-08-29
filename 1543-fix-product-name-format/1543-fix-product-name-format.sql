 
SELECT
    trim(lower(product_name)) AS product_name,
    DATE_FORMAT(sale_date, '%Y-%m') AS sale_date,
    COUNT(sale_id) AS total
FROM Sales
GROUP BY 1,2
ORDER BY 1,2
