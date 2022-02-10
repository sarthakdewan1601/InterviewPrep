# Maximum Sum Square SubMatrix

#### Medium

<hr>

<br>

Link - https://www.interviewbit.com/problems/maximum-sum-square-submatrix/

<br>

Approach - 

* The idea is to preprocess the given square matrix. In the preprocessing step, calculate sum of all vertical strips of size B x 1 in a temporary square matrix stripSum[][].
Once we have sum of all vertical strips, we can calculate sum of first sub-square in a row as sum of first B strips in that row, and for remaining sub-squares, we can calculate sum in O(1) time by removing the leftmost strip of previous subsquare and adding the rightmost strip of new square.

* Lot of Indexing issues I faced in this question.
* Overall a great maths problem I think.

* Time complexity - ```O(n)```

<br>

***Cheers!***