#include <stdio.h>

int factorial(int n)
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }
    
    return f;
}

int main()
{
    int num;
    printf("numero: ");
    scanf("%d", &num);
    printf("factorial: %d", factorial(num));

    return 0;
}