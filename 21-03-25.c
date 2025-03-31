#include<stdio.h>

union uni1{
    int num;
    float b;
    char c;
};

int main(){
    union uni1 un1;
    un1.num = 6;
    printf("%d\n",un1.num);
    un1.b = 6.78;
    printf("%.2f\n",un1.b);
    un1.c = 'G';
    printf("%c\n",un1.c);
    return 0;


}
