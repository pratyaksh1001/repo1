#include <stdio.h>
//sum of natural numbers till n
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int s=0;
    while(i<=n){
        s+=i;
        i++;
    }
    printf("%d",s);
    
}