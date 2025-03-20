#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int mult(float a, float b){
    return a * b;
}

char dispChar(char a){
    return a;
}
int swapnum(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
//    printf("addition is: %d",add(3,6));
//    printf("\nmultiplication is: %d",mult(5.0,10.0));
//    printf("\nCharacter displayed: %c",dispChar('c'));
int num1 = 50 , num2 = 60;

swapnum(&num1,&num2);

printf("%d , %d",num1, num2);

}
