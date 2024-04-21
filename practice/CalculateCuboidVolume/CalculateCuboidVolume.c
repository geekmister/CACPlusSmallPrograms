#include <stdio.h>
#define Height 10

// define the function to calculate the volume of the cuboid
int calculate(int length, int width);

int main() {
    int length, width;
    printf("Enter the length and width of the cuboid: ");
    scanf("%d %d", &length, &width);
    printf("The volume of the cuboid is %d\n", calculate(length, width));
    return 0;
}

// implement the function to calculate the volume of the cuboid
int calculate(int length, int width) {
    return length * width * Height;
}

