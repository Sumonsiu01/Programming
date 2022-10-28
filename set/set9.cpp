#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    set<string>s;
    s.insert("Sumon");
    s.insert("Alamin");
    s.insert("Rafi");
    s.insert("Akhter");
    s.insert("Shimul");
    s.insert("Nadim");
    s.insert("Amirul");
    s.insert("Shakib");
    s.insert("Kamrul");
    s.insert("Saju");
    cout<<s.size()<<endl;
    for(auto u:s)
        cout<<u<<endl;
}
