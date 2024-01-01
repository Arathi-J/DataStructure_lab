#include<stdio.h>
#include<stdlib.h>
#define n 50
int a[n],top=-1;
void display()
{
   int i;
   for(i=top;i>=0;--i)
     printf("The stack : %d\t\n",a[i]);
}
void push()
{
   if(top==n-1)
 	printf("Stack overflow\n");
   else
   {
	 top++;
	 printf("enter the element :");
	 scanf("%d",&a[top]);
   }
   display();
}
void pop()
{
   if (top==-1)
  	printf("Stack underflow\n");
   else
   {
	  printf("\n%d is deleted",a[top]);
	  top--;
   }
   display();
}
void main()
{
   int ch=0;
   do
   {

	printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch){
	case 1: push();
	        break;
	case 2: pop();
	        break;
	case 3: display();
	break;
	case 4:
	ch=1;
		printf("Thank you!");
		
		exit(0);
	default: 
	printf("Invalid choice!!!\n");
	break;
	}
	
   }while(ch==1);
}
