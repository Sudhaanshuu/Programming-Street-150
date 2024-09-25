#include <STDIO.H>
int sugcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
       return sugcd(b, a % b);
    }
}

int sulcm(int a, int b)
{
    return (a * b) / (sugcd(a, b));
}
int main()
{
    int a = 12, b = 15;

    printf("%d ", sugcd(a, b));
    printf("%d ", sulcm(a, b));

    return 0;
}
