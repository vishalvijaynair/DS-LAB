#include<stdio.h>
void main()
{
    int n,i,j,a[50],b,l=0,m,swap,flag=0;
    printf("Enter the no of elements in the array :");
    scanf("%d",&n);
    int r=n;
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element in the array",i+1);
        scanf("%d",&a[i]);
    }
    while(l<=r)
    {
        m=(l+r)/2;
        if(b==a[m])
        {
            printf("The element is found at position %d",m+1);
            flag=1;
        }
        if(b<a[m])
        r=m-1;
        else
        l=m+1;
    }
    if(flag==0)
    printf("Element not found");
}