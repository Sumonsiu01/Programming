#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector<pair<string,int>>v;

    v.push_back({"Shahriar",2});
    v.push_back({"Sumon",4});
    v.push_back({"Alamin",1});
    v.push_back({"Akhter",6});
    v.push_back({"Shakib",8});
    sort(v.begin(),v.end());
    for(auto u:v)
        cout<<u.first<<" "<<u.second<<endl;
    return 0;
}
