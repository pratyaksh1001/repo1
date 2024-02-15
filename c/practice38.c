#include <stdio.h>
//frequency of each number
int main(){
    int x;
    int c;
    int arr[10];
    int t2=x;
    scanf("%d",&x);
    while(x>0){
        int f=x%10;
        int t=x;
        c=0;
        while(t>0){
            if(f==t%10){
                c++;
            }
            t/=10;
        }
        if(arr[f]<c){
            arr[f]=c;
        }
        x/=10;
    }
    for(int i=0;i<10;i++){
        printf("count of %d = %d\n",i,arr[i]);
    }
}