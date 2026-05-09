#include <stdio.h>
int main(){
int n,a;
printf("nhap so n: ");
scanf("%d" ,&n);
for(int i=1;i=n;i++){
if (n<i*10){
a=(i-1)+(n-((i-1)*10));
}
else if(n>=i*10){
    a=i+(n-(i*10));
}
if(a>=10){
    if((a*a-a)%10==0){
        printf("dung");
    }
    else {
        printf("sai");
    }
}
else {
    if(a==5||a==1){
        printf("dung");
    }
    else {
        printf("sai");
    }
}

return 0;
}


}
