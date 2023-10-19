// to check if the given number is even or odd
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number you want to check for even or odd \n");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("The given number is even\n");
    }
    else
    {
        printf("The given number is odd \n");
    }

    return 0;
}
