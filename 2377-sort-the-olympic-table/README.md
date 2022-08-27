<h2><a href="https://leetcode.com/problems/sort-the-olympic-table/">2377. Sort the Olympic Table</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Olympic</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| country       | varchar |
| gold_medals   | int     |
| silver_medals | int     |
| bronze_medals | int     |
+---------------+---------+
country is the primary key for this table.
Each row in this table shows a country name and the number of gold, silver, and bronze medals it won in the Olympic games.
</pre>

<p>&nbsp;</p>

<p>The Olympic table is sorted according to the following rules:</p>

<ul>
	<li>The country with more gold medals comes first.</li>
	<li>If there is a tie in the gold medals, the country with more silver medals comes first.</li>
	<li>If there is a tie in the silver medals, the country with more bronze medals comes first.</li>
	<li>If there is a tie in the bronze medals, the countries with the tie are sorted in ascending order lexicographically.</li>
</ul>

<p>Write an SQL query to sort the Olympic table</p>

<p>The query result format is shown in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
Olympic table:
+-------------+-------------+---------------+---------------+
| country     | gold_medals | silver_medals | bronze_medals |
+-------------+-------------+---------------+---------------+
| China       | 10          | 10            | 20            |
| South Sudan | 0           | 0             | 1             |
| USA         | 10          | 10            | 20            |
| Israel      | 2           | 2             | 3             |
| Egypt       | 2           | 2             | 2             |
+-------------+-------------+---------------+---------------+
<strong>Output:</strong> 
+-------------+-------------+---------------+---------------+
| country     | gold_medals | silver_medals | bronze_medals |
+-------------+-------------+---------------+---------------+
| China       | 10          | 10            | 20            |
| USA         | 10          | 10            | 20            |
| Israel      | 2           | 2             | 3             |
| Egypt       | 2           | 2             | 2             |
| South Sudan | 0           | 0             | 1             |
+-------------+-------------+---------------+---------------+
<strong>Explanation:</strong> 
The tie between China and USA is broken by their lexicographical names. Since "China" is lexicographically smaller than "USA", it comes first.
Israel comes before Egypt because it has more bronze medals.
</pre>
</div>