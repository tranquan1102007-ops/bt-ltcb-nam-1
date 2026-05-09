#include <stdio.h>
int main(){
int a,b,min;
printf("nhap 2 so ");
scanf("%d %d", &a ,&b);
if(a<b){
    min=a;
}
else{
    min=b;
}
for(int i=1;i<=min;i++){
    if(a%i==0&&b%i==0){
        printf(" %d" ,i);
    }
}
return 0;
}
