#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    int day;
    cin>>day;
    while(day>0)
    {
        int price,shop = 0;
        cin>>price;
        for(auto u:v)
        {
            if(u<=price)
            {
                shop++;
            }
        }
        cout<<shop<<endl;
        day--;
    }
}
