#include <STDIO.H>
int cDig(int a);
int main(int argc, char const *argv[])
{
    // printf("Number ");
    int num;
    scanf("%d", &num);
    printf("%d", cDig(num));
    return 0;
}

int cDig(int a)
{
    int s = 0;
    while (a > 0)
    {
        s++;
        a /= 10;
    }
    return s;
}