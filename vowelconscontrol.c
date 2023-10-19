//if else to find vowel or consonant for given character

#include<stdio.h>
int main()
{
    char x;
    printf("Enter the char you want to check for vowel and consonant \n");
    scanf("%c",&x);

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("The given character is vowel\n");
    }
    else
    {
        printf("The given character is consonant\n");
    }

    return 0;
}
