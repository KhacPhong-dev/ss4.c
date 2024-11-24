#include <stdio.h>
int main(){
    int Number;
    printf("nhap so nguyen ban muon kiem tra");
    scanf("%d",&Number);
    if(Number>=0){
        printf("%d la so Duong",Number);
    }else{
        printf("%d la so am",Number);
    }


}