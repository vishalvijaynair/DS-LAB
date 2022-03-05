#include<stdio.h>
void main()
{
    int n,i,a[20],j,temp,min;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
}