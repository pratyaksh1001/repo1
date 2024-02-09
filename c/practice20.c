#include <stdio.h>
//WAP to find the maximum occured number

int main(){
    int x;
    scanf("%d",&x);
    int t=x;
    int c=0;
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
        if(m>c){
            c=m;
        }
        g/=10;
        x/=10;
    }
    printf("%d",c);
}