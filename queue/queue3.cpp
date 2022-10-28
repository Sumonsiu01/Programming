//reverse queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    queue<int>ret;
    stack<int>st;
    int k;
    cin>>k;
    while(k--)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        ret.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        ret.push(q.front());
        q.pop();
    }
    while(!ret.empty())
    {
        cout<<ret.front()<<endl;
        ret.pop();
    }
}
