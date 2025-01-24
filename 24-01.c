#include<stdio.h>
int main(){
    int i,n;
    printf("enter range: ");
    scanf("%d",&n);
    i = 2;
    printf("%d",i);
    while(i <= n){
        printf(" %d",i*2);

        i= i + 1;
    }
    return 0;

}
