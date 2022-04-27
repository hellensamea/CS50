#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int b = 0;
    int c = 0;
    long number = get_long ("Number: ");
    long numb = number;
    if (numb < 4000000000000)
    {
        printf("INVALID\n");
        return 0;
    }
    while (numb > 0)
    {
        int a = numb % 100;
        numb -= a;
        numb = numb / 100;
        c += a%10;
        a = a / 10;
        a = a*2;
        b += a%10 + a/10;
    }
    if ((c + b)%10 == 0)
    {
        if ((number > 340000000000000 && number < 350000000000000) || (number > 370000000000000 && number < 380000000000000))
            printf("AMEX\n");
        else if (number > 350000000000000 && number < 370000000000000)
          printf("INVALID\n");
        if (number > 5100000000000000 && number < 5600000000000000)
            printf("MASTERCARD\n");
        else if (number > 5600000000000000)
            printf("INVALID\n");
        if ((number > 4000000000000 && number < 5000000000000) || (number > 4000000000000000 && number < 5000000000000000))
            printf ("VISA\n");
    }
    else
            printf("INVALID\n");
    return 0;
}
