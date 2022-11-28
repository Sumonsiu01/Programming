//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    priority_queue<long long>q;
    while(m--)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    long long ans = 0;
    while(n--)
    {
        if(!q.empty())
        {
            int a = q.top();
            q.pop();
            ans+=a;
            a--;
            if(a>0)q.push(a);
        }
    }
    cout<<ans<<endl;
}

