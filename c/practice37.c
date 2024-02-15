#include <stdio.h>
//product of all digits
int main(){
    int x;
    int r=1;
    scanf("%d",&x);
    while(x>0){
        r*=x%10;
        x/=10;
    }
    printf("%d",r);
}