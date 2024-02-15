#include <stdio.h>
//printing even and odd numbers from 1 to 100
int main(){
    int i=2;
    printf("evens: \n");
    while(i<=100){
        printf("%d\n",i);
        i+=2;
    }
    printf("\nodds: \n");
    int j=1;
    while(j<=99){
        printf("%d\n",j);
        j+=2;
    }
}