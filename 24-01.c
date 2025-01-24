#include<stdio.h>
void main(){

/* prints table of 2
int i,n;
printf("enter range: ");
scanf("%d",&n);
i = 2;
printf("%d",i);
while(i <= n){
    printf(" %d",i*2);

    i= i + 1;
}
*/

/* prints sum of digits
int num,sum;
printf("Enter number: ");
scanf("%d",&num);
sum = 0;
while(num>0){
    sum = sum + (num%10);
    num = num/10;
}
printf("the sum is: %d",sum);
*/

/* print table of 2 but this time with do-while
int i,n;
printf("enter range: ");
scanf("%d",&n);
i = 2;
printf("%d",i);
do{
    printf(" %d",i*2);

    i= i + 1;
}while(i <= n);
*/

/* finds factorial using while
int fac,num;
printf("Enter number: ");
scanf("%d", &num);
fac = 1;
while(num > 0){
    fac = fac * num;
    num--;
}
printf("Factorial is: %d",fac);
*/


/* prints n numbers
int n, i;
printf("enter number: ");
scanf("%d", &n);
for(i = 0;i <= n;i++){
    printf("<%d>",i);
}
*/

int range;
printf("enter range: ");
scanf("%d",&range);

int fib1 = 0, fib2 = 1, fib3 = 0, i = 0;
printf("0 1 ");
for(i = 0; i <= range-3; i++){
    fib3 = fib2 + fib1;
    fib1 = fib2;
    fib2 = fib3;
    printf("%d ",fib3);
}
}
