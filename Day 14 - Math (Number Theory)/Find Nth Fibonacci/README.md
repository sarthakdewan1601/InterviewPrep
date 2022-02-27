# Find Nth Fibonacci

#### Hard

Link - https://www.interviewbit.com/problems/find-nth-fibonacci/

<br>
<hr>

* I didn't know about this appraoch man.
* Amazing appraoch using matrices which took only o(logn) time.
* Approach -
<br>
As A is very large we can not use normal recursion or dynamic programming to find the fibonacci number.
We need to find some more efficient trick.

Method 1: ( Using power of the matrix {{1, 1},{1, 0}} )
This O(A) approach which relies on the fact that if we n times multiply the matrix M = {{1, 1},{1, 0}} to itself (in other words calculate power(M, n )), then we get the (n+1)th Fibonacci number as the element at row and column (0, 0) in the resultant matrix.

The matrix representation gives the following closed expression for the Fibonacci numbers:

<br>
({1,1},{1,0})<sup>n</sup> = ({Fn+1,Fn},{Fn,Fn-1})
<br>

This method can be optimized to work in O(LogA) time complexity.
We can do recursive multiplication to get power(M, n) in the previous method using this trick.

Time Complexity: O(LogA)
Extra Space: O(LogA) if we consider the function call stack size, otherwise O(1).



***Cheers!***