#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int lb,int mid,int ub)
{
    int i = lb;
    int j = mid+1;
    int k = lb;

    int newarr[1000];

    while(i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j])
        {
            newarr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            newarr[k] = arr[j];
            k++;
            j++;
        }

    }

    while(i<=mid)
    {
        newarr[k] = arr[i];
        i++;
        k++;
    }
    while(j<=ub)
    {
        newarr[k] = arr[j];
        j++;
        k++;
    }

    for(int i = lb;i<=ub;i++)
    {
        arr[i] = newarr[i];
    }
}

void mergesort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid = (lb+mid)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);

        merge(arr,lb,mid,ub);

    }
}


int main()
{
    int n;

    cout<<" Sumon enter the size of array : ";
    cin>>n;

    cout<<endl;

    int arr[n];

    cout<<"Sumon enter the element of the array : ";

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"The array before sorting is: ";
    for(auto u:arr)cout<<u<<" ";

    mergesort(arr,0,n-1);

    cout<<"The array after sorting is: ";

    for(auto u:arr)
        cout<<u<<" ";
}
