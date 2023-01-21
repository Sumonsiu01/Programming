#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end)
{
    int p_index = start;

    int pvot = arr[end];


    for(int i = 0;i<end;i++)
    {
        if(arr[i]<=pvot)
        {
            swap(arr[i],arr[p_index]);
            p_index++;
        }
    }
    swap(arr[end],arr[p_index]);
    return p_index;
}

void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int p_index = partition(arr,start,end);
        quicksort(arr,start,p_index - 1);
        quicksort(arr,p_index + 1,end);

    }
}

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the element of array: ";
    for(int i  = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<endl;

    quicksort(arr,0,n-1);
    cout<<"The Array  after sorting : ";
    for(int i = 0;i<n;i++)
        cout<<arr[i]<< " ";

    cout<<endl;




}
