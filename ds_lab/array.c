#include<stdio.h>
void main()
{
   int a[10],n,i;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   printf("Enter the value of the array: ");
   for(i=0;i<n;i++)
     scanf("%d",&*(a+i));
   for(i=0;i<n;i++)
     printf("a[%d]=%d\n",i,*(a+i));
}
