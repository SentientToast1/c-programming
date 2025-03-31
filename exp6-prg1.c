#include<stdio.h>


void arrayIn(float arr[], int size ){
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%f",&arr[i]);
    }
}
void mean(float array[], int size){
    float mean,sumOfArray=0;
    for(int i = 0; i < size; i++){
        sumOfArray += array[i];
    }
    printf("mean of array: %.2f\n", sumOfArray/size);
}
void median(float array[], int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if (array[j] > array[j + 1]){
            int temp = array[j];
            array[j] = array[j+1];
            array[j + 1] = temp;
            }

        }
    }
    printf("median of array: %.2f\n", array[size/2]);
}
void mode(float array[], int size){
    int maxCount = 0;
    float mode = -1;
    for(int i = 0; i < size; i++){
        int count = 0;

        for(int j = 0; j < size; j++){
            if(array[i] == array[j])
            count++;

        }

        if(count > maxCount){
            maxCount = count;
            mode = array[i];
        }

    }
    printf("mode of array: %.2f\n", mode);

}

int main(){
    int opSize;
    printf("Enter size: ");
    scanf("%d",&opSize);
    float opArray[opSize];
    arrayIn(opArray,opSize);
    mean(opArray,opSize);
    median(opArray,opSize);
    mode(opArray,opSize);    return 0;}


