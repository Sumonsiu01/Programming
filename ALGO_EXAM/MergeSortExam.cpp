#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int lb,int mid,int up)
{
    int i = lb;
    int j = mid+1;
    int k = lb;

    int narr[1000];

    while(i<=mid && j<=up)
    {
        if(arr[i]<=arr[j])
        {
        narr[k] = arr[i];
        i++;
        k++;
        }
        else
        {
            narr[k] = arr[j];
            j++;
            k++;
        }
    }


    while(i<=mid)
    {
        narr[k] = arr[i];
        k++;
        i++;
    }
    while(j<=up)
    {
        narr[k] = arr[j];
        k++;
        j++;
    }

    for(int i = lb;i<=up;i++)
    {
        arr[i] = narr[i];
    }
}
void mergesort(int arr[],int lb,int up)
{
    if(lb<up)
    {
        int mid = (lb+up)/2;

        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,up);
        merge(arr,lb,mid,up);
    }
}


int main()
{
    int n;
    cout<<"Enter number of element to be sorted: ";
    cin>>n;
    int arr[n];
    cout<<endl;

    cout<<"Enter the elements of the list: ";
    for(int i = 0;i<n;i++)cin>>arr[i];

    cout<<endl;
    cout<<"The array before sorting is: ";
    for(auto u:arr)cout<<u<< " ";

    cout<<endl;

    mergesort(arr,0,n-1);

    cout<<"The list of element after sorting is: ";
    for(auto u:arr)
        cout<<u<< " ";
    cout<<endl;

    return 0;



}
