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
    cout<<s.count(1)<<endl;
    return 0;
}
