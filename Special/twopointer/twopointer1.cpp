//https://leetcode.com/problems/maximum-distance-between-a-pair-of-values/



/*** Bismillahir Rahmanir Rahim ***/
#include<bits/stdc++.h>
using namespace std;

/*
solved
*/
#define endl '\n'
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define ll long long
#define mem(a,b) memset(a, b, sizeof(a) )
#define endl '\n'
#define pb push_back
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e6+123;
vector<long long>prime;
bitset<mx>isprime;


void primegen(int n)
{
    n += 100;
    for(int i = 3; i<=n; i+=2) isprime[i] = 1;

    int sq = sqrt(n);

    for(int i = 3; i<=sq; i+=2)
    {
        if(isprime[i] == 1)
        {
            for(int j = i*i; j<=n; j+=(i+i))
                isprime[j] = 0;
        }
    }
    isprime[2] = 1;
    prime.push_back(2);

    for(int i = 3; i<=n; i+=2)
    {
        if(isprime[i] == 1)
            prime.push_back(i);
    }
}

int maxdis(vector<int>nums1,vector<int>nums2)
{
    int start = 0;
    int end = 0;

    int n = nums1.size();
    int m = nums2.size();

    int ans = 0;

    while(start<n)
    {
        while(end<m)
        {
            if(nums2[end]<nums1[start])
            {
                break;
            }
            ans = max(ans,end - start);
            end++;
        }
        start++;

    }

    return ans;
}

int main()
{
    optimize();


    cout<<"Enter the size of two array: "<<endl;

    int n,m;

    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);

    for(int i = 0; i<n; i++)cin>>v1[i];
    for(int i = 0; i<m; i++)cin>>v2[i];

    int ans = maxdis(v1,v2);
    cout<<ans<<endl;

}
/*
5 5
55 30 5 4 2
100 20 10 10 5



*/


