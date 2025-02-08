#include <stdio.h>

int main()
{
    float feet, meters;

    printf("Enter the value in feet: ");
    scanf("%f", &feet);

    meters = feet * 0.3048;

    printf("%.2f feet is equal to %.2f meters.\n", feet, meters);

    return 0;
}
