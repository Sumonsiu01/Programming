#include<bits/stdc++.h>
using namespace std;


const int mx = 1e5+123;

vector<int>adj[mx];
int cnt;

bool vis[mx];



void dfs(int s)
{
    vis[s] = 1;
    cnt++;
    for(auto v:adj[s])
    {
        if(vis[v] == 0)
        {
            dfs(v);
        }
    }
}
int main()
{
    int n,m;

    cin>>n>>m;

    for(int i= 0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    int ans= 0;
    for(int i = 0; i<n; i++)
    {
        if(vis[i] == 0)
        {
            dfs(i);
            ans = max(ans,cnt);

        }
    }
    cout<<ans<<endl;
}
