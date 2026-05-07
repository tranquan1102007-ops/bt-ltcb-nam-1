#include <stdio.h>
union diemrieng{
struct {
int diemhat;
int diemmua;
}nu;
struct {
int diemtheduc;
int diemtin;
}nam;
};
struct sinhvien{
char hoten[20],que[20];
int gioitinh;//nữ:1|nam:2
int tongdiem;
union diemrieng diem;
};
int main(){
int n;
printf("nhap so luong hoc sinh: ");
scanf("%d" ,&n);
struct sinhvien ds[n];
for(int i=0;i<n;i++){
    printf("nhap ho ten: ");
    scanf(" %[^\n]s" ,ds[i].hoten);
    printf("nhap que:");
    scanf(" %[^\n]s" ,ds[i].que);
    printf("nhap gioi tinh (nu:1|nam2):");
    scanf("%d" ,&ds[i].gioitinh);
    if(ds[i].gioitinh==1){
        printf("nhap diem rieng:");
        scanf("%d %d" ,&ds[i].diem.nu.diemhat ,&ds[i].diem.nu.diemmua);
        ds[i].tongdiem=ds[i].diem.nu.diemhat+ds[i].diem.nu.diemmua;
    }
    else if(ds[i].gioitinh==2){
         printf("nhap diem rieng:");
        scanf("%d %d" ,&ds[i].diem.nam.diemtheduc ,&ds[i].diem.nam.diemtin);
        ds[i].tongdiem=ds[i].diem.nam.diemtheduc+ds[i].diem.nam.diemtin;
    }
}
printf("             danh sach hoc sinh nu\n");
printf("%-20s %-20s %-20s %-20s %-20s %-20s\n","stt","ho ten","que","diem hat","diem mua","tong");
int sttnu=1;
for(int i=0;i<n;i++){
    if(ds[i].gioitinh==1){
        printf("%-20d %-20s %-20s %-20d %-20d %-20d"
               ,sttnu++ ,ds[i].hoten ,ds[i].que ,ds[i].diem.nu.diemhat ,ds[i].diem.nu.diemmua ,ds[i].tongdiem);

    }
}
printf("             danh sach hoc sinh nam\n");
printf("%-20s %-20s %-20s %-20s %-20s %-20s\n","stt","ho ten","que","diem the duc","diem tin","tong");
int sttnam=1;
for(int i=0;i<n;i++){
    if(ds[i].gioitinh==2){
        printf("%-20d %-20s %-20s %-20d %-20d %-20d"
               ,sttnam++ ,ds[i].hoten ,ds[i].que ,ds[i].diem.nam.diemtheduc ,ds[i].diem.nam.diemtin ,ds[i].tongdiem);

    }

}
return 0;
}
