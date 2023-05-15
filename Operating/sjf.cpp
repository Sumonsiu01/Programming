
//criteria burst time
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,temp,p[10],bt[10],wt[10],tat[10];

    float atat = 0,awt = 0;
    cout<<"Enter the number of process :";
    cin>>n;
    cout<<endl;
    cout<<"Enter the process number: ";
    for(int i= 0; i<n; i++)
    {
        cin>>p[i];
    }
    cout<<endl;
    cout<<"Enter the burst time : ";
    for(int i = 0; i<n; i++)
    {
        cin>>bt[i];
    }
    cout<<endl;
    //applying buble sort technique

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n - i - 1; j++)
        {
            if(bt[j]>bt[j+1])
            {
                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;

                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    printf("\nProcess\tburst time\waiting time\tturn around time\n");

    for(int i= 0; i<n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;
        for(int j = 0; j<i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
        tat[i] = wt[i] + bt[i];
        awt = awt+wt[i];
        atat = atat+tat[i];
        printf("\n%d\t%d\t%d\t%d\n",i+1,bt[i],tat[i],wt[i]);
    }
    awt = awt/n;
    atat = atat/n;
    cout<<"Average waiting time: "<<awt<<endl;
    cout<<"Average turn aroun time: "<<atat<<endl;
}
