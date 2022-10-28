//this code will show us the maximum subarray sum

//With the name of Most Merciful Allah Subhanawatala
#include<bits/stdc++.h>
using namespace std;
int maximumsum(int arr[],int size)
{
    int maxsum = INT_MIN,current_sum = 0;

    for(int i = 0;i<size;i++)
    {
        current_sum+=arr[i];

        if(current_sum>maxsum)
        {
            maxsum = current_sum;
        }
        if(current_sum<0)
        {
            current_sum = 0;
        }
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi = maximumsum(arr,n);
    cout<<maxi<<endl;

}
