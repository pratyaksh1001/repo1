#include <stdio.h>
//sum of 1st and last digit
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    int f=t%10;
    while(n>9){
        n/=10;
    }
    printf("the sum of last and first digit is: %d",f+n);
}