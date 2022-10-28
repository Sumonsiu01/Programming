//the graph is for bipartite graph

#include<bits/stdc++.h>

using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 212;

vector<int>adj[mx];

int col[mx];


bool bipartite(int s)
{
    optimize();
    mem(col,-1);

    col[s] = 1;

    queue<int>q;

    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(col[v] == -1)
            {
                if(col[u] == 1) col[v] = 2;
                 else col[v] = 1;
                 q.push(v);
            }
            else if(col[v] == col[u])
            {
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
    int n;

    while(cin>>n)
    {
        if(n==0 )break;

        for(int i = 0 ; i<mx; i++)
        {
            adj[i].clear();
        }
        int m;
        cin>>m;
        for(int i = 0; i<m; i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        if(bipartite(0) == 1) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0 ;
}
