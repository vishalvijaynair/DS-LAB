#include<stdio.h>
void main()
{
    int n,i,a[20],j,temp;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
}