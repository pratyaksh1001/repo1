#include <stdio.h>
//frequency of each number
int main(){
    int x;
    int c;
    int arr[10];
    int t2=x;
    scanf("%d",&x);
    for(int i=0;i<10;i++){
        c=0;
        while(x>0){
            if(i==x%10){
                c++;
            }
            x/=10;
        }
        arr[i]=c;
        x=t2;
    }
    for(int j=0;j<10;j++){
        printf("count of %d is %d\n",j,arr[j]);
    }
}