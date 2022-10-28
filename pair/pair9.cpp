#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    pair<int,int>a[] = {{3,2},{5,7},{1,9},{9,5},{4,9},{3,1}};
    sort(a,a+6);
    for(int i = 0;i<6;i++)
        cout<<a[i].first<<" "<<a[i].second<<endl;
    return 0;
}
