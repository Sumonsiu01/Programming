//if we want count the  greatest component of a graph(greatest means the maximum number of node)
#include<bits/stdc++.h>
using namespace std;


const int mx = 1e5+123;
bool vis[mx];
vector<int>adj[mx];
int cnt;
void dfs(int u)
{
    vis[u] = 1;
    cnt++;

    for(auto v:adj[u])
    {
        if(vis[v] == 0)
        {
            dfs(v);
        }
    }
    return;
}
int main()
{

    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1;i<=n;i++)
    {
        if(vis[i] == 0)
        {
            cnt = 0;
            dfs(i);
            ans  = max(ans,cnt);

        }
    }
    cout<<ans<<endl;

}

