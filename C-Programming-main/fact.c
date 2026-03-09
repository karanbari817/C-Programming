/*#include<stdio.h>
int fact(int);
int main(){
int n,ans;
printf("enter a positive number");
scanf("%d",&n);
ans=fact(n);
printf("factorial of %d is %d",n,ans);
return 0;
}
int fact(int n){
    if(n>0){
    return n*fact (n-1);
    }else
    {
    return +1;
    }
}
 */


 #include<stdio.h>
int main(){
    int factorial=1,n,i;
    printf("enter a positive number");
    scanf("%d",&n);     
    for(i=1;i<=n;i++){
        factorial=factorial*i; 
    }
    {
    printf("factorial of %d is %d",n,factorial);
    } 
        return factorial;

    }
