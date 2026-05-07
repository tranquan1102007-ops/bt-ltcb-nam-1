#include <stdio.h>

struct HoTen {
    char ho[20], tenDem[20], ten[20];
};

struct QueQuan {
    char xa[30], huyen[30], tinh[30];
};

struct DiemThi {
    float toan, ly, hoa;
};

struct ThiSinh {
    struct HoTen hoTen;
    struct QueQuan queQuan;
    char truong[50];
    int tuoi;
    char soBaoDanh[20];
    struct DiemThi diem;
};

int main() {
    int n;
    printf("Nhap so luong thi sinh: ");
    scanf("%d", &n);

    // Khai bao mot mang cac thi sinh
    struct ThiSinh ds[n];

    // VONG LAP NHAP
    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap thong tin thi sinh thu %d ---\n", i + 1);

        printf("Nhap ho, ten dem, ten: ");
        scanf("%s %s %s", ds[i].hoTen.ho, ds[i].hoTen.tenDem, ds[i].hoTen.ten);

        printf("Nhap que quan (xa huyen tinh): ");
        scanf("%s %s %s", ds[i].queQuan.xa, ds[i].queQuan.huyen, ds[i].queQuan.tinh);

        printf("Nhap truong: ");
        scanf("%s", ds[i].truong);

        printf("Nhap tuoi: ");
        scanf("%d", &ds[i].tuoi);

        printf("Nhap SBD: ");
        scanf("%s", ds[i].soBaoDanh);

        printf("Nhap diem Toan, Ly, Hoa: ");
        scanf("%f %f %f", &ds[i].diem.toan, &ds[i].diem.ly, &ds[i].diem.hoa);
    }

    // VONG LAP XUAT
    printf("\n==========================================");
    printf("\nDANH SACH PHIEU DIEM");
    for (int i = 0; i < n; i++) {
        printf("\nThi sinh %d: %s %s %s | SBD: %s | Diem: %.1f, %.1f, %.1f",
                i + 1,
                ds[i].hoTen.ho, ds[i].hoTen.tenDem, ds[i].hoTen.ten,
                ds[i].soBaoDanh,
                ds[i].diem.toan, ds[i].diem.ly, ds[i].diem.hoa);
    }

    printf("\n==========================================\n");
    printf("danh sach thi sinh co diem tren 15 la:\n");
    for(int i=0;i<n;i++){
        int tongdiem=ds[i].diem.toan+ds[i].diem.ly+ds[i].diem.hoa;
        if(tongdiem>15){
             printf("\nThi sinh %d: %s %s %s | SBD: %s | Diem: %.1f, %.1f, %.1f",
                i + 1,
                ds[i].hoTen.ho, ds[i].hoTen.tenDem, ds[i].hoTen.ten,
                ds[i].soBaoDanh,
                ds[i].diem.toan, ds[i].diem.ly, ds[i].diem.hoa);
        }
        }
    }

    return 0;
}
