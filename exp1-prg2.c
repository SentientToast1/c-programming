#include<stdio.h>
int main(){
    int distInKM,distInCM,distInIN,distInFT;
    printf("Enter distance between cities in km: ");
    scanf("%d",&distInKM);
    distInCM = distInKM * 100000;
    distInFT = distInKM *  3281;
    distInIN = distInFT * 12;

    printf("the distance between is: %d in km, %d in cm, %d in feet and %d in inches",distInKM,distInCM,distInFT,distInIN);
    return 0;
    //16010124155
}
