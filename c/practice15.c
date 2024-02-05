#include <stdio.h>
#include <math.h>
int main(){
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    int y;
    printf("enter the bit that you want to change: ");
    scanf("%d",&y);
    int r=(pow(2,y));
    x=x|r;
    printf("%d",x);
}     