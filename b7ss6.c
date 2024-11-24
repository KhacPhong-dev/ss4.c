#include <stdio.h>
int main(){
    int a;
    printf("nam ban muon kiem tra");
    scanf("%d",&a);
    if(a%4==0){
        printf("nam %d la nam nhuan",a);
    }else{
        printf("nam %d la nam thuong",a);
    }
}