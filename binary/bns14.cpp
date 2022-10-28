//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa01hOFVuUU5mdWw3V1FCbTJ3R3BBWmR3b3NrQXxBQ3Jtc0trQWtzZFdvZmNOS3psT0h1Q2pXUGlOYV9QSTJIalB2cVZjMUdKM2s5VTJIbjJJWlZhQnZwVWVYNUxid0RaeXFtQ3pxZ1JsVEw5VXFGLWRBdmYyMmVCanVVb29lUGZ2WGFXMTNqVDN6cTRicEJ6VTRXWQ&q=https%3A%2F%2Fwww.hackerearth.com%2Fpractice%2Falgorithms%2Fsearching%2Fbinary-search%2Fpractice-problems%2Falgorithm%2Fmonks-encounter-with-polynomial%2F
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long fun(long long a,long long b,long long c,long long x)
{
 return (a*(x*x)  + (b*x) + c);
}
int main()
{
 optimize();
 long long t;
 cin>>t;
 while(t--)
 {
     long long a,b,c,x,k,ans = -1;
     cin>>a>>b>>c>>k;
     long long l = 1,r = 1e5;
     while(l<=r)
     {
         x = (l+r)>>1;
         if(fun(a,b,c,x) >= k)
         {
             ans = x;
             break;
         }
         else if(fun(a,b,c,x)<k)
         {
             l = x+1;
         }
         else
         {
             r = x-1;
         }

     }
     cout<<ans<<endl;
 }
}
