#include <stdio.h>
int main(){
    int n;
    int c=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",c);
            c++;
        }
        c--;
        printf("\n");
    }
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d ",c);
            c--;
        }
        c++;
        printf("\n");
    }
}