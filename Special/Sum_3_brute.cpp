#include<bits/stdc++.h>
using namespace std;


/*

I don;t know why the code not running here but it is running and giving output in leetcode online judge
//https://leetcode.com/problems/3sum/



*/
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];

    set<vector<int>>st;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            for(int k = j+1;k<n;k++)
            {
                if(v[i] + v[j] + v[k] == 0)
                {
                    vector<int>temp = {v[i],v[j],v[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans (st.begin(),st.end());

    for(int i = 0;i<ans.size();i++)
    {
        for(int j = 0;j<ans[i].size() ;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
/*
6
-1,0,1,2,-1,-4
*/
