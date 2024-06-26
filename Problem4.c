//Write a program to add multiple numbers with user input. The user will define how many numbers he wants to add.

#include <stdio.h>

int main() {
    
    int n;
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &n) ;
    
    float num, sum;
    sum = 0;
    
    for (int i=1; i<=n; i++){
        printf("Enter number%d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("Total: %f", sum);
    
    return 0;
}
