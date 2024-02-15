#include <stdio.h>
#include <math.h>
//swap 2 bits in a number

int main(){
    int x=10;
    int p1=1;
    int p2=2;
    int r=0;
    int t1=pow(2,p1);
    int t2=pow(2,p2);
    if((x&t1) && (x&t2)){
        r=x;
    }
    printf("%d",r);
}