#include <stdio.h>

int main() {
    int n, f0 = 0, f1 = 1, fn;

    printf("Nhap so luong so Fibonacci can in: ");
    scanf("%d", &n);

    printf("Day Fibonacci: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            fn = i;
        } else {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        printf("%d ", fn);
    }

    return 0;
}
