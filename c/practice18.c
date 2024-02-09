#include <stdio.h>
//find sum of all digits
int main(){
    int x;
    scanf("%d",&x);
    int c=0;
    while(x>0){
        c+=x%10;
        x/=10;
    }
    printf("%d",c);
}