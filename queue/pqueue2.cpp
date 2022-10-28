#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;
    cout<<endl<<endl;
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}
