#include<bits/stdc++.h>
using namespace std;
/*
https://codeforces.com/problemset/problem/977/B
*/
string s;

int solve(string sub)
{
    int cnt = 0;
    for(int i = 0; i<s.length() - 1; i++)
    {
        if(s[i] == sub[0]  && s[i+1] == sub[1])
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cin>>s;
    int cnt,ans = 0;
    string ansstr;
    for(int i  = 0; i<s.length() - 1; i++)
    {
        string  tempo  = s.substr(i,2);

        cnt = solve(tempo);
        if(cnt>ans)
        {
            ansstr = tempo;
            ans = cnt;
        }
    }

    cout<<ansstr<<endl;
}
