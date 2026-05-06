#include <stdio.h>
struct hoten{
char ho[20];
char tendem[20];
char ten[20];
};
struct quequan{
char xa[20];
char huyen[20];
char tinh[20];
};
struct diemthi{
float toan;
float ly;
float hoa;
};
struct thisinh{
struct hoten hovaten;
struct quequan diachi;
char truong[20];
int tuoi;
int sbd;
struct diemthi diem;
};
int main(){
struct thisinh ts;
printf("nhap thong tin thi sinh\n");
printf("nhap ho va ten:");
scanf("%s %s %s" ,ts.hovaten.ho ,ts.hovaten.tendem ,ts.hovaten.ten);
printf("nhap que quan:");
scanf("%s %s %s" ,ts.diachi.xa ,ts.diachi.huyen ,ts.diachi.tinh);
printf("nhap truong");
scanf("%s" ,ts.truong);
printf("nhap tuoi:");
scanf("%d" ,&ts.tuoi);
printf("nhap sbd:");
scanf("%d" ,&ts.sbd);
printf("nhap diem:");
scanf("%f %f %f" ,&ts.diem.toan ,&ts.diem.ly ,&ts.diem.hoa);
printf("phieu bang diem\n");
printf("ho va ten: %s %s &s\n" ,ts.hovaten.ho ,ts.hovaten.tendem ,ts.hovaten.ten);
printf("que quan: %s %s %s\n" ,ts.diachi.xa ,ts.diachi.huyen ,ts.diachi.tinh);
printf("truong: %s\n" ,ts.truong);
printf("tuoi: %d\n" ,ts.tuoi);
printf("sbd: %d\n" ,ts.sbd);
printf("diem: %.2f %.2f %.2f\n" ,ts.diem.toan ,ts.diem.ly ,ts.diem.hoa);
return 0;
}
