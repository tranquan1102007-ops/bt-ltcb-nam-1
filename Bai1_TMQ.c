#include <stdio.h>
int main(){
float bankinh,chuvi,dientich;
float pi=3.14;
printf("nhap ban kinh hinh tron:");
scanf("%f" ,&bankinh);
chuvi=bankinh*2*pi;
dientich=pi*bankinh*bankinh;
printf("chu vi la: %.2f\n" ,chuvi);
printf("dien tich la: %.2f\n" ,dientich);
return 0;
}
