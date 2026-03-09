#include<stdio.h>
void printable(int n);
int main(){
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
    printable(n);
    return 0;
}
   void printable(int n) {
for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    }
