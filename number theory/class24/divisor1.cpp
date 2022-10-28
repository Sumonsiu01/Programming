#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int>div;
    int sq  = sqrt(n);


    for(int i = 1;i<sq;i++)
    {
        if(n%i == 0) div.push_back(i);
        if(n/i != 0) div.push_back(n/i);
    }
    sort(div.begin(),div.end());

    for(auto u:div)cout<<u<<" "<<endl;
}
