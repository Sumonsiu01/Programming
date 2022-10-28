#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    while(1)
    {
        long long n;
        cin>>n;
        if(n==0)
        {
            break;
        }
        long long int rem = n%10;

        n = n/10;

        rem = rem*5;

        n = abs(n  - rem);

        if(n%17 == 0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

    }
}
