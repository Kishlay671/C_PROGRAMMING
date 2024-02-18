#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);
    printf("Enter value of d : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("a is Greatest");
    }
    if (b > a && b > c && b > d)
    {
        printf("b is Greatest");
    }
    if (c > a && c > b && c > d)
    {
        printf("c is Greatest");
    }
    if (d > a && d > b && d > c)
    {
        printf("d is Greatest");
    }
    return 0;
}