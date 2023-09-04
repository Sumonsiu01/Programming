#include<bits/stdc++.h>
using namespace std;


int cnt = 1;
void print(int n)
{

    if(cnt>n)
        return ;

        cout<<cnt<<endl;
        cnt++;
        print(n);

}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(n);
}
