#include <stdio.h>
int main(){
    int n;
    int c=1;
    scanf("%d",&n);
    //int x=((n-1)*(n-1))-1;
    //printf("%d\n",x);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            //printf("%d ",c);
            c++;
        }
        //printf("\n");
    }
    c--;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d ",c);
            c--;
       }
        printf("\n");
    }
}