#include <STDIO.H>
int findKey(int a, int b, int c)
{
    a /= 1000;
    b /= 100;
    b %= 10;
    int s = 9;
    while (c > 0)
    {
        int p = c % 10;
        if (s > p)
        {
            s = p;
        }
        c /=10;
    }

    // printf("%d %d %d", a, b, c);
    return (a * b) + s;
}
int main(int argc, char const *argv[])
{
    // int a = 3521, b = 2452, c = 1352;
    // int a = 1234, b = 5678, c = 9802;
    int a = 9876, b = 5432, c = 6732;

    printf("Key is %d ", findKey(a, b, c));
    return 0;
}
