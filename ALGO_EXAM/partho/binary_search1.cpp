#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int l,int r,int key)
{
    if(l>r)
    {
        return 0;
    }
    int mid = (l+r)/2;

    if(arr[mid] == key)
    {
        return mid;
    }
    else if(key>arr[mid])
    {
     binarySearch(arr,mid+1,r,key);
    }
    else
    {
        binarySearch(arr,l,mid-1,key);
    }
}

int main()
{
    int n,key;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the element of the arry: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<endl;
    cout<<"Enter the key you are looking for: ";
    cin>>key;
    int l = 0;
    cout<<endl;
  cout<< "The element you are looking for is at: "<< binarySearch(arr,l,n-1,key)<<endl;
}
