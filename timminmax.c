#include <stdio.h>

#define MAX 100

// Hàm nhập mảng
int nhapMang(int a[]) {
    int i, n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    return n;
}

// Hàm in mảng
void inMang(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[MAX], n, i;
    int max, min;

    n = nhapMang(a);

    // Kiểm tra nếu mảng rỗng thì thoát
    if (n <= 0) {
        return 0;
    }

    // Khởi tạo max, min là phần tử đầu tiên
    max = a[0];
    min = a[0];

    // Thuật toán tìm max, min dùng if...else rõ ràng
    for (i = 1; i < n; i++) {
        // Tìm Max
        if (a[i] > max) {
            max = a[i];
        }

        // Tìm Min
        if (a[i] < min) {
            min = a[i];
        }
    }

    // In kết quả Max
    printf("\nGia tri lon nhat cua mang la %d tai vi tri: ", max);
    for (i = 0; i < n; i++) {
        if (a[i] == max) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    // In kết quả Min
    printf("Gia tri nho nhat cua mang la %d tai vi tri: ", min);
    for (i = 0; i < n; i++) {
        if (a[i] == min) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
