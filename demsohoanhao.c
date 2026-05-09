#include <stdio.h>

// Hàm kiểm tra số hoàn hảo (trả về 1 nếu đúng, 0 nếu sai)
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n && n > 0);
}

int main() {
    printf("Các số hoàn hảo từ 1 đến 1000 là:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
