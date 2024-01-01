#include <stdio.h>
#include<stdlib.h>
# define n 10    
int a[n];  
int front=-1,rear=-1; 
 
void display() 
{  
int i=front;  
if(front==-1 && rear==-1)  
    printf("\n Queue is empty..");  
else  
{  
    printf("\nElements in a Queue are :");  
    while(i<=rear)  
    {  
        printf("%d\t", a[i]);  
        i=(i+1)%n;  
    }  
    printf("\n");
}  
} 
 
void enqueue(int item)  
    {  
        if(front==-1 && rear==-1)  
        {  
            front=0;  
            rear=0;  
            a[rear]=item;  
        }  
        else if((rear+1)%n==front)  
        {  
            printf("Queue is overflow..");  
        }  
        else  
        {  
            rear=(rear+1)%n;      
            a[rear]=item;    
        }
        display();
    }  
       
int dequeue()  
   {  
      if((front==-1) && (rear==-1))  
	  printf("\nQueue is underflow..");  
      else if(front==rear)  
	{  
	   printf("\nThe dequeued element is %d", a[front]);  
	   front=-1;  
	   rear=-1;  
	}  
      else  
	{  
	   printf("\nThe dequeued element is %d", a[front]);  
          front=(front+1)%n;  
	} 
    display();
    }  
   

   
void main()  
    {  
        int choice=0,x;  
         
        do
        {  
		printf("\n1) Enqueue");  
		printf("\n2) Dequeue");  
		printf("\n3) Display");
		printf("\n4) Exit");  
		printf("\nEnter your choice: ");  
		scanf("%d", &choice);  
		 
		switch(choice)  
		{  
		    case 1:  
			    printf("Enter the element which is to be inserted:");  
			    scanf("%d", &x);  
			    enqueue(x);  
			    break;  
		    case 2:  
			    dequeue();  
			    break;  
		    case 3:  
			    	display();  
			    	break;
		    case 4:choice=1;
			printf("Thank you!\n");
			exit(0);
		    default: 
		 	printf("Invalid choice!!!\n");
			break;
	     
		}
        }while(choice!=4);  
    } 
