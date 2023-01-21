#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
/*
this template is for set but if we use multiset we just use "less_equal" instead of only less.cause we know multiset contain duplicate value
where as set contain only sorting order unique value.And if we write here "greater" instead of "less" it will print the value decsending order
.follow the file pbds2 ans pbds3
*/
typedef tree< long long, null_type, greater<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;


int main()
{

    ordered_set ps;

    ps.insert(1);
    ps.insert(5);
    ps.insert(3);

    ps.insert(9);

    cout<<ps.size()<<endl;

    for(auto u:ps)


        cout<<u<<" ";


}
