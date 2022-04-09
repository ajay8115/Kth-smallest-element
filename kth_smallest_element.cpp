// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int kthSmallest(int a[], int l, int r, int k)
{
    int n = r - l + 1;
    priority_queue<int> maxh;
    for (int i = 0; i < n; i++)
    {
        maxh.push(a[i]);
        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }

    return maxh.top();
}