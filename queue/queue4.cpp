//how to reverse a full queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,k;
    cin>>k;
    queue<int>q;
    stack<int>st;
    while(k--)
    {
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
