#include <stdio.h>
int main(){
    int Number;
    printf("nhap so nguyen ban muon kiem tra");
    scanf("%d",&Number);
    int i=1;
    for(i = 1;i<=12;i++){
        if(Number==i){
            switch (i%2){
                case 0:
                    if(i>2){
                        printf("thang don n co 30 ngay");
                    } else{
                        printf("thang do co 29 ngay");
                    }
                    break;
                
                default:
                    printf(" thang do co 31 ngay");
                    break;
            }
        }else if( Number>12){
            printf("loi he thong roi");
            break;
        }
    }
}
