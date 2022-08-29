<h2><a href="https://leetcode.com/problems/fix-product-name-format/">1543. Fix Product Name Format</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Sales</code></p>

<pre>+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| sale_id      | int     |
| product_name | varchar |
| sale_date    | date    |
+--------------+---------+
sale_id is the primary key for this table.
Each row of this table contains the product name and the date it was sold.
</pre>

<p>&nbsp;</p>

<p>Since table Sales was filled manually in the year <code>2000</code>, <code>product_name</code> may contain leading and/or trailing white spaces, also they are case-insensitive.</p>

<p>Write an SQL query to report</p>

<ul>
	<li><code>product_name</code> in lowercase without leading or trailing white spaces.</li>
	<li><code>sale_date</code> in the format <code>('YYYY-MM')</code>.</li>
	<li><code>total</code> the number of times the product was sold in this month.</li>
</ul>

<p>Return the result table ordered by <code>product_name</code> in <strong>ascending order</strong>. In case of a tie, order it by <code>sale_date</code> in <strong>ascending order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
Sales table:
+---------+--------------+------------+
| sale_id | product_name | sale_date  |
+---------+--------------+------------+
| 1       | LCPHONE      | 2000-01-16 |
| 2       | LCPhone      | 2000-01-17 |
| 3       | LcPhOnE      | 2000-02-18 |
| 4       | LCKeyCHAiN   | 2000-02-19 |
| 5       | LCKeyChain   | 2000-02-28 |
| 6       | Matryoshka   | 2000-03-31 |
+---------+--------------+------------+
<strong>Output:</strong> 
+--------------+-----------+-------+
| product_name | sale_date | total |
+--------------+-----------+-------+
| lckeychain   | 2000-02   | 2     |
| lcphone      | 2000-01   | 2     |
| lcphone      | 2000-02   | 1     |
| matryoshka   | 2000-03   | 1     |
+--------------+-----------+-------+
<strong>Explanation:</strong> 
In January, 2 LcPhones were sold. Please note that the product names are not case sensitive and may contain spaces.
In February, 2 LCKeychains and 1 LCPhone were sold.
In March, one matryoshka was sold.
</pre>
</div>