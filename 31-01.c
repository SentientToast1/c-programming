#include<stdio.h>
void main(){
int a,b,c;
char greatest;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);

// using nested if
if(a>b){
    if(a>c)
        greatest = 'A';
    else
        greatest = 'C';
}
else{
    if(b>c)
        greatest = 'B';
    else
        greatest = 'C';
}
printf("%c is the greatest(using nested if-else)", greatest);

// using ternary operator
greatest = (a > b) ? ((a > c) ? 'A' : 'C') : ((b > c) ? 'B' : 'C');
printf("\n%c is the greatest(using ternary operator)", greatest);


}
