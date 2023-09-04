#include<bits/stdc++.h>
using namespace std;

void fun(int index,vector<int>v,vector<int>ans,int n)
{
    if(index>=n)
    {
        for(int i = 0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    ans.push_back(v[index]);
    fun(index+1,v,ans,n);
    ans.pop_back();
    fun(index+1,v,ans,n);
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    vector<int>ans;

    fun(0,v,ans,n);
}
