#include<bits/stdc++.h>
using namespace std;
//complexity p*log(10 to power d) where d is the precision we want to print;and p is the the desire root
//complexity p*log(10 to power d) where d is the precision we want to print;and p is the the desire root

double eps = 1e-6;
double multiply(double mid,int n)
{
    double ans = 1;
    for(int i = 0;i<n;i++)
    {
        ans*=mid;
    }
    return ans;
}
int main()
{
    double x;
    int n;
    cin>>x>>n;

    double lo = 1,hi = x,mid;

    while(hi - lo>eps)
    {
        mid = (lo+hi)/2;

        if(multiply(mid,n)>x)
        {
            hi = mid;
        }
        else{
            lo = mid;
        }
    }
    cout<<lo<<endl;
}
