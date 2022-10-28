//solved
//Alhamdulliah
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[5][5];

    int k,l;
    int sum;
    for(int i = 0;i<5;i++)
    {
        for(int j =0;j<5;j++)
        {
            cin>>arr[i][j];

            if(arr[i][j] == 1)
            {
                k = i+1;
                l = j+1;
            }
        }
    }

    sum = abs(3 - k) + abs(3 - l);
    cout<<sum<<endl;
}
