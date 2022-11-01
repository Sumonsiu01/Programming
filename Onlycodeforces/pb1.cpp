#include<bits/stdc++.h>
using namespace std;
//solved
//Alhamdulillah
//https://codeforces.com/problemset/problem/443/A?fbclid=IwAR17-jjVe12CpwDrp5jxiqp3avHjvdN07qQfmO3jaYHGer_c_q4oyr32o0g
int main()
{
    set<char>st;
    char ch;
    while(cin>>ch)
    {
        if(ch == '}')break;

        if(ch>='a' && ch<='z')
            st.insert(ch);
    }

    cout<<st.size()<<endl;
}
