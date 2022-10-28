//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbm9DMVo5clNEdnM3WXJ5WTVtV2hzSUJnOFFoQXxBQ3Jtc0tuWkwwM2xBT0VleGV0MFFTT0QxWkpBSzlONUc1Y25oQm5JUHhjN0YxakRmdmVub2RuSF81eDBSZGZEb3pvbFZ5SzZjajdMc20zakVoM3NPU3lqdTlReDVNOC1FeE41b1dfemdseTBnUEdDM2JSaWFtRQ&q=https%3A%2F%2Fcodeforces.com%2Fproblemset%2Fproblem%2F474%2FB
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int a[mx];
int L[mx],R[mx];
int main()
{
    int n,last = 0;
    cin>>n;
    //int last = 0;
    for(int i = 1; i<=n; i++)
    {
        cin>>a[i];
        L[i] = last + 1;
        R[i] = last + a[i];
        last = R[i];
    }
    int m;
    cin>>m;
    while(m--)
    {
        int q;
        cin>>q;
        int l = 1,r = n;
        while(l<=r)
        {
            int mid = (l+r)>>1;
            if(q >= L[mid] && R[mid] >= q)
            {
                cout<<mid<<endl;
                break;
            }
            if(q>R[mid])
            {
                l = mid+1;
            }
            else
            {
                r = mid -1;
            }
        }
    }
}
