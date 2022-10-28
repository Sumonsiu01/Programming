#include<bits/stdc++.h>
//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbHZzNUM4ZTJTbEFQZDFYLThneUR3aGMxdi1TQXxBQ3Jtc0tsSGRrOWZiWl9lZHJuVmhFeWFVbEN2Zkg2NVRuc2w0MVFjb09Cdm1xWXFoaVFwZUJXVEJQNHpoeFRCTk9rb1Z1R3A5UGg5QUFmY1kwNVNJN3ltRV94S0tCeC05RjZ6TE5mVHBqLW9QTG12NUVfbzc2MA&q=https%3A%2F%2Fwww.spoj.com%2Fproblems%2FBSEARCH1%2F
using namespace std;
#define endl '\n';
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n,q;
    cin>>n>>q;
    vector<int>v(n);

    for(int i =0; i<n; i++)cin>>v[i];
    while(q--)
    {
        int p;
        cin>>p;

        int lo = lower_bound(v.begin(),v.end(),p)- v.begin();
        if(lo == v.size())
        {
            cout<<"-1"<<endl;
        }
        else if(v[lo] != p)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<lo<<endl;
        }
    }
}
