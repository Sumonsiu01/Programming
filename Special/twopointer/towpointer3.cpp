#include<bits/stdc++.h>
using namespace std;
/*
https://leetcode.com/problems/container-with-most-water/

*/
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i= 0;i<n;i++)
    {
        cin>>v[i];
    }

    int ans = 0,start = 0,end = n - 1;

    while(start<=end)
    {
        int temp = min(v[start],v[end])*(end - start);
        ans = max(ans,temp);

        if(v[start]>v[end])
        {
            int current = end;
            while(v[current]>=v[end])
            {
                end --;
                if(end<0)
                {
                    break;
                }
            }
        }
        else
        {
            int current = start;
            while(v[current]>=v[start])
            {
                start++;
                if(start>=n)
                    break;
            }
        }
    }
    cout<<ans<<endl;
}
/*
9
1 8 6 2 5 4 8 3 7


*/
