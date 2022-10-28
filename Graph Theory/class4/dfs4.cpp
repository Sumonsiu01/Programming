//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0tBN0ljdV9ZeEZtd3BYRXBhN1NYZVNBdlVld3xBQ3Jtc0ttWG1EWlVyOUwwb1VSVU1pWmMzYWplQUYxZVZnNFVscDFlR2hSZGRZcUZpS2Jud0NPb012MDVqOUVZcGlCZUE1V2F2RjZJWUZkNkZ4azF3YjNBSGVKN0hsOC1IU01BSHp6WFp5R0RvSGhMdGk4MXczUQ&q=http%3A%2F%2Flightoj.com%2Fvolume_showproblem.php%3Fproblem%3D1009&v=4Hq7CbMul_A
#include<bits/stdc++.h>
using namespace std;


const int mx = 2e4+123;

bool vis[mx];
vector<int>adj[mx];
bool isNode[mx];
int cnt,cnt1;

void dfs(int u,int col)
{
    vis[u] = 1;
    if(col == 1) cnt1++;
    cnt++;
    int temp;
    if(col == 1) temp = 2;
    else temp = 1;

    for(auto v:adj[u])
    {
        if(vis[v] == 0)
        {
            dfs(v,temp);
        }
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    for(int tc = 1; tc<=t; tc++)
    {
        for(int i = 0; i<mx; i++)
        {
            adj[i].clear();
            isNode[i] = 0;
            vis[i] = 0;
        }
        int m;
        cin>>m;
        for(int i = 1; i<=m; i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            isNode[u] = 1;
            isNode[v] = 1;
        }
        int ans = 0;
        for(int i = 1; i<=2e4; i++)
        {
            if(isNode[i] == 1 && vis[i] == 0)
            {
                cnt = 0,cnt1 = 0;
                dfs(i,1);
                ans+=max(cnt1,cnt - cnt1);


            }
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;

    }
}

