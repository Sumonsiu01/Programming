#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    set<pair<int,int>>s;
    s.insert({2,4});
    s.insert({4,7});
    s.insert({2,7});
    s.insert({9,8});
    s.insert({9,1});
    s.insert({6,3});
    cout<<s.size()<<endl;
    for(auto u:s)
        cout<<u.first<<"  "<<u.second<<endl;
    }
