#include <stdio.h>
#define Coefficient 0.3048

// define the function to calculate the length of the meter rule
int calculate(int meterRule);

int main() {
    int meterRule;
    
    printf("Enter the length of the meter rule: ");
    scanf("%d", &meterRule);

    printf("The length of the meter rule is %d\n", calculate(meterRule));
    
    return 0;
}

// implement the function to calculate the length of the meter rule
int calculate(int meterRule) {
    return meterRule * Coefficient;
}