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


int i,n;
printf("enter range: ");
scanf("%d",&n);
i = 2;
printf("%d",i);
do{
    printf(" %d",i*2);

    i= i + 1;
}while(i <= n);


}
