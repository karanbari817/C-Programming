#include <stdio.h>
int multi(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
int div(int a, int b)
{
    int c;
    c = a / b;
    return c;
}
int main()
{
    int x, y;
    printf("enter the x number");
    scanf("%d", &x);
    printf("enter the y number");
    scanf("%d", &y);
    int z = multi(x, y);
    int k = div(x, y);
    printf("this is multiplication %d\n", z);
    printf("this is division %d\n", k);
    return 0;
}
 