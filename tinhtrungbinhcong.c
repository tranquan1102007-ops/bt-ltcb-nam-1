#include <stdio.h>

// Sửa n thành con trỏ để giá trị thay đổi được cập nhật vào hàm main
void nhapmang(int a[100], int *n) {
    printf("Nhap n: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int main() {
    int a[100], x = 0, y = 0, n;
    float tbsd = 0;
    float tbsa = 0;

    // 1. Phải nhập mảng trước
    nhapmang(a, &n);

    // 2. Sau đó mới tính toán
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) { // Kiểm tra số dương
            tbsd = tbsd + a[i];
            x = x + 1;
        } else if (a[i] < 0) { // Kiểm tra số âm
            tbsa = tbsa + a[i];
            y = y + 1;
        }
    }

    printf("\n");

    // 3. Kiểm tra x và y để tránh lỗi chia cho 0
    if (x > 0) {
        printf("Trung binh so duong la: %.2f\n", (tbsd / x));
    } else {
        printf("Khong co so duong trong mang\n");
    }

    if (y > 0) {
        printf("Trung binh so am la: %.2f\n", (tbsa / y));
    } else {
        printf("Khong co so am trong mang\n");
    }

    return 0;
}
