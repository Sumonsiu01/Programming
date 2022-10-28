#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 123;
vector<int>adj[mx];
int vis[mx];
int cnt ;

void dfs(int u,int v)
{
    vis[u] = 1;
    if(u == v)
    {
        cnt++;
    }
    else
    {
        for(auto k:adj[u])
        {
            if(vis[k] == 0)
            {
                dfs(k,v);
            }
        }
    }
    vis[u] == 0;
}
int main()
{
    optimize();
    int m;
    cin>>m;

    for(int i = 0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int x,y;
    cin>>x>>y;
    dfs(x,y);
}
