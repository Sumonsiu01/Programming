#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;


int main()
{
    ordered_set ps;
    ps.insert(1);
    ps.insert(1);
    ps.insert(2);
    ps.insert(3);
    ps.insert(3);

cout<<ps.size()<<endl;
for(auto u:ps)
    cout<<u<<" ";

cout<<endl;


}
