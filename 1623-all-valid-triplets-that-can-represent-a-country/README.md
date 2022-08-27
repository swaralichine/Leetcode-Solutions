<h2><a href="https://leetcode.com/problems/all-valid-triplets-that-can-represent-a-country/">1623. All Valid Triplets That Can Represent a Country</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi"><a class="sql-schema-link__3cEg">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z"></path></svg></a></div><div><p>Table: <code>SchoolA</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| student_id    | int     |
| student_name  | varchar |
+---------------+---------+
student_id is the primary key for this table.
Each row of this table contains the name and the id of a student in school A.
All student_name are distinct.
</pre>

<p>&nbsp;</p>

<p>Table: <code>SchoolB</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| student_id    | int     |
| student_name  | varchar |
+---------------+---------+
student_id is the primary key for this table.
Each row of this table contains the name and the id of a student in school B.
All student_name are distinct.
</pre>

<p>&nbsp;</p>

<p>Table: <code>SchoolC</code></p>

<pre>+---------------+---------+
| Column Name   | Type    |
+---------------+---------+
| student_id    | int     |
| student_name  | varchar |
+---------------+---------+
student_id is the primary key for this table.
Each row of this table contains the name and the id of a student in school C.
All student_name are distinct.
</pre>

<p>&nbsp;</p>

<p>There is a country with three schools, where each student is enrolled in <strong>exactly one</strong> school. The country is joining a competition and wants to select one student from each school to represent the country such that:</p>

<ul>
	<li><code>member_A</code> is selected from <code>SchoolA</code>,</li>
	<li><code>member_B</code> is selected from <code>SchoolB</code>,</li>
	<li><code>member_C</code> is selected from <code>SchoolC</code>, and</li>
	<li>The selected students' names and IDs are pairwise distinct (i.e. no two students share the same name, and no two students share the same ID).</li>
</ul>

<p>Write an SQL query to find all the possible triplets representing the country under the given constraints.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The query result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> 
SchoolA table:
+------------+--------------+
| student_id | student_name |
+------------+--------------+
| 1          | Alice        |
| 2          | Bob          |
+------------+--------------+
SchoolB table:
+------------+--------------+
| student_id | student_name |
+------------+--------------+
| 3          | Tom          |
+------------+--------------+
SchoolC table:
+------------+--------------+
| student_id | student_name |
+------------+--------------+
| 3          | Tom          |
| 2          | Jerry        |
| 10         | Alice        |
+------------+--------------+
<strong>Output:</strong> 
+----------+----------+----------+
| member_A | member_B | member_C |
+----------+----------+----------+
| Alice    | Tom      | Jerry    |
| Bob      | Tom      | Alice    |
+----------+----------+----------+
<strong>Explanation:</strong> 
Let us see all the possible triplets.
- (Alice, Tom, Tom) --&gt; Rejected because member_B and member_C have the same name and the same ID.
- (Alice, Tom, Jerry) --&gt; Valid triplet.
- (Alice, Tom, Alice) --&gt; Rejected because member_A and member_C have the same name.
- (Bob, Tom, Tom) --&gt; Rejected because member_B and member_C have the same name and the same ID.
- (Bob, Tom, Jerry) --&gt; Rejected because member_A and member_C have the same ID.
- (Bob, Tom, Alice) --&gt; Valid triplet.
</pre>
</div>