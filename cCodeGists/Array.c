#include <stdio.h>

int main() {
    int iArray[11], index;

    for (index = 0; index < 11; index++) {
        scanf("%d", &iArray[index]);
    }

    printf("The phone numbers are: \n");

    for (index = 0; index < 11; index++) {
        printf("%d", iArray[index]);
    }

    return 0;
}