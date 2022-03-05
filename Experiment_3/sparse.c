#include<stdio.h>
void main()
{
    int r,c,i,j,s[20][20],size=0;
    printf("Enter the number of rows of matrix :");
    scanf("%d",&r);
    printf("Enter the number of coloumns of matrix :");
    scanf("%d",&c);
    printf("Enter the elements in the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[i][j]!=0)
            size++;
        }
    }
    int b[size][3],k=0;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        if(s[i][j]!=0)
        {
            b[k][0]=i+1;
            b[k][1]=j+1;
            b[k][2]=s[i][j];
            k++;
        }
        }
    }
    printf("Row\t");
    printf("Coloumn\t");
    printf("Value\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}