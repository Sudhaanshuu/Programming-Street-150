#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int su[5] = {4, 7, 1, 8, 5};
    int s = 9, l = 1;
    int len = sizeof(su) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        if (su[i] < s)
        {
            s = su[i];
        }
        if (su[i] > l)
        {
            l = su[i];
        }
    }
    printf("%d %d ", s, l);

    return 0;
}
