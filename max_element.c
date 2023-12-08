#include<stdio.h>
void main()
{
    int n;
    printf("Enter the limit\n");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int max=a[0];
    int index=0;
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        index=i;
    }
    printf("\nlargest element is %d",max);
    printf("\nIndex position is %d",index);
}    

