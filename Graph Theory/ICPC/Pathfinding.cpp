//With the name of Allah
/*7
1 2
2 3
3 5
2 4
4 5
1 5
5 6


1 -> 6
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt = 0;
vector<int>adj[1000];


void dfs(int visited[1000],int u,int v,vector<int>path)
{
    visited[u] = 1;
    if(u == v)
    {
        for(int i = 0;i<path.size();i++)
            cout<<path[i]<< " ";
            cout<<endl;

    }
    else{
        for(int i = 0;i<adj[u].size();i++)
        {
            int k  = adj[u][i];
            if(visited[k] == 0)
            {
                visited[k] = 1;
                path.push_back(k);
                dfs(visited,k,v,path);
                path.pop_back();

            }
        }
    }
    visited[u] = 0;
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
    int visited[10000] = {0};
    vector<int>path;
    int x,y;
    cin>>x>>y;
    path.push_back(x);

    dfs(visited,x,y,path);
    //cout<<cnt<<endl;
}
