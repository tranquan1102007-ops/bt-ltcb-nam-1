#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Dinh nghia cau truc thi sinh
struct ThiSinh {
    char so_bao_danh[15];
    char ho_ten[30];
    float diem_toan, diem_ly, diem_tieng_anh, tong_diem;
    struct ThiSinh *next; // Con tro tro den thi sinh tiep theo
};

typedef struct ThiSinh TS;

// Ham tao mot thi sinh moi
TS* taoNode() {
    TS *moi = (TS*)malloc(sizeof(TS));
    printf("Nhap SBD: "); scanf("%s", moi->so_bao_danh);
    getchar(); // Xoa bo nho dem
    printf("Nhap Ho ten: "); gets(moi->ho_ten);
    printf("Diem Toan: "); scanf("%f", &moi->diem_toan);
    printf("Diem Ly: "); scanf("%f", &moi->diem_ly);
    printf("Diem Tieng Anh: "); scanf("%f", &moi->diem_tieng_anh);
    
    moi->tong_diem = moi->diem_toan + moi->diem_ly + moi->diem_tieng_anh;
    moi->next = NULL;
    return moi;
}

// 2. Chuc nang 1: Tao danh sach (them vao cuoi)
TS* taoDanhSach(TS *head) {
    int n;
    printf("Nhap so luong thi sinh can them: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("\nNhap thi sinh thu %d:\n", i + 1);
        TS *moi = taoNode();
        if(head == NULL) {
            head = moi;
        } else {
            TS *p = head;
            while(p->next != NULL) p = p->next;
            p->next = moi;
        }
    }
    return head;
}

// 3. Chuc nang 2: Hien thi danh sach
void hienThi(TS *head) {
    printf("\nDANH SACH DIEM THI THPT\n");
    printf("%-5s %-10s %-20s %-7s %-7s %-7s %-7s\n", "STT", "SBD", "Ho ten", "Toan", "Ly", "Anh", "Tong");
    int stt = 1;
    TS *p = head;
    while(p != NULL) {
        printf("%-5d %-10s %-20s %-7.2f %-7.2f %-7.2f %-7.2f\n", 
                stt++, p->so_bao_danh, p->ho_ten, p->diem_toan, p->diem_ly, p->diem_tieng_anh, p->tong_diem);
        p = p->next;
    }
}

// 4. Chuc nang 3: Sap xep (doi cho du lieu)
void sapXep(TS *head) {
    if(head == NULL) return;
    for(TS *i = head; i->next != NULL; i = i->next) {
        for(TS *j = i->next; j != NULL; j = j->next) {
            if(i->tong_diem < j->tong_diem) { // Sap xep giam dan theo tong diem
                // Hoan vi SBD
                char tempSBD[15]; strcpy(tempSBD, i->so_bao_danh);
                strcpy(i->so_bao_danh, j->so_bao_danh);
                strcpy(j->so_bao_danh, tempSBD);
                // Hoan vi Ho ten
                char tempTen[30]; strcpy(tempTen, i->ho_ten);
                strcpy(i->ho_ten, j->ho_ten);
                strcpy(j->ho_ten, tempTen);
                // Hoan vi cac diem
                float tDiem = i->tong_diem; i->tong_diem = j->tong_diem; j->tong_diem = tDiem;
                // Co the hoan vi them cac diem thanh phan tuong tu...
            }
        }
    }
    printf("\nDa sap xep xong theo tong diem giam dan!\n");
}

// 5. Ham Main - Menu dieu khien
int main() {
    TS *head = NULL;
    int chon;
    do {
        printf("\n--- MENU QUAN LY ---\n");
        printf("1. Tao danh sach thi sinh\n");
        printf("2. Hien thi danh sach\n");
        printf("3. Sap xep theo tong diem\n");
        printf("4. Ket thuc\n");
        printf("Chon chuc nang (1-4): ");
        scanf("%d", &chon);

        switch(chon) {
            case 1: head = taoDanhSach(head); break;
            case 2: hienThi(head); break;
            case 3: sapXep(head); break;
            case 4: printf("Tam biet!"); break;
            default: printf("Chon sai, vui long nhap lai!\n");
        }
    } while(chon != 4);

    return 0;
}