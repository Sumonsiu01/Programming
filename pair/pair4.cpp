#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    pair<int,int>p1,p2,p3,p4;
    p1 = {3,4};
    p2 = {5,6};
    if(p1>p2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    /*the will 'no' cause the pair will be compare with the first elements of these pair
    but if both are same the compare will start from the second element of these pair.
    watch the example below
    */
    p3 = {4,8};
    p4 = {4,7};
    if(p3>p4)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
            /*here in next comparison p3 is greater so it will print "Yes"*/



    }
