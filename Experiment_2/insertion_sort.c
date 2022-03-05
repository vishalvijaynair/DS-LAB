#include<stdio.h>
void main()
{
    int n,i,a[20],j,temp,x;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
         temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
}