#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        stack<char>st;
        char arr[n+1][n+1];
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(arr[i][j] == 'R' || arr[i][j] == 'B')
                {
                    st.push(arr[i][j]);
                }
            }
        }
        cout<<st.top()<<endl;

    }
}
