#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>v;

void print(int i)
{
    if(i>=n/2)
    {
        return;
    }
    swap(v[i],v[n-i-1]);
    print(i+1);
}
int main()
{
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }

    print(0);

    cout<<"After the reversion the array will be: "<<endl;
    for(auto u:v)
        cout<<u<<endl;

}
