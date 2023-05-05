#include<bits/stdc++.h>
using namespace std;
/*
https://leetcode.com/problems/3sum/submissions/939667131/

*/
int main()
{
    int n;
    cout<<"Enter the size of the list: ";
    cin>>n;
    vector<int>v(n);
    cout<<endl;
    cout<<"Enter the element of the list: ";
    for(int i= 0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    vector<vector<int>>ans;

    for(int i = 0;i<n;i++)
    {
        if(i>0 && v[i] == v[i-1])continue;
        int j = i+1;
        int k = n - 1;
        while(j<k){
        int sum = v[i] + v[j]+v[k];
        if(sum<0)
        {
            j++;
        }
        else if(sum>0)
        {
            k--;
        }
        else
        {
            vector<int>temp = {v[i],v[j],v[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && v[j] == v[j - 1])j++;
            while(j<k && v[k] == v[k+1])k--;
        }
        }
    }
    return ans;
}
