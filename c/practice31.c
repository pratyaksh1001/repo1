#include <stdio.h>
//count number of digits of any number
int main(){
    int n;
    scanf("%d",&n);
    int c=0;
    while(n>0){
        n/=10;
        c++;
    }
    printf("%d",c);
}