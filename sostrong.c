#include <stdio.h>
int tonggiaithua(int n){
    int temp=n;
    int sum=0;
    while(temp>0){
        int giaithua=1;
        for(int i=1;i<=temp%10;i++){
            giaithua=giaithua*i;
        }
        sum=sum+giaithua;
        temp=temp/10;
    }
    return sum;
}
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d" ,&n);
    if(tonggiaithua(n)==n){
        printf("dung");
    }
    else {
        printf("sai");
    }
}
