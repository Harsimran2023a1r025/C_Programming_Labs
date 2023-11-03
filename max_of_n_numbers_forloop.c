//max of n numbers 
#include<stdio.h>
int main()
{
    int n,i,max=1,num;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter the value %d\n",i);
        scanf("%d",&num);
        max=(num>max)?num:max;

    }
    printf("%d is max no. along all the numbers\n",max);
    return 0;

}