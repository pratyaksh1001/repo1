#include <stdio.h>
//find if a number is power of 2 or not
int main(){
    int x=8;
    int c=0;
    while(x!=0){
        x=x>>1;
        if(x&1){
            c++;
        }
    }
    if(c==1){
        printf("the number is power of 2");
    }
    else{
        printf("number is not power of 2");
    }
}