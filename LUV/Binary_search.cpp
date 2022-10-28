/*Practice problems :
https://www.spoj.com/problems/EKO/
https://www.spoj.com/problems/AGGRCOW/
https://www.spoj.com/problems/PIE/
https://www.codechef.com/problems/MINEAT
https://www.hackerearth.com/.../algor...
https://www.hackerearth.com/.../algor...
https://www.hackerearth.com/.../algor...
https://codeforces.com/problemset/pro...
https://codeforces.com/problemset/pro...
https://www.interviewbit.com/problems...
*/


//Time cmplexity Nlog(H) where N is array size and H is the biggest height
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int n;
long long m;
long long tree[N];
bool issufficent(int h)
{
    long long wood = 0;
    for(int i = 0; i<n; i++)
    {
        if(tree[i]>=h)
        {
            wood+=tree[i] - h;
        }
    }
    return wood>=m;
}
int main()
{
    cin>>n>>m;
    for(int i = 0; i<n; i++)cin>>tree[i];
    long long lo = 0,hi = 1e9,mid;
    while(hi-lo>1)
    {
        mid = (lo+hi)/2;
        if(issufficent(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;

        }
    }
    if(issufficent(hi))
    {
        cout<<hi<<endl;
    }
    else
    {
        cout<<lo<<endl;
    }

}
