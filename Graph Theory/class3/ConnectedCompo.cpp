//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa2doSVVGenhXMVE5UDRpMm1JVkVKYnJ5REZCd3xBQ3Jtc0tsMTZfQU5qUmdzYVdRTzJmZVE4WUdjcDQyalZKTEpWUnlzNXhINjkwaXJ0Sm5rYTVCZVlpUW5ZUFRFTHU0LTQ1WDdfeEVXV1RZY1VGSlZ4QWJOUWw0V1gxMXA4NjdxbFFOTGZYcFd3VjdEN2JQZHJnWQ&q=https%3A%2F%2Fwww.hackerearth.com%2Fproblem%2Falgorithm%2Fconnected-components-in-a-graph%2F
#include<bits/stdc++.h>
using namespace std;


const int mx = 1e5+123;
bool vis[mx];
vector<int>adj[mx];

void dfs(int u)
{
    vis[u] = 1;

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
    int cnt = 0;
    for(int i = 1;i<=n;i++)
    {
        if(vis[i] == 0)
        {
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;

}
