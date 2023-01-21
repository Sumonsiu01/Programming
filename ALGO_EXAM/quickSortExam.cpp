#include<bits/stdc++.h>
using namespace std;


int partition(int a[],int start,int end)
{
    int pivot=a[end];

    int P_index=start;
    int i,t;
    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            swap(a[i],a[P_index]);
            P_index++;
        }
     }
      swap(a[end],a[P_index]);

     return P_index;
 }
 void Quicksort(int a[],int start,int end)
 {
    if(start<end)
    {
         int P_index=partition(a,start,end);
             Quicksort(a,start,P_index-1);
             Quicksort(a,P_index+1,end);
    }
}
int main()
{
    int n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int a[n];
        cout<<"Enter the array elements: ";
        for(int i=0;i<n;i++)
       {
    	 cin>>a[i];
       }
       cout<<endl;
      Quicksort(a,0,n-1);
      cout<<"After Quick Sort the array is: ";
      for(int i=0;i<n;i++)
      {
    	 cout<<a[i]<<" ";
      }
    return 0;
}

