#include<bits/stdc++.h>
using namespace std;

int mx = 30;


void print()
{
    for(int i = 0;i<40;i++)
    {
        cout<<"-";
    }
}
int main()
{
    int i,j,bt[mx],wt[mx],tat[mx],n;

    float awt = 0.0,atat = 0.0;

    cout<<"Enter the number of process: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the burst time: ";
    for(int i=0;i<n;i++)
    {
        cin>>bt[i];
    }
    cout<<"Process\tBurst_time\tTurn aroundtime"<<endl;
    print();
    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for(j = 0;j<i;j++)
        {
            wt[i] = wt[i] + bt[i];
        }
        tat[i] = wt[i] + bt[i];
        awt = awt+wt[i];
        atat = atat + tat[i];
        cout<<i+1<<"\t"<<bt[i]<<"\t\t"<<tat[i]<<endl;
    }
    awt = awt/n;
    atat = atat/n;
    cout<<"Average waiting time: "<<awt<<endl;
    cout<<"Average turnaround time: "<<atat<<endl;
}
