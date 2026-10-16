#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("hi ");
        if (i > 2)
        {
            break;
        }
    }

    return 0;
}
