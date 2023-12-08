#include<stdio.h>
void main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sorted array is \n");
    for(i=0;i<n-1;i++)
    {
        int k=0;
        int j=0;
        for(j=k+1;j<n-i;j++)
        {
            if(a[k]>a[j])
            {
            int t=a[k];
            a[k]=a[j];
            a[j]=t;
            }
            k++;
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}    