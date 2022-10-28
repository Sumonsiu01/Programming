#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector<pair<string,int>>v;

    v.push_back({"Sumon",4});
    v.push_back({"Alamin",1});
    v.push_back({"akhter",6});
    v.push_back({"Sumon",4});
    v.push_back({"Alamin",1});
    v.push_back({"Sumon",4});
    v.push_back({"Alamin",1});
    v.push_back({"akhter",6});
    v.push_back({"Sumon",4});
    v.push_back({"Alamin",1});
    sort(v.begin(),v.end());
    int sz = unique( v.begin(),v.end () )-v.begin();
    for(int i = 0; i<sz; i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
}
