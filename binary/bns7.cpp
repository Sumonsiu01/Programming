#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {5,7,7,8,8,10};
    int lo = lower_bound(v.begin(),v.end(),8)-v.begin();
    int up = upper_bound(v.begin(),v.end(),8) - v.begin();

    cout<<lo<<"\t"<<up<<endl;
}
