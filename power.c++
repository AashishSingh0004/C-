code for base 5 power 2
#include <stdio.h>      
#include <math.h>

int main() {
    int base = 5;
    int exponent = 2;
    double result = pow(base, exponent);
    
    printf("%d raised to the power of %d is: %.2f\n", base, exponent, result);
    
    return 0;
}

