//Alhamdulillah
//solved


#include<bits/stdc++.h>
using namespace std;

int add(vector<int>v,int sum)
{
    int koin = 0;

    for(auto u:v)
    {
        sum-=u;
        koin+=u;

        if(koin>sum)
        {
            return koin;
            break;
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int  mycoin = 0;
    int koin = 0;
    vector<int>v(n);

    for(int i = 0; i<n; i++)
    {
        int p;
        cin>>p;
        sum+=p;
        v.push_back(p);
    }
    sort(v.rbegin(),v.rend());

    int ans = add(v,sum);
    int last = 0;
    int j = 0;
    for(int i = 0;i<v.size();i++)
    {
        last+=v[i];
        if(last == ans)
        {
            break;
        }
        j++;
    }
    cout<<j+1<<endl;
}
