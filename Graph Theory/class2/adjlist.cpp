#include<bits/stdc++.h>
using namespace std;

#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 1e5+125;

vector<int>adj[mx];
int main()
{
    optimize();
    int n,m;///the mumber of node and edge
    cin>>n>>m;
    for(int i = 1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);///here we using this method for indirect graph and there might be an common edge between two adjacent node
        adj[v].push_back(u);///same here
    }
    for(int i= 1;i<=n;i++)
    {
        cout<<"The adjacent lis of "<<i<<" : ";
        for(auto u:adj[i]) cout<<u<<" ";

        cout<<endl;
    }
}
