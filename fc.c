#include<stdio.h>
void main()
{
int n, i,j;
 double avg_Wait=0,avg_TAT=0;
 printf("Enter the number of process:");
 scanf("%d",&n);
 int Burst_time[n],TurnAround_time[n],Waiting_time[n];
 printf("Enter the burst time of the process\n");
 for(i=0;i<n;i++)
 {
 printf("P%d Burst time:",(i+1));
 scanf("%d",&Burst_time[i]);
 }
 Waiting_time[0]=0;
 for(i=1;i<n;i++)
 {
 Waiting_time[i]=Waiting_time[i-1]+Burst_time[i-1];
 avg_Wait=avg_Wait+Waiting_time[i];
 }
  avg_Wait=avg_Wait/n;
  for(i=0;i<n;i++)
  {
  TurnAround_time[i]=Waiting_time[i]+Burst_time[i];
  avg_TAT=avg_TAT+TurnAround_time[i];
  }
  avg_TAT=avg_TAT/n;
 printf("process\tBurst time\tWait time \tTrun around time\n");
 for(i=0;i<n;i++)
 {
 printf("p%d\t%d\t\t%d\t\t%d\n",i+1,Burst_time[i],Waiting_time[i],TurnAround_time[i]);
 }
 printf("\n");
 printf("Average waiting time :%.2f\nAverage turn around time:%.2f\n",avg_Wait,avg_TAT);
 printf("\n");
 printf(" ");
 for(i=0;i<n;i++)
 {
  printf("------");
 }
 printf("\n|");
 for(i=0;i<n;i++)
 {
 printf("P%d     |",i+1);
 }
 printf("\n|");
 for(i=0;i<n;i++);
 {
 printf("---------------------");
 }
 printf("\n0\t");
 int current_time=0;
 for(i=0;i<n;i++)
 {
 current_time=current_time+Burst_time[i];
 printf("%d\t",current_time);
 }
 printf("\n");
 }
