#include <stdio.h>
int main(){
float bankinh,chuvi,dientich;
float pi=3.14;
printf("nhap ban kinh: ");
scanf("%f" ,&bankinh);
chuvi=2*pi*bankinh;
dientich=pi*bankinh*bankinh;
printf("chu vi la:%.2f\n" ,chuvi);
printf("dien tich la:%.2f" ,dientich);
return 0;
}
