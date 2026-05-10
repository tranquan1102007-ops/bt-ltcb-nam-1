#include <stdio.h>

int main() {
    int n, temp;
    int sum = 0;

    printf("nhap so n: ");
    if (scanf("%d", &n) != 1) return 1;

    // Bước 1: Tính tổng các chữ số của n
    temp = n;
    while (temp > 0) {
        sum += temp % 10; // Lấy chữ số cuối cộng vào sum
        temp /= 10;       // Loại bỏ chữ số cuối đã lấy
    }

    // Bước 2: Kiểm tra logic (sum*sum có cùng chữ số cuối với sum hay không)
    // Điều này tương đương với việc (sum*sum - sum) chia hết cho 10
    if ((sum * sum - sum) % 10 == 0) {
        printf("Dung\n");
        printf("Giai thich: Tong chu so la %d, %d^2 = %d (cung duoi %d)\n", sum, sum, sum*sum, sum % 10);
    } else {
        printf("Sai\n");
        printf("Giai thich: Tong chu so la %d, %d^2 = %d (khac duoi %d)\n", sum, sum, sum*sum, sum % 10);
    }

    return 0;
}