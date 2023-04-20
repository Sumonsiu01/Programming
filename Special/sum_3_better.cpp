#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];

    set<vector<int>>st;
    for(int i = 0;i<n;i++)
    {
        set<int>hashset;
        for(int j = i+1;j<n;j++)
        {
            int third = -(v[i] + v[j]);
            if(hashset.find(third) != hashset.end())
            {
            vector<int>temp = {v[i],v[j],third};
            sort(temp.begin(),temp.end());

            st.insert(temp);
        }
        hashset.insert(v[j]);
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
