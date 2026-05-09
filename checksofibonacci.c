#include <stdio.h>
#include <stdbool.h>

bool checkFibonacci(int x) {
    if (x < 0) return false;
    int f0 = 0, f1 = 1, fn = 0;

    while (fn < x) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }

    return (fn == x || x == 0);
}

int main() {
    int x;
    printf("Nhap so can kiem tra: ");
    scanf("%d", &x);

    if (checkFibonacci(x)) {
        printf("%d la so Fibonacci.\n", x);
    } else {
        printf("%d khong thuoc day Fibonacci.\n", x);
    }

    return 0;
}
