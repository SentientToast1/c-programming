#include<stdio.h>
void main(){
int a,b,c;

printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);

// using nested if
if(a>b){
    if(a>c)
        printf("A is greatest");
    else
        printf("C is greatest");
}
else{
    if(b>c)
        printf("B is greatest");
    else
        printf("C is greatest");
}

// using ternary operator



}
