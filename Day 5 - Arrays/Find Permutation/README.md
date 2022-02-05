# Find Permutation

#### Medium

Link - https://www.interviewbit.com/problems/find-permutation/

* Wow Question
* I didn't know stacks are such a beauty
* O(n) solution

Code snippet - 
<br>
```
for(i=0;i<n;i++)
    {
        if(A[i] == 'D')
        {
            s.push(num);
            num++;
        }
        else
        {
            s.push(num);
            num++;
            while(!s.empty())
            {
                ans.push_back(s.top());
                s.pop();
            }
        }
    }
    s.push(num);
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
  ```
    
 ***Cheers!***
