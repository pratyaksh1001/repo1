#include <stdio.h>
//1st and last digit of a number
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    while(n>9){
        n/=10;
    }
    printf("first digit is: %d\n",t%10);
    printf("last digit is: %d\n",n);
}