#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("altura: ");
    }
    while (n<1 || n>8);
    for (int alt = 0; alt < n; alt++)
    {
        for (int lin = n-1; lin >=0; lin--)
        {
            if (lin<= alt)
            printf("#");
            else
            printf(" ");
        }
        printf("\n");
     }
}