#include<stdio.h>
int main()
{
    float radius;
    float side;
    float length,breadth;

    //circle
    printf("Finding area and perimeter of circle\n");
    printf("Enter the radius of circle\n");
    scanf("%f",&radius);

    printf("The area of circle is %.2f\n",3.14*radius*radius);
    printf("The perimeter of circle is %.2f\n",2*3.14*radius);


    //square
    printf("Finding area and perimeter of square\n");
    printf("Enter the side of square\n");
    scanf("%f",&side);

    printf("The area of square is %.2f\n",side*side);
    printf("The perimeter of square is %.2f\n",4*side);

    
    //rectangle
    printf("Finding area and perimeter of rectangle\n");
    printf("Enter the length and breadth of rectangle\n");
    scanf("%f%f",&length,&breadth);

    printf("The area of rectangle is %.2f\n",length*breadth);
    printf("The perimeter of rectangle is %.2f\n",2*(length*breadth));

    return 0;

}