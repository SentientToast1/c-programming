#include<stdio.h>
void main(){
    int a[5] = {0}, avg = 0;
    char grade;


    for(int subject = 1; subject <= 5; subject++){
        printf("Enter marks for subject %d : ",subject);
        scanf("%d", &a[subject-1]);


    }

    for(int i = 0; i<5 ; i++){
        avg += a[i];
    }
    switch(avg/50){
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7 :
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    case 5:
        grade = 'E';
        break;
    default:
        grade = 'F';
    }

    printf("Your grade is: %c",grade);
    //16010124155
}
