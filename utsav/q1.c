#include <stdio.h>

int main()
{
    int N, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if (N < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {

        int i = 1;
        do
        {
            factorial *= i;
            i++;
        } while (i <= N);

        printf("Factorial of %d is %d\n", N, factorial);
    }

    return 0;
}