#include <cs50.h>
#include <stdio.h>

int get_p_int(void);

int main(void)
{
    int x = get_p_int();
    for (int i = 1; i <= x; i++)
    {
        int s = x - i;
       for (int dot = 1; dot <= s; dot++)
       {
        printf(".");
       }

       for (int j = 0; j < i; j++)
       {
        printf("#");
       }

        for (int d = 0; d < 2; d++)
        {
            printf(".");
        }

        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

       printf("\n");
    }
}

int get_p_int(void)
{
    int x;
    do
    {
        x = get_int("Height: ");
    }
    while (x < 1 || x >8);
    return x;
}
