#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    long long sum = 1;
    for(int i = n;i>0;i--)
    {
     sum *= i;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        long long q;
        cin>>q;
        long long l = 0,r = 1e11;
        while(l<=r)
        {
        long long mid = (l+r)/2;

        if((fact(mid))%q == 0) r = mid;
        else
            l = mid;
        }
        cout<<l<<endl;
    }
    //cout<<l<<endl;

}
