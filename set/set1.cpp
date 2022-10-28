#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    set<int>s = {1,1,2,3,4,5,5};
    cout<<s.size()<<endl;
    for(auto u:s)
        cout<<u<<" ";
    cout<<endl;
}
