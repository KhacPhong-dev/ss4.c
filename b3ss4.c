#include <stdio.h>
int main(){
    int Number;
    printf("nhap so nguyen ban muon kiem tra");
    scanf("%d",&Number);
    if(Number%3==0 && Number%5==0){
        printf("so %d chia het cho ca 3 va 5",Number);    
    }else if(Number %3==0){
        printf("so nay chia het cho 3");
    }else if(Number %5==0){
        printf("so nay chia het cho 5");
    }
}