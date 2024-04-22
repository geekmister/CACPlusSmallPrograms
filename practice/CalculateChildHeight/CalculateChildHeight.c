#include <stdio.h>
#define Coefficient 0.54

// define the function to calculate the height of the child
int calculate(int fatherHeight, int motherHeight);

int main() {
    int fatherHeight, motherHeight;

    printf("Enter the height of the father and the mother: ");
    scanf("%d %d", &fatherHeight, &motherHeight);

    int childHeight = calculate(fatherHeight, motherHeight);
    printf("The height of child is %d\n", childHeight);
}

// implement the function to calculate the height of the child
int calculate(int fatherHeight, int motherHeight) {
    return (fatherHeight + motherHeight) * Coefficient;
}