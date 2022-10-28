#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    pair<int,int>p1,p2;
    p1 = {1,4};
    p2 = {4,5};
    pair<int,int>p=min(p1,p2);
    cout<<p.first<<" "<<p.second<<endl;
}

