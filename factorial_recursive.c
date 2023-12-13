#include<stdio.h>
int fact(int);
void main()
{
    int n,x;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The n value is %d\n",n);
    x=fact(n);
    printf("Factorial of n is %d:",x);
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}