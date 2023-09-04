#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>v;


void print(int l,int r)
{
    if(l>=r)
    {
        return;
    }
    swap(v[l],v[r]);
    print(l+1,r-1);

}

int main()
{
    cout<<"Enter the number of element: ";
    cin>>n;
    for(int i= 0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
    print(0,n-1);

    cout<<endl<<endl;

    cout<<"Enter the reverse the array will be: "<<endl;
    for(auto u:v)
        cout<<u<<endl;
}
