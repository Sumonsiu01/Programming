#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the list: "<<endl;
    cin>>n;

    vector<int>v(n);
    cout<<"Enter the element of the list: ";
    for(int i = 0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());
    vector<int>::iterator it;
  
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(),it));

    for(auto u:v)
        cout<<u<<" ";


}

