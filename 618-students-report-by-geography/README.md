<h2><a href="https://leetcode.com/problems/students-report-by-geography/">618. Students Report By Geography</a></h2><h3>Hard</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>Student</code></p>

<pre>+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| name        | varchar |
| continent   | varchar |
+-------------+---------+
There is no primary key for this table. It may contain duplicate rows.
Each row of this table indicates the name of a student and the continent they came from.
</pre>

<p>&nbsp;</p>

<p>A school has students from Asia, Europe, and America.</p>

<p>Write an SQL query to <a href="https://en.wikipedia.org/wiki/Pivot_table" target="_blank">pivot</a> the continent column in the <code>Student</code> table so that each name is <strong>sorted alphabetically</strong> and displayed underneath its corresponding continent. The output headers should be <code>America</code>, <code>Asia</code>, and <code>Europe</code>, respectively.</p>

<p>The test cases are generated so that the student number from America is not less than either Asia or Europe.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
Student table:
+--------+-----------+
| name   | continent |
+--------+-----------+
| Jane   | America   |
| Pascal | Europe    |
| Xi     | Asia      |
| Jack   | America   |
+--------+-----------+
<strong>Output:</strong> 
+---------+------+--------+
| America | Asia | Europe |
+---------+------+--------+
| Jack    | Xi   | Pascal |
| Jane    | null | null   |
+---------+------+--------+
</pre>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> If it is unknown which continent has the most students, could you write a query to generate the student report?</p>
</div>