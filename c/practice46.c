#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d ",i);
        }
        printf("\n");
    }
}