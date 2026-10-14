#include <stdio.h>

int main(void)
{
    int X;
    scanf("%d", &X);

    int firstNum = X / 1000;

    if (firstNum % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}

// Jodi first thake degit bat detaaa chai tahole 1000 deya vag jodi 3 sonka [345 / 100] and [3424 /1000]

// 4569 ai khane jodi amader last number dorkar hoi [9] tahole amraa [4569 % 10] tahole [9] pabo ar last 2 dorkar hoila [4569%100]
