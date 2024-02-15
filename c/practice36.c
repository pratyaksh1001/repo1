#include <stdio.h>
//sum of digits
int main(){
    int x;
    scanf("%d",&x);
    int r=0;
    while(x>0){
        r+=x%10;
        x/=10;
    }
    printf("%d",r);
}