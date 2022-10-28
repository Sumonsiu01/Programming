#include<bits/stdc++.h>
using namespace std;

int main()
{
    //;
    int t;
    cin>>t;
    while(t--)

    {
        vector<vector<char>>v;
        stack<char>st;
        for(int i = 0; i<8; i++)
        {
            for(int j = 0; i<8; j++)
            {
                cin>>v[i][j];
                if(v[i][j] == 'B' || v[i][j] == 'R')
                    st.push(v[i][j]);
            }
        }

        cout<<st.top()<<endl;
    }
}
