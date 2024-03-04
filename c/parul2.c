#include<stdio.h>
int main(){
    int c;
    int m;
    float r=100;
    scanf("%d %d",&c,&m);
    while(c>0){
        if(c<=50){
            r+=0;
        }
        else if(c>50 && c<=100){
            r+=0.80;
        }
        else if(c>100 && c<=200){
            r+=0.50;
        }
        else if(c>200){
            r+=0.10;
        }
    c--;
    }
    while(m>0){
        if(m<=100){
            r+=0;
        }
        else if(m>100){
            r+=0.50;
        }
        m--;
    }
    r+=(r/10);
    printf("%0.2f",r);
    
}