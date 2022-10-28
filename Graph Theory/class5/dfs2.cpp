#include<bits/stdc++.h>
using namespace std;


const int mx = 1e4+123;

int lev[mx];
vector<int>adj[mx];

void bfs(int s)
{
    memset(lev,-1,sizeof(lev));
    lev[s] = 0;

    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(lev[v] == -1)
            {
                lev[v] = lev[u]+1;
                q.push(v);
            }
        }
    }
}

int main()

{
    int n;
    cin>>n;
    for(int i = 1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    int q,mini = lev[1],k=6;
    cin>>q;
    for(int i = 0;i<q;i++)
    {
        int v;
        cin>>v;
        if(lev[v] < mini && v<k)
        {
            mini = lev[v];
            k = v;
        }
    }
    cout<<k<<endl;


}
