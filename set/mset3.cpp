#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(3);
    s.erase(1);
    for(auto u:s)
        cout<<u<<" ";
    cout<<endl;
    return 0;
}

