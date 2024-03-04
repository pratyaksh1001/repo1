#include <stdio.h>
int main(){
    int l;
    float b;
    scanf("%d%f",&l,&b);
    if(l==1){
        b+=1500;
    }
    else if(l==2){
        b+=950;
    }
    else if(l==3){
        b+=600;
    }
    else if(l==4){
        b+=250;
    }
    printf("%f",b);
}