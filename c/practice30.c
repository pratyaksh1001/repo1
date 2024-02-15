#include <stdio.h>
//print table of any number
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=10){
        printf("%d\n",n*i);
        i++;
    }
}