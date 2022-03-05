#include<stdio.h>
void main()
{
    int n,i,a[50],b;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the %d element in array:",i+1);
    scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
        printf("The element %d is found at position %d ",b,i+1);
        break;
        }
       
    }
    if(i==n)
        printf("The element is not found");
}