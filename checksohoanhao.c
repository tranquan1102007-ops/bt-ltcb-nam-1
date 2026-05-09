#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhập vào một số nguyên dương: ");
    scanf("%d", &n);

    // Tìm các ước và tính tổng
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Kết luận
    if (sum == n && n > 0) {
        printf("%d là số hoàn hảo.\n", n);
    } else {
        printf("%d không phải là số hoàn hảo.\n", n);
    }

    return 0;
}
