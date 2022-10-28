
#include <bits/stdc++.h>
using namespace std;


int findMinDiff(int arr[], int n)
{
    int diff = INT_MAX;

    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if(arr[j]<arr[i])
            {
                if (abs(arr[i] - arr[j]) < diff)
                    diff = abs(arr[i] - arr[j]);
            }
    return diff;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)cin>>arr[i];
    cout<< findMinDiff(arr, n)<<endl;;
    return 0;
}
