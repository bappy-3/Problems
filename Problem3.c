//Write a program to add, subtract, multiply, and divide two numbers. (3-10)

#include <stdio.h>

int main() {
    
    float num1, num2, sum, subtract, product, quotient;  
    
    printf("Enter two numbers: "); 
    scanf("%f %f", &num1, &num2); 
    
    sum = num1 + num2;
    subtract = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    
    
    printf("Sum: %f \n", sum); 
    printf("Difference: %f \n", subtract);
    printf("Product: %f \n", product);
    printf("Quotient: %f \n", quotient);
    
    return 0;
}
