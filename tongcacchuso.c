#include <stdio.h>

int main() {
    int n, so_du, tong = 0;

    printf("nhap 1 so nguyen: ");
    scanf("%d", &n);

    // Lưu lại giá trị ban đầu để in ra sau này nếu cần
    int n_goc = n;

    // Đảm bảo xử lý được cả số âm
    if (n < 0) n = -n;

    while (n > 0) {
        so_du = n % 10;      // Lấy chữ số cuối cùng
        tong = tong + so_du; // Cộng vào biến tổng
        n = n / 10;          // Loại bỏ chữ số cuối đã lấy
    }

    printf("tong %d la: %d\n", n_goc, tong);

    return 0;
}
