#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number \n");
    scanf("%d",&num);//if num is 12

    while(num != 0)
    {
        sum=sum+num%10;//sum=0+12%10=0+2=2,sum=2--sum=2+1%10=2+1=3(as output)
        num=num/10;//num=12/10=1;num=1 again starting
    }
    printf("sum of the digits are %d",sum);


}