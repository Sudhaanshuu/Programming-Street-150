#include <STDIO.H>
int findSumofSum(int a)
{
    int sum = 0, sumofsum = 0, rem;

    while (a > 0)
    {
        rem = a % 10;
        sum = sum + rem;
        sumofsum = sum + sumofsum;
        a /= 10;
    }
    return sumofsum;
}
int main()
{
    int suku;
    scanf("%d", &suku);
    printf("%d", findSumofSum(suku));
    return 0;
}
