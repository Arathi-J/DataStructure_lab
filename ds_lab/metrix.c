#include<stdio.h>
int M3[10][10],i,j;
void display(int M3[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	printf("%d\t",M3[i][j]);
    	printf("\n");
    }
}
void addition()
{
    int m,n,M1[10][10],M2[10][10];
    //first matrix input
    printf("Enter the order of the matrix :");
    scanf("%d%d",&m,&n);
    printf("Enter first matrix elements :\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	scanf("%d",&M1[i][j]);
    }

    //second matrix input
    printf("Enter second matrix elements :\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	scanf("%d",&M2[i][j]);
    }
    //Displaying both matrix
    printf("First matrix :\n");
    display(M1,m,n);
    printf("\nSecond matrix :\n");
    display(M2,m,n);
    printf("\nSum :\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	M3[i][j]=M1[i][j]+M2[i][j];
    	printf("\n");
    }
    display(M3,m,n);
    printf("\n");
}
void subtraction()
{
       int m,n,M1[10][10],M2[10][10];
    //first matrix input
    printf("Enter the order of the matrix :");
    scanf("%d%d",&m,&n);
    printf("Enter first matrix elements :\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	scanf("%d",&M1[i][j]);
    }

    //second matrix input
    printf("Enter second matrix elements :\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	scanf("%d",&M2[i][j]);
    }
    //Displaying both matrix
    printf("First matrix :\n");
    display(M1,m,n);
    printf("\nSecond matrix :\n");
    display(M2,m,n);
    printf("\nDifference :\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	M3[i][j]=M1[i][j]-M2[i][j];
    	printf("\n");
    }
    display(M3,m,n);
    printf("\n");
}
void mult()
{
    int m,n,p,q,k,sum=0,M1[10][10],M2[10][10];
    //first matrix input
    printf("Enter the order of the matrix 1:");
    scanf("%d%d",&m,&n);
    printf("Enter first matrix elements :\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	scanf("%d",&M1[i][j]);
    }

    //second matrix input
    printf("Enter the order of the matrix 2:");
    scanf("%d%d",&p,&q);
    if(n!=p)
    printf("Matrix multiplication is not possible\n");
    else
    {
	    printf("Enter second matrix elements :\n");
	    for(i=0;i<p;i++)
	    {
	    	for(j=0;j<q;j++)
	    	scanf("%d",&M2[i][j]);
	    }
	    //Displaying both matrix
	    printf("First matrix :\n");
	    display(M1,m,n);
	    printf("\nSecond matrix :\n");
	    display(M2,m,n);
	    printf("\nProduct :\n");
	    for(i=0;i<m;i++)
	    {
	    	for(j=0;j<q;j++)
	    	{
	    	   M3[i][j]=0;
	    	   for(k=0;k<p;k++)
	    	   M3[i][j] += M1[i][k] * M2[k][j];  
	    	   printf("\t");
	    	}
	    	printf("\n");
	    }
	    display(M3,m,q);
	    printf("\n");
     }
}
void main()
{
    int i,j,c;
    do
    {
	    printf("What operation do you want to perform :\n1) Addition\n2) Subtraction\n3)Multiplication\n4) Exit\n");
	    scanf("%d",&c);
	    switch(c)
	    {
	    	case 1: addition();
	    		break;
	    	case 2: subtraction();
	    		break;
	    	case 3: 
	    		mult();
	    		break;
	    	case 4: printf("Thank You\n");
	    		break;
	    	default: printf("Invalid Input\n");
	    }
    }while(c != 4);
}



