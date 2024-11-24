#include <stdio.h>

int main() {
    int a, b, c;
    printf("nhap 3 so \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        int d = a;
        a = b;
        b = d;
    }
    if(a>c){
        int d = a;
        a=c;
        c=d;
    }
    if(b>c){
        int d = b;
        b=c;
        c=d;
    }
    printf("tt tu nho toi lon %d,%d,%d",a,b,c);

}