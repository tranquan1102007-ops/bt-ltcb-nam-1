#include <stdio.h>

int sodoixung(int n) {
    int somoi = 0;
    int temp = n;

    while (temp > 0) {
        int chu_so = temp % 10;           // Lấy chữ số cuối
        somoi = somoi * 10 + chu_so;      // Đẩy vào số mới
        temp = temp / 10;                 // Bỏ chữ số cuối của temp
    }

    return somoi;
}

int main() {
    int n;
    printf("Nhap n: ");
    if (scanf("%d", &n) != 1) return 1; // Kiểm tra đầu vào hợp lệ

    // Nếu n âm, thường không xét là số đối xứng,
    // nhưng nếu bạn muốn xét, hãy lấy giá trị tuyệt đối trước.
    if (n >= 0 && sodoixung(n) == n) {
        printf("dung\n");
    } else {
        printf("sai\n");
    }

    return 0;
}
