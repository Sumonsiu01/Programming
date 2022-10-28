#include<bits/stdc++.h>
using namespace std;


map<string,vector<string>>adj;
map<string,string>par;
map<string,int>lev;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void bfs(string s)
{
    lev.clear();
    queue<string>q;
    q.push(s);
    lev[s] = 1;
    while(!q.empty())
    {
        string u  = q.front();
        q.pop();
        for(auto v:adj[u])
        {
            if(lev[v] == 0)
            {
                lev[v] = lev[u]+1;
                par[v] = u;
                q.push(v);
            }
        }

    }

}

int main()
{
    optimize();
    int n;
    bool ok = 0;

    while(cin>>n)
    {
        if(ok)cout<<endl;
        ok = 1;


        adj.clear();
        par.clear();

        for(int i = 0; i<n; i++)
        {
            string u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        string s,t;
        cin>>s>>t;
        bfs(s);
        if(lev[t] == 0)
        {
            cout<<"No Rout"<<endl;
            continue;
        }
        vector<pair<string,string>>path;
        while(!par[t].empty())
        {
            path.push_back({par[t],t});
            t = par[t];
        }

        reverse(all(path));

        for(auto u:path)
        {
            cout<<u.first<<" "<<u.second<<endl;
        }
    }
    return 0;
}
