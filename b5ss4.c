#include <stdio.h>

int main() {
    int a, b, c;
    printf("nhap gia tri cho a,b,c: ");
    scanf("%d %d %d", &a,&b,&c);
    if(c>a){
        int i;
        for(i=a+1;i<c;i++){
            if(i==b){
                printf("%d nam giua %d va %d",b,a,c);
            }else if(b>c || b<a){
                printf("%d khong nam trong %d va %d",b,a,c);
                break;
            }
        }
    }else{
        int i;
        for(i=c+1;i<a;i++){
            if(i==b){
                printf("%d nam giua %d va %d",b,c,a);
            }else if(b>a || b<c){
                printf("%d khong nam trong %d va %d",b,c,a);
                break;
            }
        }


    }
}
