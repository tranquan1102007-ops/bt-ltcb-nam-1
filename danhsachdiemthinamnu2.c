#include <stdio.h>

union diemrieng {
    struct { int diemhat, diemmua; } nu;
    struct { int diemtheduc, diemtin; } nam;
};

struct sinhvien {
    char hoten[20], que[20];
    int gioitinh;
    int tongdiem;
    union diemrieng diem;
};

// Hàm nhập thông tin cho 1 sinh viên (để dùng lại nhiều lần)
void nhapMotSinhVien(struct sinhvien *sv) {
    printf("Ho ten: ");
    scanf(" %[^\n]s", sv->hoten);
    printf("Que quan: ");
    scanf(" %[^\n]s", sv->que);
    printf("Gioi tinh (Nu: 1 | Nam: 2): ");
    scanf("%d", &sv->gioitinh);

    if (sv->gioitinh == 1) {
        printf("Nhap diem hat va diem mua: ");
        scanf("%d %d", &sv->diem.nu.diemhat, &sv->diem.nu.diemmua);
        sv->tongdiem = sv->diem.nu.diemhat + sv->diem.nu.diemmua;
    } else {
        printf("Nhap diem the duc va diem tin: ");
        scanf("%d %d", &sv->diem.nam.diemtheduc, &sv->diem.nam.diemtin);
        sv->tongdiem = sv->diem.nam.diemtheduc + sv->diem.nam.diemtin;
    }
}

int main() {
    int n, k;
    struct sinhvien ds[100]; // Khai báo tối đa 100 sinh viên

    printf("Nhap so luong hoc sinh ban dau: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);
        nhapMotSinhVien(&ds[i]);
    }

    // CHỨC NĂNG CHÈN
    printf("\nNhap vi tri can chen (tu 0 den %d): ", n);
    scanf("%d", &k);

    if (k < 0 || k > n) {
        printf("Vi tri khong hop le!\n");
    } else {
        // 1. Dich chuyen cac phan tu de tao cho trong
        for (int i = n; i > k; i--) {
            ds[i] = ds[i - 1];
        }
        // 2. Nhap du lieu cho sinh vien moi tai vi tri k
        printf("Nhap thong tin sinh vien moi can chen:\n");
        nhapMotSinhVien(&ds[k]);
        // 3. Tang tong so luong sinh vien
        n++;
    }

    // Sau khi chen, ban co the in lai danh sach nhu code cu...
    printf("\n--- DANH SACH SAU KHI CHEN ---\n");
    // (Copy doan in danh sach cua ban vao day)

    return 0;
}
