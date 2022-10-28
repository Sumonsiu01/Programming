#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector<pair<int,int>>v;
    v.push_back({5,6});
    v.push_back({6,8});
    v.push_back({7,9});
    v.push_back({9,7});
    sort(v.rbegin(),v.rend());//descending order
    for(auto u:v)
        cout<<u.first<<" "<<u.second<<endl;
}

