#include <stdio.h>
#include <string.h> // Cần cho hàm strlen và xử lý chuỗi

// Định nghĩa cấu trúc sinh viên
struct thongtinsinhvien {
    char hoten[25];
    char diachi[50];
    int tuoi;
    float diemtb;
};

// Hàm xóa bộ đệm bàn phím
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Hàm nhập thông tin cho một sinh viên
void nhapThongTinSinhVien(struct thongtinsinhvien *sv) {
    printf("  Ho va ten: ");
    fgets(sv->hoten, sizeof(sv->hoten), stdin);
    // Xóa ký tự xuống dòng nếu có
    sv->hoten[strcspn(sv->hoten, "\n")] = 0;

    printf("  Dia chi: ");
    fgets(sv->diachi, sizeof(sv->diachi), stdin);
    sv->diachi[strcspn(sv->diachi, "\n")] = 0;

    printf("  Tuoi: ");
    scanf("%d", &sv->tuoi);
    clear_input_buffer(); // Xóa bộ đệm sau khi đọc số nguyên

    printf("  Diem TB: ");
    scanf("%f", &sv->diemtb);
    clear_input_buffer(); // Xóa bộ đệm sau khi đọc số thực
}

// Hàm hiển thị thông tin của một sinh viên
void hienThiThongTinSinhVien(const struct thongtinsinhvien *sv) {
    printf("  Ho va ten: %s\n", sv->hoten);
    printf("  Dia chi: %s\n", sv->diachi);
    printf("  Tuoi: %d\n", sv->tuoi);
    printf("  Diem TB: %.2f\n", sv->diemtb);
}

int main() {
    struct thongtinsinhvien lop[100];
    int n, i;

    printf("Nhap so luong sinh vien (toi da 100): ");
    // Kiểm tra đầu vào hợp lệ
    while (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("So luong sinh vien khong hop le. Vui long nhap lai (1-100): ");
        clear_input_buffer();
    }
    clear_input_buffer(); // Xóa bộ đệm sau khi đọc 'n'

    for (i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        nhapThongTinSinhVien(&lop[i]);
    }

    printf("\n--- THONG TIN SINH VIEN ---\n");
    for (i = 0; i < n; i++) {
        printf("\nThong tin sinh vien thu %d:\n", i + 1);
        hienThiThongTinSinhVien(&lop[i]);
    }

    return 0;
}