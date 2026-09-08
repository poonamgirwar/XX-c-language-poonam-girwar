#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    // Asking the user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculating the sum
    sum = num1 + num2;
    
    // Displaying the result
    printf("Sum of %d and %d = %d\n", num1, num2, sum);
    
    return 0;
}
