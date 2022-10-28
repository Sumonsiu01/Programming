//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/highest-average-64bdd761/

#include<bits/stdc++.h>
using namespace std;
////////////////////////////////usnsolved

const int mx = 5e5;
int arr[mx];

float getaverage(int m)
{
    float val = 0;
    for(int i=0; i<m; i++)val+=arr[i];

    float pk = val/m;
}


int main()
{
    int n;
    cin>>n;
    //int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];

    int l =1,r=n,k;
    cin>>k;
    while(k--)
    {
        int p,ans = -1;
        cin>>p;
        while(l<=r)
        {
            int mid = (l+r)>>1;
            if(getaverage(mid) > p)
            {
                ans = mid;
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        if(ans == -1)
        cout<<"0"<<endl;
        else
            cout<<ans<<endl;
    }

}
