# 4Sum II

#### Medium

Link - https://leetcode.com/problems/4sum-ii/

***LeetCode Daily Challenge - 3rd Febraury, 2022***
<br>
* Went through hints
* Approach -
  * Divide the array in ```(nums1 , nums2)``` and ```(num3 , nums4)```
  * hashmap &rarr; freq of ```nums[i] + nums[j]```
  * Then find the ```target = -(nums3[i] + nums4[j])``` in hash map and increment value of answer accordingly.
* Good Intuitive Question
