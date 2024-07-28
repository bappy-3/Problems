/*
Print a conversion table of inches to meters. Display 12 feet of conversions, inch by inch. 
Output a blank line every 12 inches. (One meter equals approximately 39.37 inches.)
*/

#include<stdio.h>
int main(){

    float inches, meters;
    int i, feet_to_inches;
    
    feet_to_inches = 12*12; //12*12 inches for 12 feet 
    
    printf("Inches \t\t Meters \n");
    
    for (i = 1; i <= feet_to_inches; i++) { 
        inches = i;
        meters = inches / 39.37; 

        printf("%f \t %f\n", inches, meters); 

        //blank line after every 12 inches
        if (i % 12 == 0) {
            printf("\n");
        }
    }
    
}
