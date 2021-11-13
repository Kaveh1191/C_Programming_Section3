#include <stdio.h>
/*
 Name:Kaveh Masoudinia
 Section 3 Exercise 1
 Date:11/13/2021(1400/08/21)

 */
int main() {
    int x,y,formula;
    printf("Enter Value X:\n");
    scanf("%d",&x);
    printf("Enter Value Y:\n");
    scanf_s("%d",&y);
    formula=x+y*y/x+y;
    printf("After mathematical operations:%d",formula);
    return 0;
}
