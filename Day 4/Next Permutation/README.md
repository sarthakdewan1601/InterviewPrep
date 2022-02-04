# Next permutation

#### Medium
<hr>
Link - https://www.interviewbit.com/problems/next-permutation/

* I don't know how to solve the question without knowing this algorithm.
* Can't even think of it
* Approach -

  * Traverse through the array right to left, starting from n-2 position (n is length of array)
  * If you find a[i+1]>a[i] stop.
  * If you reached i=-1 means array is sorted in decreasing order. Reverse the whole array and return. Else follow next steps
  * Now remember that to the right of i we have decreasing sorted array (from i+1 to n-1)
  * Reverse the array from i+1 to n-1 to make it increasing sorted.
  * Find the smallest number greater than a[i] in this portion and swap with a[i]. Remember there will always be at least one number greater than a[i] here because when you had stopped traversing, you had a[i+1]>a[i], so at least that a[i+1] will still be there, but there still might be another more suitable candidate.
  * You are done!

* Complexity - O(n)

***Cheers!***
