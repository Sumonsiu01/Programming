#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;

bool vis[mx];
vector<int>adj[mx];
int cnt = 0;

void dfs(int u,int N)
{
    vis[u] = 1;
    for(auto v:adj[u])
    {
        if(vis[v]  == 0 && v != N)
        {
            cnt++;
            dfs(v,N);
        }

    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1; i<=n; i++)
    {
        if(vis[i] == 0)
        {
            dfs(i,n);
            ans = min(ans,i);
        }
    }
    cout<<ans<<endl;
}
