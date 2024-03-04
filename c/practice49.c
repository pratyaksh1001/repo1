#include <stdio.h>
int sum(){
    printf("enter the numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d is the result\n",a+b);
}

int multi(){
    printf("enter the numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d is the result\n",a*b);
}

int devide(){
    printf("enter the numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d is the result\n",a/b);
}

int sub(){
    printf("enter the numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d is the result\n",a-b);
}

int main(){

    int func1(){
        printf("executed succesfully\n");
    }

    printf("in main\n");
    while(1){
        int x;
        scanf("%d",&x);
        if(x==1){
            sum();
        }
        else if(x==2){
            sub();
        }
        else if(x==3){
            multi();
        }
        else if(x==4){
            devide();
        }
        else{
            printf("exiting the loop\n");
            func1();
            break;
        }
    }
    
}