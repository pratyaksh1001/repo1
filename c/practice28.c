#include <stdio.h>
//sum of even numbers till n
int main(){
    int n;
    scanf("%d",&n);
    int i=2;
    int s=0;
    while(i<=n){
        s+=i;
        i+=2;
    }
    printf("%d",s);
}