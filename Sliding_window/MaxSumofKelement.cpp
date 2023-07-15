#include<bits/stdc++.h>
using namespace std;

//this proble is to find out the k number of contiquas element's of array maximum sum

int solve (vector<int>v,int n,int k)
{

    if(n<k)
    {
        return -1;
    }

    int maxsum = 0;
    for(int i = 0;i<k;i++)
    {
        maxsum+=v[i];
    }

    int windowsum  = maxsum;
    for(int i = k ;i<n;i++)
    {
        windowsum += v[i] - v[i-k];
        maxsum = max(windowsum,maxsum);
    }
    return maxsum;
}
int main()
{

    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];

    cout<<solve(v,n,k)<<endl;
}
