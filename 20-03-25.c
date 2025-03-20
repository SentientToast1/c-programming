#include<stdio.h>
struct carRecord {
    char name[50];
    int number;

};

int main(){
    struct carRecord cars[5];
    int i;

    for(i = 0 ; i<5 ; i++){
        printf("Enter car name: ");
        fgets(cars[i].name,sizeof(cars[i].name),stdin);
        cars[i].name[strcspn(cars[i].name, "\n")] = '\0';
        printf("Enter car number: ");
        scanf("%d",&cars[i].number);
        getchar();
        printf("---\n");
    }
    for(i=0; i<5; i++){
        printf("%s\t%d\n", cars[i].name,cars[i].number);
    }


    return 0;
}




//struct studentRecord {
//    char name[100];
//    int rollNo;
//    float cgpi;
//};
//
//int main(){
//    struct studentRecord student1 = {"Andrew",25,9.5};
//    struct studentRecord student2;
//
//    printf("Student 1 details:\nName: %s\nroll number: %d\nCGPI: %f",student1.name,student1.rollNo,student1.cgpi);
//    printf("\nEnter name:");
//    fgets(student2.name, sizeof(student2.name), stdin);
//    printf("\nEnter roll number:");
//    scanf("%d",&student2.rollNo);
//    printf("\nEnter CGPI:");
//    scanf("%f",&student2.cgpi);
//    printf("Student 2 details:\nName: %s\nroll number: %d\nCGPI: %f",student2.name,student2.rollNo,student2.cgpi);
//
//
//
//}



























