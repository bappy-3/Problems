//The moon’s gravity is about 17 percent that of earth’s. Write a program that computes your effective weight on the moon.

#include<stdio.h>
int main(){

    float earthWeight, moonWeight, mass;
    
    printf("Enter the mass in KG: ");
    scanf("%f", &mass);
    
    earthWeight = mass * 9.8;
    moonWeight = earthWeight * 0.17;
    
    printf("effective weight on the moon is %f N", moonWeight);
    
}
