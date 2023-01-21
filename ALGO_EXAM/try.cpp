#include<bits/stdc++.h>
using namespace std;


void insertion(int arr[],int n)
{
    int k,i,j;

    for( i = 1; i<n; i++)
    {
        k = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>k)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = k;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];

    }
    insertion(arr,n);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }

}
