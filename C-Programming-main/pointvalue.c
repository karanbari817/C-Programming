#include<stdio.h>
int main(){
    int a=10,*p,**q,***r;
p=&a;
q=&p;
r=&q;
printf("%d%d%d%d\n",a,*p,**q,***r);
return 0;
}