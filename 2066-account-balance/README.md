<h2><a href="https://leetcode.com/problems/account-balance/">2066. Account Balance</a></h2><h3>Medium</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Transactions</code></p>

<pre>+-------------+------+
| Column Name | Type |
+-------------+------+
| account_id  | int  |
| day         | date |
| type        | ENUM |
| amount      | int  |
+-------------+------+
(account_id, day) is the primary key for this table.
Each row contains information about one transaction, including the transaction type, the day it occurred on, and the amount.
type is an ENUM of the type ('Deposit','Withdraw') 
</pre>

<p>&nbsp;</p>

<p>Write an SQL query to report the balance of each user after each transaction. You may assume that the balance of each account before any transaction is <code>0</code> and that the balance will never be below <code>0</code> at any moment.</p>

<p>Return the result table <strong>in ascending order</strong> by <code>account_id</code>, then by <code>day</code> in case of a tie.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
Transactions table:
+------------+------------+----------+--------+
| account_id | day        | type     | amount |
+------------+------------+----------+--------+
| 1          | 2021-11-07 | Deposit  | 2000   |
| 1          | 2021-11-09 | Withdraw | 1000   |
| 1          | 2021-11-11 | Deposit  | 3000   |
| 2          | 2021-12-07 | Deposit  | 7000   |
| 2          | 2021-12-12 | Withdraw | 7000   |
+------------+------------+----------+--------+
<strong>Output:</strong> 
+------------+------------+---------+
| account_id | day        | balance |
+------------+------------+---------+
| 1          | 2021-11-07 | 2000    |
| 1          | 2021-11-09 | 1000    |
| 1          | 2021-11-11 | 4000    |
| 2          | 2021-12-07 | 7000    |
| 2          | 2021-12-12 | 0       |
+------------+------------+---------+
<strong>Explanation:</strong> 
Account 1:
- Initial balance is 0.
- 2021-11-07 --&gt; deposit 2000. Balance is 0 + 2000 = 2000.
- 2021-11-09 --&gt; withdraw 1000. Balance is 2000 - 1000 = 1000.
- 2021-11-11 --&gt; deposit 3000. Balance is 1000 + 3000 = 4000.
Account 2:
- Initial balance is 0.
- 2021-12-07 --&gt; deposit 7000. Balance is 0 + 7000 = 7000.
- 2021-12-12 --&gt; withdraw 7000. Balance is 7000 - 7000 = 0.
</pre>
</div>