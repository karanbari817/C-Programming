#include<stdio.h>
void swap (int*, int*);
int main(){
    int a=8 , b=9;
    printf("before swapping%d%d",a,b);
    swap(&a,&b);
    printf("after swapping %d%d",a,b);
    return 0; 
}
void swap(int*i,int*j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
    
}