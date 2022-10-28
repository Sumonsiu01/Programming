//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbTEwaEdRR2FZcHA4ZEdzTkxaMG9VbGFNTnh2UXxBQ3Jtc0tucEQyd2M1SUxDRnVrUElyM0NGclA0TGtKUjMxeHlBSklydDR6QVpuYloxRENROFo5cGhiTWF2V0Z3RWdmN3liWmZMMUd2enN0RVBxUkRZMUd2VUZvU2x3eE9WWkVDMWs4SkJDbjZZM1Z4anBlQUk2TQ&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fsquare-root%2F1

#include<bits/stdc++.h>
using namespace std;

#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double eps = 1e-12;
long long int floorsqrt(long long x)
{
    double l = 0,r = x;
    for(int i=1;i<=100;i++)//watch it on video 19(51:00)min
    {
        double mid = (l+r)/2.0;
        if(mid*mid>x) r = mid;
        else l = mid;
    }
    return floor(l);
}
int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<floorsqrt(n)<<endl;
    }
}
