#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    set<int>s;
    int q;
    cin>>q;
    while(q--)
    {
        int x,typ;
        cin>>typ>>x;
        if(typ == 1)
        {
            s.insert(x);
        }
        else if(typ == 2)
        {
            s.erase(x);
        }
        else
        {
            if(s.count(x) == 1)
            {
                cout<<"YES"<<endl;

            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
