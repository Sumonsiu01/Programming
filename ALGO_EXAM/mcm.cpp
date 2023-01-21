#include<bits/stdc++.h>
using namespace std;

void print(int s[][6],int i,int j)
{
    if(i==j)
    {
        cout<<"A"<<i;
    }
    else
    {
        cout<<"(";
        print(s,i,s[i][j]);
        print(s,s[i][j]+1,j);
        cout<<")";
    }
}
int main()
{
   int n = 6;
   int array[n+1] = {30,35,15,5,10,20,25};
    int m[n][n];
    int s[n][6];
    for(int i = 1;i<n;i++)
    {
        m[i][i] = 0;

    }
    for(int l = 1;l<n;l++)
    {
        for(int i = 1;i<n;i++)
        {
            int j = i+1;
            m[i][j] = INT_MAX;
            for(int k = i;k<j;k++)
            {
                int temp = m[i][k] + m[k+1][j] + array [i]  * array[k+1] * array[j+1];
                if(temp<m[i][j])
                {
                    m[i][j] =temp;
                    s[i][j] = k;
                }
            }
        }
    }
    print(s,0,n-1);
}
