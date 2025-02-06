#include<stdio.h>
void main(){
    int num, revNum = 0, digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    int origNum = num;
    while(num > 0){
        digit = num % 10;
        revNum = revNum*10 + digit;
        num = num/10;
    }
    if(origNum == revNum){
        printf("It is a palindrome");

    }
    else{

        printf("Not a palindrome");

    }
    //16010124155


}
