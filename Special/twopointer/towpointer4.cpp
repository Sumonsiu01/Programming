#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }

    long long  pre[n];
    pre[0] = 0;

    for(int i = 1;i<n+1;i++){

        pre[i] = pre[i-1] + v[i-1];
    }


    int left = 0;
    int right = 0;
    set<long long>s;
    int ans = 0;
    while(left<n)
    {
        while(right<n)
        {
            if(s.find(pre[right]) != s.end())
            {
                break;
            }
            s.insert(pre[right]);
            right++;
        }

        ans += (right - 1 )- left;
        s.erase(pre[left]);
        left++;
    }
    cout<<ans<<endl;
}
