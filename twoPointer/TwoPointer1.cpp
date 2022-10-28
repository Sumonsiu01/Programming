#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,target = 9;
    cin>>n;
    vector<int>v;

    for(int i = 0; i<n; i++)
    {
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    int lo = 0,hi = v.size() - 1;
    while(v[lo]+v[hi] != target)
    {
        if(v[lo] + v[hi]  < target)
        {
            lo++;
        }
        else
        {
            hi--;
        }

    }
    cout<<"["<<lo+1<<","<<hi+1<<"]"<<endl;

}
