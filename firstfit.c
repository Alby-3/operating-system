#include<stdio.h>
void main()
{
 int memblock,limit,i,j;
 printf("Enter the number of memory blocks and no of process\n");
 scanf("%d%d",&memblock,&limit);
 struct memory
 {
 int size,alloc;
 }m[memblock];
 struct process
 {
 int psize,flag;
 }
 p[limit];
 printf("Enter the size of the memory block\n");
 for(i=0;i<memblock;i++)
 {
 scanf("%d",&m[i].size);
 }
 printf("Enter the size of the processes\n");
 for(i=0;i<limit;i++)
 {
 scanf("%d",&p[i].psize);
 p[i].flag=0;
 }
 printf("\nprocess\tprocess size\tBlocks\t\n");
 for(i=0;i<limit;i++)
 {
  for(j=0;j<memblock;j++)
  {
   if(p[i].flag==0)
   {
   if(p[i].psize<=m[j].size)
   {
   if(m[j].alloc==1)
   {
   continue;
   }
   else
   {
   m[j].alloc=1;
   p[i].flag=1;
   printf("\n%d\t%d\t\t%d\n",i,p[i].psize,m[j].size);
   }
   }
   }
   }
   }
   for(i=0;i<limit;i++)
   {
    if(p[i].flag==0)
    {
    printf("there is no space for %d process\n",p[i].psize);
    }
    }
    }
    
