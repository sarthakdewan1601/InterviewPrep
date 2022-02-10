int Solution::solve(vector<string> &A) {
    // int n = arr.size();
    // int i,j,k;
    // vector<double> vec;

    // for(i=0;i<n;i++)
    // {
    //     vec.push_back(stod(arr[i]));
    // }

    // double a = vec[0];
    // double b = vec[1];
    // double c = vec[2];

    // for(i=3;i<n;i++)
    // {
    //     if(a + b + c > 1 && a + b + c < 2)
    //     {
    //         return 1;
    //     }
    //     else if(a + b + c > 2)
    //     {
    //         if(a > b && a > c)
    //         {
    //             a = vec[i];
    //         }
    //         else if(b > a && b > c)
    //         {
    //             b = vec[i];
    //         }
    //         else{
    //             c = vec[i];
    //         }
    //     }
    //     else
    //     {
    //         if(a < b && a < c)
    //         {
    //             a = vec[i];
    //         }
    //         else if(b < a && b < c)
    //         {
    //             b = vec[i];
    //         }
    //         else{
    //             c = vec[i];
    //         }
    //     }
    // }
    // // cout<<a<<endl<<b<<endl<<c<<endl;
    // // cout<<a+b+c<<endl;
    // if(a + b + c > 1 && a + b + c < 2)
    // {
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }
    // int n = arr.size(), i;
    // vector<float> v;
    // for (i = 0; i < n; i++) {
    //     v.push_back(stof(arr[i]));
    // }
    // float a = v[0], b = v[1], c = v[2];

    // float mx = 0;
    // for (i = 3; i < n; i++) {
    //     if (a + b + c < 2 && a + b + c > 1)
    //         return 1;
    //     else if (a + b + c > 2) {
    //         if (a > b && a > c)
    //             a = v[i];
    //         else if (b > a && b > c)
    //             b = v[i];
    //         else
    //             c = v[i];
    //     } else {
    //         if (a < b && a < c)
    //             a = v[i];
    //         else if (b < a && b < c)
    //             b = v[i];
    //         else
    //             c = v[i];
    //     }
    // }
    // if (a + b + c > 1 && a + b + c < 2)
    //     return 1;
    // else
    //     return 0;

    // vector < double > arr;

    // for (auto s:A)
    //     arr.push_back (stod (s));

    // double a = arr[0], b = arr[1], c = arr[2];

    // for (int i = 3; i < A.size ()+1; i++) {
    //     double sum = a+b+c;

    //     if (sum>1 && sum<2)
    //         return 1;

    //     if (i>=A.size())
    //         break;

    //     double x = arr[i];
    //     double m = sum>2 ? max(a, max(b,c)): sum<=1 ? min(a, min(b,c)): -1;

    //     if (m==a) a=x;
    //     else if (m==b) b=x;
    //     else if (m==c) c=x;
    // }
    // return 0;
    int i = 0;
    int j = A.size() - 1;
    sort(A.begin(), A.end());
    while (i < j - 1)
    {
        int mid = (i + j) / 2;
        double x = stof(A[i]);
        double y = stof(A[mid]);
        double z = stof(A[j]);
        double sum = x + y + z;
        if (sum >= 2)
        {
            j--;
        }
        else if (sum <= 1)
        {
            i++;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
