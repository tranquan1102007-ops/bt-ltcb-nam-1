#include <stdio.h>
#include <math.h>
int tongluythua(int n){
    int sum=0;
    int temp=n;
    int dem=0;
    while(temp>0){
        temp=temp/10;
        dem++;
    }
    temp=n;
    while(temp>0){
        sum=sum+pow(temp%10, dem);
        temp=temp/10;
    }
    return sum;
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d" ,&n);
    if(tongluythua(n)==n){
        printf("dung");
    }
    else {
        printf("sai");
    }

}

