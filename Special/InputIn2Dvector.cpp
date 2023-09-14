#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>v;
    for(int i = 0;i<4;i++)
    {
        vector<int>v1;

        for(int j = 0;j<4;j++)
        {
            int p;
            cin>>p;
            v1.push_back(p);
        }
        v.push_back(v1);
    }
    cout<<v.size()<<endl;
}

