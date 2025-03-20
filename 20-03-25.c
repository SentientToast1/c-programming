#include<stdio.h>
struct studentRecord {
    char name[100];
    int rollNo;
    float cgpi;
};

int main(){
    struct studentRecord student1 = {"Andrew",25,9.5};
    struct studentRecord student2;

    printf("Student 1 details:\nName: %s\nroll number: %d\nCGPI: %f",student1.name,student1.rollNo,student1.cgpi);
    printf("\nEnter name:");
    fgets(student2.name, sizeof(student2.name), stdin);
    printf("\nEnter roll number:");
    scanf("%d",&student2.rollNo);
    printf("\nEnter CGPI:");
    scanf("%f",&student2.cgpi);
    printf("Student 2 details:\nName: %s\nroll number: %d\nCGPI: %f",student2.name,student2.rollNo,student2.cgpi);



}
