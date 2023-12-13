#include<stdio.h>

int operator();
float add(float num1, float num2);
float sub(float num1, float num2);
float mul(float num1, float num2);
float div(float num1, float num2);

int main() {
    float num1, num2, res;
    scanf("%f%f", &num1, &num2);
    
    switch (operator()) {
        case 1:
            res = add(num1, num2);
            printf("Result is %.2f", res);
            break;
        case 2:
            res = sub(num1, num2);
            printf("Result is %.2f", res);
            break;
        case 3:
            res = mul(num1, num2);
            printf("Result is %.2f", res);
            break;
        case 4:
            if (num2 != 0) {
                res = div(num1, num2);
                printf("Result is %.2f", res);
            } else {
                printf("Anything divided by zero is not defined");
            }
            break;
        default:
            printf("Invalid choice\n Enter again");
    }

    return 0;
}

int operator() {
    int i;
    printf("\n Choose your operator from the following");
    printf("\n1 for Addition");
    printf("\n2 for Subtraction");
    printf("\n3 for Multiplication");
    printf("\n4 for Division\n");
    printf("Enter your choice:");
    scanf("%d", &i);
    return i;
}

float add(float num1, float num2) {
    return num1 + num2;
}

float sub(float num1, float num2) {
    return num1 - num2;
}

float mul(float num1, float num2) {
    return num1 * num2;
}

float div(float num1, float num2) {
    return num1 / num2;
}
