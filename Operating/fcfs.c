#include<stdio.h>

struct pcv{

int pid,arrival,burst,turnaround;

};


int main()
{
    int i,j,num;

    float sum = 0.0,avg = 0.0;

    struct pcv p[10],temp;

    printf("Enter the number of process: ");

    scanf("%d",&num);
    printf("\n");
    for(i = 0;i<num;i++)
    {
        printf("Enter the arrival and burst time: %d\n",i+1);

        scanf("%d %d",&p[i].arrival,&p[i].burst);
        p[i].pid = i+1;

    }

    for(i = 0;i<num;i++)
    {
        for(j = 0;j<num - i - 1;j++ )
        {
            if(p[j].arrival>p[j+1].arrival)
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;

            }
        }
    }

    for(i = 0;i<num;i++)
    {
        sum += p[i].burst;
        p[i].turnaround = sum;
    }
    sum = 0;
    pline(44);

    printf("PID\tArrival\tBurst\tTurnaround\n");
    pline(44);

    for(i = 0;i<num;i++)
    {
        printf("%d\t%d\t%d\t%d\n",p[i].pid,p[i].arrival,p[i].burst,p[i].turnaround);
        sum+=p[i].turnaround;
    }

    pline(44);
    avg = sum/(float)num;
    printf("Total turnaround time  = %f\n",sum);
    printf("Average turnaround time = %.3f\n",avg);

}
void pline(int x)
{
    for(int i = 0;i<x;i++)
    {
        printf("-");
    }
    printf("\n");
}
