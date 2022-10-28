#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   cin>>n;
    int l = 0,r = 9,ans = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(mid*mid<9) ans = mid;
        else if(mid*mid>9)r = mid-1;
        else l = mid+1;

    }
    cout<<ans<<endl;
}
