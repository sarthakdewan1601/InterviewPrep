# Merge Intervals

### Medium

Link - https://www.interviewbit.com/problems/merge-intervals/

Intuition-
* Tough question for me, I spent hours doing it.
* Finally had to go through the solution
* Approach - 
  * We have to consider the 6 cases - 
    * Case 1 - If n == 0 , return just the newInterval
    * Case 2 - If the ```newInterval.end < intervals[0].start```
    * Case 3 - If ```newInterval.start > intervals[n-1].end```
    * Case 4 - If the Interval is the global interval ,i.e, ```newInterval.start < intervals[0].start and newInterval.end > intervals[n-1].end```
    * Case 5 - If the newInterval is not overlapping and lying between the intervals
    * Case 6 - If the interval is overlapping
* Had to practice more questions like these
* Enjoyed the problem :)
<br>

***Cheers!***
