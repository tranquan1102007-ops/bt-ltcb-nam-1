#include <stdio.h>

// Thêm đóng ngoặc } cho hàm này
void nhapmatran(int a[100][100], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inmatran(int a[100][100], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%4d", a[i][j]); // In các số trên cùng 1 hàng
        }
        printf("\n"); // Hết một hàng mới xuống dòng
    }
}

int maxmatran(int a[100][100], int dong, int cot) {
    int max = a[0][0];
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int minmatran(int a[100][100], int dong, int cot) {
    int min = a[0][0];
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}

int main() {
    int a[100][100]; // Khai báo mảng a ở đây
    int dong, cot;

    printf("Nhap so hang: ");
    scanf("%d", &dong);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    nhapmatran(a, dong, cot);

    printf("\nMa tran vua nhap la:\n");
    inmatran(a, dong, cot);

    // Gọi hàm để gán giá trị vào biến max, min
    int max = maxmatran(a, dong, cot);
    int min = minmatran(a, dong, cot);

    printf("\nMax la: %d", max);
    printf("\nMin la: %d", min);

    return 0;
}
