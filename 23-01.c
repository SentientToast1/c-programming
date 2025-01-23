#include<stdio.h>
int main(){
//     int num;
//     printf("enter a number: ");
//     scanf("%d", &num);
//
//     if(num % 2 == 0){
//          printf("is even number");
//     }
//     else{
//          printf("is odd number");
//     }


//     int age;
//     printf("enter your age: ");
//     scanf("%d", &age);
//
//     if(age < 18){
//          printf("minor and not eligible");
//     }
//     else if(age >= 18 && age >=60 ){
//          printf("senior and not eligible");
//     }
//     else{
//          printf("you can work");
//     }

     int marks;
     printf("enter your marks: ");
     scanf("%d",&marks);
     if(marks>90){
          printf("A grade");
     }
     else if(marks >= 70 && marks <= 90){
          printf("B grade");
     }
     else if(marks >= 50 && marks < 70){
          printf("C grade");
     }
     else{
          printf("Fail");
     }
}
