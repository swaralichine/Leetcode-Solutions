<h2><a href="https://leetcode.com/problems/the-winner-university/">2072. The Winner University</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>NewYork</code></p>

<pre>+-------------+------+
| Column Name | Type |
+-------------+------+
| student_id  | int  |
| score       | int  |
+-------------+------+
student_id is the primary key for this table.
Each row contains information about the score of one student from New York University in an exam.
</pre>

<p>&nbsp;</p>

<p>Table: <code>California</code></p>

<pre>+-------------+------+
| Column Name | Type |
+-------------+------+
| student_id  | int  |
| score       | int  |
+-------------+------+
student_id is the primary key for this table.
Each row contains information about the score of one student from California University in an exam.
</pre>

<p>&nbsp;</p>

<p>There is a competition between New York University and California University. The competition is held between the same number of students from both universities. The university that has more <strong>excellent students</strong> wins the competition. If the two universities have the same number of <strong>excellent students</strong>, the competition ends in a draw.</p>

<p>An <strong>excellent student</strong> is a student that scored <code>90%</code> or more in the exam.</p>

<p>Write an SQL query to report:</p>

<ul>
	<li><strong>"New York University"</strong> if New York University wins the competition.</li>
	<li><strong>"California University"</strong> if California University wins the competition.</li>
	<li><strong>"No Winner"</strong> if the competition ends in a draw.</li>
</ul>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
NewYork table:
+------------+-------+
| student_id | score |
+------------+-------+
| 1          | 90    |
| 2          | 87    |
+------------+-------+
California table:
+------------+-------+
| student_id | score |
+------------+-------+
| 2          | 89    |
| 3          | 88    |
+------------+-------+
<strong>Output:</strong> 
+---------------------+
| winner              |
+---------------------+
| New York University |
+---------------------+
<strong>Explanation:</strong>
New York University has 1 excellent student, and California University has 0 excellent students.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> 
NewYork table:
+------------+-------+
| student_id | score |
+------------+-------+
| 1          | 89    |
| 2          | 88    |
+------------+-------+
California table:
+------------+-------+
| student_id | score |
+------------+-------+
| 2          | 90    |
| 3          | 87    |
+------------+-------+
<strong>Output:</strong> 
+-----------------------+
| winner                |
+-----------------------+
| California University |
+-----------------------+
<strong>Explanation:</strong>
New York University has 0 excellent students, and California University has 1 excellent student.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> 
NewYork table:
+------------+-------+
| student_id | score |
+------------+-------+
| 1          | 89    |
| 2          | 90    |
+------------+-------+
California table:
+------------+-------+
| student_id | score |
+------------+-------+
| 2          | 87    |
| 3          | 99    |
+------------+-------+
<strong>Output:</strong> 
+-----------+
| winner    |
+-----------+
| No Winner |
+-----------+
<strong>Explanation:</strong>
Both New York University and California University have 1 excellent student.
</pre>
</div>