#include<bits/stdc++.h>
using namespace std;

// solved but you have to learn why the maximum value of k is 35 here
//https://codeforces.com/problemset/problem/1343/A

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x ;

        for(int k = 2; k<=35; k++)
        {
            int den = pow(2,k) - 1;
            if(n%den == 0)
            {
                x = n/den;
                break;
            }

        }
        cout<<x<<endl;
    }
}
