#include <stdio.h>
#include<stdlib.h>
#define n 3
int a[n];
int front = -1, rear = -1;

void display()
{
    int i;
    if(front==-1)
    {
    printf("Queue is empty\n");
    }
    else
    {
        printf("\n\nQueue elements: ");
        for (i = front; i != rear; i = (i + 1) % n)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[i]);
    }
}

void enqueue(int data)
{
   if(front==0 && rear==n-1)  //||(rear==front-1)
   	printf("\nQueue is full\n");
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % n;
        a[rear] = data;
        printf("%d has been enqueued.\n", data);
    }
    display();
}

void dequeue()
{
    int data;
    if(front==-1)
    	printf("Queue empty\n");
    else
    {
        data = a[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % n;
        printf("%d has been dequeued\n",data);
    }
    display();
}

void main()
{
    int choice, data;
        do
	{
	printf("\n Circular Queue Menu\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");
	printf("4. Exit\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	    case 1:
	        printf("Enter data to enqueue: ");
	        scanf("%d", &data);
	        enqueue(data);
	        break;
	    case 2:
	        dequeue();
	        break;
	    case 3:
	        display();
	        break;
	    case 4:
	        printf("Exiting the program.\nThank You!!\n");
	        exit(0);
	    default:
	        printf("Invalid choice. Please try again.\n");
	}
    }while(choice!=4);
}
