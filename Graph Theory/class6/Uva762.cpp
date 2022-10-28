#include<bits/stdc++.h>
using namespace std;



map<string,vector<string>>adj;

map<string,string>par;
map<string,int>lev;

void bfs(string s)
{
    lev.clear();
    lev[s]  = 1;

    queue<string>q;
    q.push(s);
    while(!q.empty())
    {
        string u = q.front();
        for(auto v:adj[u])
        {
            if(lev[v] == 0)
            {
                lev[v] = lev[u] + 1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

int main()
{
    int n;
    bool yes = 0;
    while(cin>>n)
    {
        adj.clear();
        par.clear();
        if(yes) cout<<endl;
        yes = 1;

        for(int i = 0; i<n; i++)
        {
            string u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);

        }

    }
    string s,t;
    bfs(s);
    vector<pair<string,string>>ans;

    while(!par[t].empty())
    {
        ans.push_back({par[t],t});
                      t = par[t];
    }
    reverse(ans.begin(),ans.end());

    for(auto u:ans)
        cout<<u.first<<" "<<u.second<<endl;
}
