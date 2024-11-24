#include <stdio.h>
int main(){
    int a,b,c;
    printf("nhap 3 canh cua tam giac");
    scanf("%d %d %d",&a,&b,&c);
    if(b<=a+c){
        printf("%d %d %d la 3 canh cua tam giac",a,b,c);
    }else{
        printf("%d %d %d khong la 3 canh cua tam giac",a,b,c);
    }
}