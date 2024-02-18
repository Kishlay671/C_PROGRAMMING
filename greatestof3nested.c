#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest", a);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }
    else
    {
        if (c > b)
        {
            printf("%d is greatest", c);
        }
        else
        {
            printf("%d is greatest", b);
        }
    }
    return 0;
}