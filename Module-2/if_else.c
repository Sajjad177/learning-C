#include <stdio.h>

int main(void)
{
    int money;
    scanf("%d", &money);

    if (money >= 100)
    {
        printf("I am going to eat pizza\n");
        if (money >= 120)
        {
            printf("Also drink cock\n");
        }
        else
        {
            printf("do not drink cock\n");
        }
    }
    else if (money >= 50)
    {
        printf("I am going to eat berger");
    }
    else
    {
        printf("I am coming back home");
    };

    return 0;
}
