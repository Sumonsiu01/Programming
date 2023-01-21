#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;


int main()
{

    ordered_set ps;

    ps.insert(1);
    ps.insert(5);
    ps.insert(3);

    ps.insert(9);
    ps.insert(3);

    cout<<ps.size()<<endl;

    for(auto u:ps)

    cout<<u<<" ";


    cout<<endl;
    cout<<"There is less three value is: ";

    cout<<ps.order_of_key(3)<<endl;


    //the output will 1 cause there is only one value is less three;

    //coplexity log2(n)
}
