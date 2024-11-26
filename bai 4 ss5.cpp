#include <stdio.h>

int main() {
    int n;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    do {
        printf("Nhap so tu 1 den 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    for (int i = 1; i <= 10; i++) 
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}

