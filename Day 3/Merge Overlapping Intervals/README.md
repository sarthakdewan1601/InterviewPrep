# Merge Overlapping Intervals

#### Medium

Very similar Question to Merge Intervals solved on Day 3 itself.

Approach -
* Used stacks
* Compared every current element with stack and if it is overlapping then changed the end value of top of the stack accordingly.
* Else pushed the current element as it is.
* Reversed the ans vecto and returned.

Simpler than the normal merge Intervals as less number of edge cases.
<br>
***Cheers!***
