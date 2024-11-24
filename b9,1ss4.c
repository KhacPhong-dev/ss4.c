#include <stdio.h>
int main(){
    int a,b,c;
    printf("nhap so nguyen ban muon kiem tra \n");
    scanf("%d %d %d",&a,&b,&c);
    if(b==2){
        if(c%4==0){
            if(a<=29){
                printf("%d/%d/%d la ngay thang nam hop le",a,b,c);
            }else{
                printf("%d/%d/%d la ngay thang nam khong hop le",a,b,c);
            }
        }else{
            if(a<=28){
                printf("%d/%d/%d la ngay thang nam hop le",a,b,c);
            }else{
                printf("%d/%d/%d la ngay thang nam khong hop le",a,b,c);
            }
        }
    }else if(b==4||b==6||b==9||b==11){
        if(a<=30){
	        printf("%d/%d/%d la ngay thang nam hop le",a,b,c);
	                    
        }else{
	        printf("%d/%d/%d la ngay thang nam khong hop le",a,b,c);
	                    
	    }

    }else if(b>12){
        printf("%d/%d/%d la ngay thang nam khong hop le",a,b,c);
    }else{
        if(a<=31){
	        printf("%d/%d/%d la ngay thang nam hop le",a,b,c);
	                
	    }else{
	        printf("%d/%d/%d la ngay thang nam khong hop le",a,b,c);
        }
    }

}
