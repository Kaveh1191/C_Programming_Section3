#include <stdio.h>
/*
 Name:Kaveh Masoudinia
 Section 3 Exercise 4
 Date:11/13/2021(1400/08/22)

 */
int main() {
    int num;
    char chr;
    float length, width,side,perimeter_s,area_s,area_r,area_c,perimeter_r,perimeter_c,radius;
    printf("Enter Values:\n");
    scanf("%d %c",&num,&chr);


    if(num==1 && chr=='m') {
        printf(" Square perimeter = 4 * side\n");
        printf("enter side of square: ");
        scanf("%f", &side);
        perimeter_s = 4 * side;
        printf("perimeter: %f\n", perimeter_s);
    }
    else if(num==1 && chr=='n'){
        printf("Square area = side * side\n");
        printf("Enter length of side of square\n");
        scanf("%f", &side);
        area_s = side * side;
        printf("Area of square: %f\n",area_s);
    }
    else if(num==2 && chr=='n'){
        printf(" Rectangle perimeter = 2 * (length + width)\n");
        printf("Enter length of the rectangle: \n");
        scanf("%f", &length);
        printf("Enter width of the rectangle: \n");
        scanf("%f", &width);
        perimeter_r = 2 * (length + width);
        printf("Perimeter of rectangle = %f ", perimeter_r);
    }
    else if(num==2 && chr=='m'){
        printf("rectangle area = length * Width\n");
        printf("\nEnter the Length of Rectangle : ");
        scanf("%f", &length);

        printf("\nEnter the Breadth of Rectangle : ");
        scanf("%f", &width);

        area_r = length * width;
        printf("\nArea of Rectangle : %f", area_r);
    }
    else if(num==3 && chr=='n'){
        printf("Perimeter Of Circle= 2*3.14*radius\n");
        printf("Enter radius of the Circle \n");
        scanf("%f",&radius);
       perimeter_c = 2*3.14*radius;
        printf("Perimeter of the Circle = %f",perimeter_c);
    }
    else if(num==3 && chr=='m'){
        printf("Area Of Circle= 3.14*radius*radius\n");
        printf("Enter radius of the Circle: \n");
        scanf_s("%f",&radius);
        area_c=3.14*radius*radius;
        printf("Area of the Circle = %f",area_c);
    }
    return 0;
}
