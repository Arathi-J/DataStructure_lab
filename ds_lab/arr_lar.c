#include<stdio.h>
void main()
{
   int l,a[10],i,n;
   printf("Enter the number of elements in the array: ");
   scanf("%d",&n);
   printf("Enter the elements in the array: ");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   l=a[0];
   for(i=0;i<n-1;i++)
   {
     if(l>a[i+1])
        l=l;
     else
        l=a[i+1];
   }
   printf("The largest= %d\n",l);
}
