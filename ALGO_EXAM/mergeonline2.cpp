///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;




map<string, vector<string>> adj;
map<string, string> par;
map<string, int> lev;

void bfs ( string s )
{

    queue<string> q;
    q.push( s );
    lev[s]= 1;

    while ( !q.empty() )
    {
        string u = q.front();
        q.pop();

        for ( auto v : adj[u] )
        {
            if ( lev[v] == 0 )
            {
                lev[v] = lev[u] + 1;
                par[v] = u;
                q.push( v );
            }
        }
    }
}


int main()
{
    cout<<"Enter the number of edges: ";
    int n;
    cin>>n;

    for ( int i = 1; i <= n; i++ )
    {
        string u, v;
        cin >> u >> v;
        adj[u].push_back ( v );
        adj[v].push_back ( u );
    }

    string s, t;
    cin >> s >> t;

    bfs ( s );

    if ( lev[t] == 0 )
    {
        cout << "No route\n";
    }

    vector<pair<string, string>> path;

    while ( !par[t].empty() )
    {
        path.push_back( { par[t], t } );
        t = par[t];
    }

    reverse( path.begin(), path.end() );

    for ( auto u : path ) cout << u.first << " " << u.second << endl;


    return 0;
}
