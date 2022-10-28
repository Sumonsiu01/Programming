#include<bits/stdc++.h>
using namespace std;
#define iptimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    set<int>s = {1,2,3,4};
    cout<<s.size()<<endl;
    s.erase(2);
    cout<<s.size()<<endl;
    for(auto u:s)
        cout<<u<<" ";
    cout<<endl;
}
