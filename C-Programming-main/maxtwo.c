#include<stdio.h>
int maxNumber(int, int);
int main(){
    int a,b;
    printf("enter first numbers");
    scanf("%d",&a);
    printf("enter second numbers");
    scanf("%d",&b);
    int max=maxNumber(a,b);
    printf("maximum number is %d",max); 
    return 0;
}
int maxNumber(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
