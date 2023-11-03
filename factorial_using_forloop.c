#include<stdio.h>
int main()
{
    int i,n,fact=1;//n is the number which we want factoriial of 
    printf("Enter the number you want factorial of \n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        fact*=i;//
        
    }
    printf("factorail of number is %d\n",fact);
   
    return 0;

}
