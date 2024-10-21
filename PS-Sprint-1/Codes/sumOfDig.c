#include <STDIO.H>
int sumOfDig(int a);
int main(int argc, char const *argv[])
{
    // printf("Number ");
    int num;
    scanf("%d", &num);
    printf("%d", sumOfDig(num));
    return 0;
}

int sumOfDig(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum+=a%10;
        a /= 10;
    }
    return sum;
}