#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;//it will print the lesser pair first cause we use here greater function
    q.push({1,2});
    q.push({2,3});
    q.push({2,4});
    q.push({4,4});
    q.push({3,4});
    while(!q.empty())
    {
        cout<<q.top().first<< " "<<q.top().second<<endl;
        q.pop();
    }
}
