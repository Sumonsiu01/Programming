#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    cout<<endl<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

}
