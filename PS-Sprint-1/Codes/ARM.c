#include <stdio.h>

void arm(int a)
{
    int digit = 0, t = a, b = a, sum = 0;
    while (b > 0)
    {
        digit++;
        b /= 10;
    }

    b = a;
    int p;
    while (b > 0)
    {
        p = 1;
        for (int i = 0; i < digit; i++)
        {
            p *= b % 10;
        }

        sum += p;
        b /= 10;
    }

    if (sum == a)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }
}

int main()
{
    int num = 153;
    arm(num);
    return 0;
}
