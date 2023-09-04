#include<bits/stdc++.h>
using namespace std;


int cnt = 0;
void fun(int index,vector<int>v,vector<int>ans,int n)
{
    if(index == n)
    {
        cnt++;
        return;
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
    vector<int>ans;
    for(int i = 0;i<n;i++)cin>>v[i];

    fun(0,v,ans,n);
    cout<<cnt<<endl;
}
