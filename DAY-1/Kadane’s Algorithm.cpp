#include<bits/stdc++.h>

using namespace std;
int maxSubArraySum(int a[], int size)
{
    int su = INT_MIN, max_here = 0;
  
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_here + a[i];
        if (max_so_far < max_here)
            max_so_far = max_here;
  
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    int a[] = {6,5,4,3,-1,-6,4,0};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << max_sum;
    return 0;
}
