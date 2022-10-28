#include<bits/stdc++.h>
using namespace std;

const int mx = 123;

vector<int>divs[mx];

int main()
{
    int n;
    cin>>n;

    for(int i =1;i<=n;i++)
    {
        int sq = sqrt(i);
        for(int j = 1;j<=sq;j++)
        {
            if(i%j == 0) divs[i].push_back(j);  //complexity of this programme is o(n root n) one more thing when we use big array size we should declare it global cause main function is limited
            if(i/j != j)divs[i].push_back(i/j);
        }
        sort(divs[i].begin(),divs[i].end());
    }

    for(int i= 1;i<=n;i++)
    {
         cout<<i<<": ";
        for(auto u:divs[i])
        {

            cout<<u<<" ";
        }
        cout<<endl;
    }
}
