#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", N, i, N * i);
    }
    return 0;
}
