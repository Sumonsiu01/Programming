#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/top-k-frequent-elements/
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second == p2.second)
    {
        return p1.first>p2.first;
    }

    return p1.second>p2.second;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    map<int, int> mp;

    for(int i = 0;i<n;i++)
    {
        int p;
        cin>>p;
        mp[p]++;
    }

    vector<pair<int, int> > v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);


    for(int i = 0;i<k;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }


}

/*


9
2
2 9 1 5 5 3 0 2 1
*/

