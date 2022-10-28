//BeginCodeSnip{C++ Short Template}
#include <bits/stdc++.h> // see /general/running-code-locally
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
	if (sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
//EndCodeSnip

int main() {
	ll N, X;
	cin >> N >> X;
	vector<pair<int,int>> a;

	// append the element and its index
	for (int i = 0; i < N; i++) {
		ll x;
		cin >> x;
		a.pb({x, i + 1});
	}

	sort(a.begin(), a.end());
	int i = 0, j = N - 1;

	while (i < j) {
		// adjust left and right pointers.
		if(a[i].f + a[j].f > X)
			j--;
		else if (a[i].f + a[j].f < X)
			i++;
		else if (a[i].f + a[j].f == X) {
			cout << a[i].s << " " << a[j].s;
			return 0;
		}
	}
	cout << "IMPOSSIBLE" << endl;
}
