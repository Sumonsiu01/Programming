//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/discussion/
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int a[mx];
int main()
{
    int n;
    cin>>n;
    priority_queue<int>q;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<n; i++)
    {
        q.push(a[i]);
        if(q.size()>=3)
        {
            int a1 = q.top();
            q.pop();
            int a2 = q.top();
            q.pop();
            int a3 = q.top();
            q.pop();
            cout<<1ll*a1*a2*a3<<endl;
            q.push(a1);
            q.push(a2);
            q.push(a3);
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}
