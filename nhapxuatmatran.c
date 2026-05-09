#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[100][100];

    printf("Nhap so hang: "); scanf("%d", &r);
    printf("Nhap so cot: "); scanf("%d", &c);

    // Nhap mang
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Xuat mang
    printf("\nMa tran vua nhap:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%4d", a[i][j]); // %4d de tao khoang cach deu nhau
        }
        printf("\n"); // Xuong dong sau moi hang
    }

    return 0;
}
