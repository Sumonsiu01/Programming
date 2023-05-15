#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,qt,temp,sq = 0,cnt = 0,bt[10],wt[10],rem_bt[10],tat[10];

    float atat = 0.0,awt = 0.0;

    cout<<"Enter the number of process: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the burst time: ";
    for(i = 0; i<n; i++)
    {
        cin>>bt[i];
        rem_bt[i] = bt[i];

    }
    cout<<endl;
    cout<<"Enter the time quanta: ";
    cin>>qt;
    cout<<endl;
    while(1)
    {
        for(i = 0,cnt = 0; i<n; i++)
        {
            temp = qt;
            if(rem_bt[i] == 0)
            {
                cnt++;
                continue;
            }
            if(rem_bt[i]>qt)
            {
                rem_bt[i] = rem_bt[i] - qt;
            }
            else

                if(rem_bt[i]>=0)
                {
                    temp = rem_bt[i];
                    rem_bt[i] = 0;
                }
                sq = sq+temp;
                tat[i] = sq;

        }
        if(n == cnt)
            break;
    }
   printf("\nProcess\tBurst Time\tTAT\tWaiting Time\n");
    for(int i= 0;i<n;i++)
    {
        wt[i] = tat[i] - bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];
       printf("\n%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],tat[i],wt[i]);
    }

    awt = awt/n;
    atat = atat/n;
    cout<<"Average waiting time: "<<awt<<endl;
    cout<<"Average turn aroun time: "<<atat<<endl;
}
