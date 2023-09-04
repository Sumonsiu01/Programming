#include<bits/stdc++.h>
using namespace std;


int sum = 0;

void print(int n)
{
    if(n == 0)
    {
        cout<<sum<<endl;
        return;
    }
    sum+=n;
    n--;
    print(n);
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    print(n);
}
