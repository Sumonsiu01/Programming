//Link : https://www.spoj.com/problems/BSEARCH1/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    while(q--)
    {
        int x;
        cin>>x;
        int lo= lower_bound(v.begin(),v.end(),x) - v.begin();
        if(lo == v.size())cout<<"-1"<<endl;
        else if(v[lo] != x) cout<<"-1";

        else cout<<lo<<endl;


    }

}
