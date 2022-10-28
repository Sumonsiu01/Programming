#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    set<int>s = {1,2,4,6,7,4,2};
    s.clear();
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout<<*s.begin()<<endl;
    cout<<*(--s.end())<<endl;
}
