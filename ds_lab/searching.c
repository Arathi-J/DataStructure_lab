#include<stdio.h>
void linear(int *a,int n,int item)
{
   int i=0,f=0;
   while(i<n)
   {
      if(item==a[i])
      {
         f=1;
         break;
      }
      else
         i +=1;
   }
   if(f==1)
      printf("Search is successfull and element is found at index %d\n",i);
   else
      printf("Element not found");
}
void binary(int *a,int n,int item)
{
   int lb=0,ub=n-1,pos=-1,mid;
   while(lb<=ub)
   {
      mid=(lb+ub)/2;
      if(a[mid]==item)
      {
         pos=mid;
         break;
      }
      else if(a[mid]>item)
         ub=mid-1;
      else
         lb=mid+1;
   }
   if(pos == -1)
      printf("Item is not [present in the array\n");
   else
      printf("Item is present at position %d\n",pos);
}
void main()
{
   int a[10],n,i,item,c;
   char st;   
   printf("Enter the number of elements : ");
   scanf("%d",&n);
   printf("Enter the elements :\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   printf("Enter the item you want to search :");
   scanf("%d",&item);
   printf("linear search(1) or binary search(2) :");
   scanf("%d",&c);
   if(c==1)
      linear(a,n,item);
   else if(c==2)
      binary(a,n,item);
   else
      printf("Invalid Input");
}
