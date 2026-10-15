#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        if (n == 0)
        {
            printf("0\n");
        }

        while (n != 0)
        {
            printf("%d ", n % 10);
            n /= 10;
        }
        printf("\n");
    }

    return 0;
}
