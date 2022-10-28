#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc = 1;t<=t;tc++)
    {
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i = 0;i<n;i++)cin>>v[i];

        int lo = lower_bound(v.begin(),v.end(),x) - v.begin();
        int up = upper_bound(v.begin(),v.end(),x) - v.begin();

        if(lo == v.size())cout<<"-1"<<endl;
        else if(v[lo] != x) cout<<"-1"<<endl;
        else{
            cout<<lo<<" "<<up-1<<endl;
        }
    }
}
