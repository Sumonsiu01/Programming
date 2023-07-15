#include<bits/stdc++.h>
using namespace std;



void nextgreaterelemet(vector<int>v,int n)
{
    stack<int>s;
    s.push(v[0]);


    for(int i = 1;i<n;i++)
    {
        if(s.empty())
        {
            s.push(v[i]);
            continue;
        }

        while(s.empty() == false && v[i]>s.top())
        {
            cout<<"The next greater element of "<<s.top()<<" "<<v[i]<<endl;
            s.pop();
        }
        s.push(v[i]);

    }

        while(!s.empty())
        {
            cout<<"The next greater element of "<<s.top()<< " "<<"-1"<<endl;
            s.pop();
        }

}


int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }

   nextgreaterelemet(v,n);
}
