#include<stdio.h>

void main(){
    int yearJoined, yearCurrent,yearsPresent = 0, salary;
    printf("Enter current year: ");
    scanf("%d",&yearCurrent);
    printf("Enter year joined: ");
    scanf("%d", &yearJoined);
    yearsPresent = yearCurrent - yearJoined;
    if(yearsPresent < 3){
        salary = 1000;
    }
    else if(yearsPresent >= 3 && yearsPresent < 6){
        salary = 2500;
    }
    else if(yearsPresent >= 6 && yearsPresent < 10){
        salary = 5000;
    }
    else if(yearsPresent >= 10){
        salary = 10000;
    }
    printf("Your salary will be: %d",salary);
}
