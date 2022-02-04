# Contiguous Array

#### Medium

Link - https://leetcode.com/problems/contiguous-array/

***Leetcode 4th Febraury, 2022 challenge***

* I liked the question since it uses the concept of hash maps and prefix sum.
* I really needed to practice more questions on prefix/suffix sum, which I will dedicate whole one day to.
* Approach -
  * Sum variable = 0
  * Traversed in the nums array, wherever 0 &rarr; sum-- , and wherever 1 &rarr; sum++
  * Store the value of sum in a hash map
  * If sum already occured then increase the ans = max(ans,i-umap[sum])
  *  ```O(n) solution```

* Enjoyed the problem, looking forward for more problems like these in future to solve on my own.

***Cheers!***
