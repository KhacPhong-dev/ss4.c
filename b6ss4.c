#include <stdio.h>
int main(){
    int a, b;
    printf("nhap so dien thang truoc");
    scanf("%d",&a);
    printf("nhap so dien thang nay");
    scanf("%d",&b);
    int i;
    i= b-a;
    if(i<50){
        printf("so tien can dong la 10000d");
    }else if(i<100){
        printf("so tien can dong la 15000d");
    }else if(i<150){
        printf("so tien can dong la 20000d");
    }else if(i<200){
        printf("so tien can dong la 25000d");
    }else{
        printf("so tien can dong la 30000d");
    }
}