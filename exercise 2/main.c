#include <stdio.h>
/*
 Name:Kaveh Masoudinia
 Section 3 Exercise 2
 Date:11/13/2021(1400/08/21)

 */
int main() {
    int z,i,x,y,A,B;
    printf("Enter Four Value For Coordinates:\n");
    scanf_s("%d %d %d %d",&x ,&y ,&z, &i);
    A=(x)+(y);
    B=(z)+(i);
    if (A>=0) {
        printf("\nA Point Is Positive:A=(%d)+(%d)", x, y);
    }
    else  {
        printf("\nA Point Is Negative:A=(%d)+(%d)", x, y);
    }
    if (B>=0){
        printf("\nB Point Is Positive:B=(%d)+(%d)", z, i);
    }
    else  {
        printf("\nB Point Is Negative:B=(%d)+(%d)", z, i);
    }




    return 0;
}
