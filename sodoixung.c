#include <stdio.h>
#include <math.h>
int sodoixung(int n){
    int somoi;
    int temp=n;
    while(temp>0){
        int dem=1;
        while(temp>0){
            temp=temp/10;
            dem++;
        }
        somoi=somoi+(temp%10)*pow(10, dem-1);
    }
    return somoi;
}
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d" ,&n);
    if(sodoixung(n)==n){
        printf("dung");
    }
    else {
        printf("sai");
    }
    return 0;
}
