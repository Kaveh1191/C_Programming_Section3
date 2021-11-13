#include <stdio.h>
/*
 Name:Kaveh Masoudinia
 Section 3 Exercise 3
 Date:11/13/2021(1400/08/22)

 */
int main() {
    int age,weight;
    printf("Enter Your Age And Weight:\n");
    scanf("%d %d",&age,&weight);
    if(age==20 && weight==60) {
        printf("Exercise 2 hours a day _ Climbing once a week _ Volleyball or basketball twice a week");
    }
    else if (age==20 && weight==80){
        printf("Exercise 4 hours a day _ Climbing twice a week _ Tennis 3 hours a week _ Pool twice a week");
    }
    else if (age==30 && weight==60){
        printf("Exercise 1 hour and a half a day _ Climbing once a week _ Pool twice a week _ Light diet");
    }
    else if (age==30 && weight==80){
        printf("Exercise 1 hour and a half a day _ Climbing once a week _ Pool twice a week _ Heavy diet");
    }
    else if (age==40 && weight==60){
        printf("Exercise 1 hour a day _ Climbing twice a month _ Pool three times a week _ Walk twice a week");
    }
    else if (age==40 && weight==80){
        printf("Exercise 1 hour a day _ Climbing three times a month _ Pool three times a week _ Walk every day");
    }
    else if (age==50 && (weight==60 || 80)){
        printf("Exercise 1 hour a day _ Soft Exercise 1 hour every day _ Pool twice a week _ Walk every day _ Balanced diet");
    } else
        printf("Exercise 1 hour a day _ Soft Exercise every day _ Pool twice a week _ Climbing once a week _ Walk every day _ Balanced diet");
        return 0;
}
