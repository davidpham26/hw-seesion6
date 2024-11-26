#include <stdio.h>

int main() {
    int target = 42, input;
    do {
        printf("Nhap mot so: ");
        scanf("%d", &input);
    } while (input != target);
    return 0;
}

