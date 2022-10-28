//https://codeforces.com/problemset/problem/706/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int days;
  //  for(auto u:v)cout<<u<< " "<<endl;
    cin>>days;
    while(days>0)
    {
        int price;
        cin>>price;
        int k = upper_bound(v.begin(),v.end(),price)- v.begin();
        cout<<k<<endl;

        days--;
    }
}
