#include <stdio.h>

int main() {
    int a, b, min;
    printf("nhap 2 so: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    printf("Cac uoc chung la: "); // In thong bao mot lan duy nhat o day
    for (int i = 1; i <= min; i++) { // i phai chay tu 1
        if (a % i == 0 && b % i == 0) {
            printf("%d ", i); // Chi in ra con so i va dau cach
        }
    }

    return 0;
}
