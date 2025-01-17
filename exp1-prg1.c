#include<stdio.h>
#define PI 3.1415
int main(){
    float area,circumference,radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("The area is: %f",area);
    circumference = 2 * PI * radius;
    printf("\nThe circumference is: %f",circumference);
    return 0;
    //16010124155

}
