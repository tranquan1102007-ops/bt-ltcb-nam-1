#include <stdio.h>
int tinhtongcacchuso(int n){
    int sum=0;
    int temp=n;
    while(temp>0){
        sum=sum+temp%10;
        temp=temp/10;
    }
    return sum;
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d" ,&n);
    if(n%tinhtongcacchuso(n)==0){
        printf("dung");
    }
    else {
        printf("sai");
    }
return 0;
}
