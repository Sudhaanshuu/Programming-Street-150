#include <STDIO.H>
int SumOfDigit(int a)
{
    int sum = 0, rev;
    while (a > 0)
    {
        sum = sum * 10 + a % 10;
        a /= 10;
    }
    int finalSum = 0;
    int sumc = sum;
    while (sumc > 0)
    {
        sum = sumc;
        while (sum > 0)
        {
            finalSum += sum % 10;
            sum /= 10;
        }
        sumc /= 10;
    }
    return finalSum;
}
int main(int argc, char const *argv[])
{
    // int num = 582109;
    int num ;
    scanf("%d",&num);
    printf("%d ", SumOfDigit(num));
    return 0;
}
