#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    set<int>s;
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    cout<<s.count(2)<<endl;
}
