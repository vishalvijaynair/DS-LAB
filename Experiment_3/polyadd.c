#include<stdio.h>
void main()
{
	int n1,n2,n,x,y,z;
	int A[10][1],A1[10][2],A2[10][2];
	int i,j,k;
	printf("Enter no of terms in first polynomial:");
	scanf("%d",&n1);
	printf("Enter the coeff of polynomial:");
	for(i=0;i<=n1;i++)
	 {
		scanf("%d",&A1[i][1]);
	 }
	printf("Enter the exponent of polynomial:");
	for(j=0;j<=n1;j++)
	 {
		scanf("%d",&A1[j][2]);
	 }
	printf("Enter no of terms in second polynomial:");
	scanf("%d",&n2);
	printf("Enter the coeff of polynomial:");
	for(i=1;i<=n2;i++)
	 {
		scanf("%d",&A2[i][1]);
	 }
	printf("Enter the exponent of polynomial");
	for(j=1;j<=n1;j++)
	 {
		scanf("%d",&A2[j][2]);
	 }
	x=1,y=1,z=1;
	while(x<=n1&&y<=n2)
	 {
		if(A1[x][2]>A2[y][2])
		{
		  A[z][1]=A1[x][1];
		  A[z][2]=A1[x][2];
		  x++,z++;
		}
		else if (A1[x][2]<A2[y][2])
		{
		  A[z][1]=A2[y][1];
		  A[z][2]=A2[y][2];
		  y++,z++;
		}
		else
		{
		  A[z][1]=A1[x][1]+A2[y][1];
		  A[z][2]=A1[x][2];
		  x++,y++,z++;
		}
	 }
	while(y<=n2)
	 {
		  A[z][1]=A2[y][1];
		  A[z][2]=A2[y][2];
		  y++,z++;
	 }
	x=1;
	printf("First polynomial is:\n");
	while(x<=n1)
	 {
		printf("%dx^%d",A1[x][1],A1[x][2]);
		printf("\t");
		x++;
	 }
	printf("second polynomial is:\n");
	y=1;
	while(y<=n2)
	 {
		printf("%dx^%d",A2[y][1],A2[y][2]);
		printf("\t");
		y++;
	 }
	printf("Resultant polynomial after addition:\n");
	x=1;
	while(x<=z)
	 { 
		printf("%dx^%d",A[x][1],A[x][2]);
		printf("\t");
		x++;
	 }
	
}
	#include<stdio.h>
void main()
{
	int n1,n2,n,x,y,z;
	int A[10][1],A1[10][2],A2[10][2];
	int i,j,k;
	printf("Enter no of terms in first polynomial:");
	scanf("%d",&n1);
	printf("Enter the coeff of polynomial:");
	for(i=0;i<=n1;i++)
	 {
		scanf("%d",&A1[i][1]);
	 }
	printf("Enter the exponent of polynomial:");
	for(j=0;j<=n1;j++)
	 {
		scanf("%d",&A1[j][2]);
	 }
	printf("Enter no of terms in second polynomial:");
	scanf("%d",&n2);
	printf("Enter the coeff of polynomial:");
	for(i=1;i<=n2;i++)
	 {
		scanf("%d",&A2[i][1]);
	 }
	printf("Enter the exponent of polynomial");
	for(j=1;j<=n1;j++)
	 {
		scanf("%d",&A2[j][2]);
	 }
	x=1,y=1,z=1;
	while(x<=n1&&y<=n2)
	 {
		if(A1[x][2]>A2[y][2])
		{
		  A[z][1]=A1[x][1];
		  A[z][2]=A1[x][2];
		  x++,z++;
		}
		else if (A1[x][2]<A2[y][2])
		{
		  A[z][1]=A2[y][1];
		  A[z][2]=A2[y][2];
		  y++,z++;
		}
		else
		{
		  A[z][1]=A1[x][1]+A2[y][1];
		  A[z][2]=A1[x][2];
		  x++,y++,z++;
		}
	 }
	while(y<=n2)
	 {
		  A[z][1]=A2[y][1];
		  A[z][2]=A2[y][2];
		  y++,z++;
	 }
	x=1;
	printf("First polynomial is:\n");
	while(x<=n1)
	 {
		printf("%dx^%d",A1[x][1],A1[x][2]);
		printf("\t");
		x++;
	 }
	printf("second polynomial is:\n");
	y=1;
	while(y<=n2)
	 {
		printf("%dx^%d",A2[y][1],A2[y][2]);
		printf("\t");
		y++;
	 }
	printf("Resultant polynomial after addition:\n");
	x=1;
	while(x<=z)
	 { 
		printf("%dx^%d",A[x][1],A[x][2]);
		printf("\t");
		x++;
	 }
	
}
	
