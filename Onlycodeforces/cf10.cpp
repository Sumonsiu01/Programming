#include<bits/stdc++.h>
using namespace std;
//solved
//Alhamdulillah
int main()
{
    string s1,s2;

    cin>>s1>>s2;

    string ans = "";

    for(int i = 0;i<s1.length();i++)
    {
        if(s1[i] ==  s2[i])
        {
            ans+='0';
        }
        else
        {
            ans+='1';
        }
    }
    cout<<ans<<endl;
}
