#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the total activity: "<<endl;
    cin>>n;
    cout<<endl;

    vector<pair<int,int>>v;

    for(int i = 0;i<n;i++)
    {
        int start,endT;
        cin>>start>>endT;

        v.push_back({endT,start});
    }
    sort(v.begin(),v.end());

    int take = 1;
    int k = v[0].first;

    for(int i = 1;i<n;i++)
    {
        if(v[i].second>=k)
        {
            take++;
            k = v[i].first;
        }

    }
    cout<<take<<endl;
}
