#include <stdio.h>

int main(void)
{
    int pass;
    while (scanf("%d", &pass))
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

// same code with for loop:
#include <stdio.h>

int main(void)
{
    int pass;
    for (; scanf("%d", &pass);)
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

// amra chaile for loop a initialization and increment/decrement faka rakte pari. ar jonno kono error asbee nah

//
