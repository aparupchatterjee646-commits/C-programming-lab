//1+2+4+7+11... upto n terms.W.c.p to calculate the sum of the given series
#include <stdio.h>

int main()
{
    int n, i = 1, term = 1, diff = 1, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + term;
        term = term + diff;
        diff++;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}
