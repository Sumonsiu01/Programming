#include<bits/stdc++.h>
using namespace std;

const int mx  = 1e5;
vector<int>adj[mx];

bool vis[mx];

void dfs(int s,int des)
{
    vis[s] == 1;

    for(auto u:adj[s])
    {
        if(u==v)
        {
            v.push_back(u)

        }
        else{

        }
    }
}

int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<"Enter source to desstination: "<<endl;

    int x,y;
    cin>>x>>y;

}
