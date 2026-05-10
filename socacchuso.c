#include <stdio.h>

int main() {
    long long n;
    int dem = 0;

    printf("nhap: ");
    scanf("%lld", &n);

    long long n_goc = n; // Lưu lại giá trị ban đầu

    // Xử lý trường hợp đặc biệt: số 0 có 1 chữ số
    if (n == 0) {
        dem = 1;
    } else {
        // Chuyển số âm thành số dương để xử lý
        if (n < 0) n = -n;

        while (n > 0) {
            n = n / 10; // Loại bỏ chữ số cuối
            dem++;      // Tăng biến đếm
        }
    }

    printf("so cac chu so cua %lld la: %d\n", n_goc, dem);

    return 0;
}
