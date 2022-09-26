<h2><a href="https://leetcode.com/problems/unique-orders-and-customers-per-month/">1565. Unique Orders and Customers Per Month</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Orders</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| order_id      | int     |
| order_date    | date    |
| customer_id   | int     |
| invoice       | int     |
+---------------+---------+
order_id is the primary key for this table.
This table contains information about the orders made by customer_id.
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to find the number of <strong>unique orders</strong> and the number of <strong>unique customers</strong> with invoices <strong>&gt; $20</strong> for each <strong>different month</strong>.</p>

<p>Return the result table sorted in <strong>any order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
Orders table:
+----------+------------+-------------+------------+
| order_id | order_date | customer_id | invoice    |
+----------+------------+-------------+------------+
| 1        | 2020-09-15 | 1           | 30         |
| 2        | 2020-09-17 | 2           | 90         |
| 3        | 2020-10-06 | 3           | 20         |
| 4        | 2020-10-20 | 3           | 21         |
| 5        | 2020-11-10 | 1           | 10         |
| 6        | 2020-11-21 | 2           | 15         |
| 7        | 2020-12-01 | 4           | 55         |
| 8        | 2020-12-03 | 4           | 77         |
| 9        | 2021-01-07 | 3           | 31         |
| 10       | 2021-01-15 | 2           | 20         |
+----------+------------+-------------+------------+
<strong>Output:</strong> 
+---------+-------------+----------------+
| month   | order_count | customer_count |
+---------+-------------+----------------+
| 2020-09 | 2           | 2              |
| 2020-10 | 1           | 1              |
| 2020-12 | 2           | 1              |
| 2021-01 | 1           | 1              |
+---------+-------------+----------------+
<strong>Explanation:</strong> 
In September 2020 we have two orders from 2 different customers with invoices &gt; $20.
In October 2020 we have two orders from 1 customer, and only one of the two orders has invoice &gt; $20.
In November 2020 we have two orders from 2 different customers but invoices &lt; $20, so we don't include that month.
In December 2020 we have two orders from 1 customer both with invoices &gt; $20.
In January 2021 we have two orders from 2 different customers, but only one of them with invoice &gt; $20.
</pre>
</div>