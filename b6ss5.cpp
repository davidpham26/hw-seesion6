#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("nhap hai so (a v� b): ");
    scanf("%f %f", &a, &b);

    do {
        printf("\n==== CALCULATOR ====\n");
        printf("1. tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. T�ch 2 so\n");
        printf("4. thuong cua hai so\n");
        printf("5. Tho�t\n");
        printf("lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Tong = %.2f\n", a + b); 
                break;
            case 2: 
                printf("Hieu = %.2f\n", a - b); 
                break;
            case 3: 
                printf("T�ch = %.2f\n", a * b); 
                break;
            case 4: 
                if (b != 0) 
                    printf("thuong = %.2f\n", a / b); 
                else 
                    printf("Kh�ng the chia cho 0!\n");
                break;
            case 5: 
                printf("Tho�t chuong trinh.\n"); 
                break;
            default: 
                printf("lua chon khong hop le vui long thu lai.\n");
        }
    } while (choice != 5);

    return 0;
}

