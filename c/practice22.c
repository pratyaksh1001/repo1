#include <stdio.h>
//WAP to find the difference between minimum and maximum occured number

int main(){
    int x;
    scanf("%d",&x);
    int t=x;
    int c1=100000;
    int c2=0;
    while(x>0){
        int g=x%10; 
        int h=t;
        int m=0;
        while(h>0){
            if(h%10==g){
                m++;
            }
            h/=10;
        }
        if(m<c1){
            c1=m;
        }
        if(m>c2){
            c2=m;
        }
        g/=10;
        x/=10;
    }
    printf("%d",c2-c1);
}