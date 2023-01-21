#include<bits/stdc++.h>

using namespace std;

void insertionsort(int arr[],int n)
{
    int i,j,temp;

    for(int i =1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp;
    }

}

void print(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of list: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Enter the value of the list: ";

    for(int i = 0;i<n;i++)cin>>arr[i];
    cout<<endl;

    int N = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr,N);
    cout<<"The list after sorting is: "<<endl;
    print(arr,N);
}
