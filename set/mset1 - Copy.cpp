#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    multiset<int>s;//multiset will not print the result as uniqe element like set it also print the ununique element
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(auto u:s)
        cout<<u<<" ";
    cout<<endl;
}
