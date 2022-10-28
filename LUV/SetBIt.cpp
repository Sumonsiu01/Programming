#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for(int i = 10; i>=0; --i)
    {
        cout<<((num>>i)) & 1);
    }
    cout<<endl;
}

int main()
{
    printBinary(9)
    int a = 9;
    int i = 1;

    if((a&(1<<i)) !=0)
    {
        cout<<"SET"<<endl;
    }
    else
    {
        cout<<"NOT SET"<<endl;
    }
}
