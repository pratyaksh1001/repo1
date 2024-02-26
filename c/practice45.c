#include <stdio.h>
int main(){
    int c=0;
    int f=0;
    for(int i=2;i<=100;i++){
        f=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                f++;
            }
        }
        if(f==0){
            printf("%d is prime\n",i);
            c++;
        }
        if(c==10){
            break;
        }
    }
}