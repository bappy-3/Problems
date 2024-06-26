//Write a programm to print whatever you give input.

#include <stdio.h>

int main() {
    char input[100];  // Assuming input will not exceed 99 characters
    
    printf("Enter something: "); 
    scanf("%99[^\n]", input); //"%99[^\n]" means it will work for max 99 chars untill you go for a new line 
    
    printf("You entered: %s", input);   
    return 0;
}
