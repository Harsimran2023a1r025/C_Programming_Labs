//only for two digits

#include<stdio.h>
int main()
{
    int a,i=2,c=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    

    while(i<=a)
    {
       if(a%i==0)//if a=6 then 2<=6 then 6%2=0 agian 3<=6 then 6%3=0 
       {
        c++;//0+1=1(true)agian 1+1=2(true)
       }
       i++;//2+1=3 agian 3+1=4
    }
    if(c==1)// as c=2 so its is not a prime
    {
        printf("It is a prime \n");
    }
    else 
    {
        printf("It is not a prime \n");
    }
    return 0;
}