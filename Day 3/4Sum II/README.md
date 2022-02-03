# 4Sum II

#### Medium

Link - https://leetcode.com/problems/4sum-ii/

*LEETCODE DAILY CHALLENGE - 3RD FEBRAURY 2022
* Went through hints
* Approach -
  * Divide the array in ```(nums1 , nums2)``` and ```(num3 , nums4)```
  * hashmap --> freq of ```nums[i] + nums[j]```
  * Then find the ```target = -(nums3[i] + nums4[j])``` in hash map and increment value of answer accordingly.
* Good Intuitive Question
