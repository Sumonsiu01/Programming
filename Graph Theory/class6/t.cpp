#include<bits/stdc++.h>


using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 123;

vector<int>adj[mx];
int lev[mx];


void bfs(int s)
{
   mem(lev,-1);
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
               lev[v] = lev[u] + 1;
               q.push(v);
           }
       }
   }
}


int main()
{
    int n,m;

    cin>>n>>m;
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    cout<<lev[n]<<endl;
}


