///   ***   ---   |||         In the name of ALLAH        |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define PB push_back

map<string, vector<string>> adj;
map<string, string> par;
map<string, int> lev;

void bfs ( string s )
{
    lev.clear();

    queue<string> q;
    q.push( s );
    lev[s]= 1;

    while ( !q.empty() ) {
        string u = q.front();
        q.pop();

        for ( auto v : adj[u] ) {
            if ( lev[v] == 0 ) {
                lev[v] = lev[u] + 1;
                par[v] = u;
                q.push( v );
            }
        }
    }
}


int main()
{
    optimize();

    int n;
    bool ok = 0;

    while ( cin >> n ) {
        if ( ok ) cout << endl;
        ok = 1;

        adj.clear();
        par.clear();

        for ( int i = 1; i <= n; i++ ) {
            string u, v;
            cin >> u >> v;
            adj[u].PB ( v );
            adj[v].PB ( u );
        }

        string s, t;
        cin >> s >> t;

        bfs ( s );

        if ( lev[t] == 0 ) {
            cout << "No route\n";
            continue;
        }

        vector<pair<string, string>> path;

        while ( !par[t].empty() ) {
            path.PB ( { par[t], t } );
            t = par[t];
        }

        reverse( path.begin(), path.end() );

        for ( auto u : path ) cout << u.first << " " << u.second << endl;

    }

    return 0;
}
