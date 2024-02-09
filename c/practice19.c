#include <stdio.h>
//WAP to count number of even and odd digits in a number

int main(){
    int y;
    scanf("%d",&y);
    int even=0;
    int odd=0;
    while(y>0){
        int x=y%10;
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
        y/=10;
    }
    printf("even: %d\n",even);
    printf("odd: %d",odd);
}