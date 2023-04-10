//https://codeforces.com/problemset/problem/1095/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int index = 0;
    int ad = 1;
    while(index<n)
    {
        cout<<s[index];
        index+=ad;
        ad++;
    }
}

