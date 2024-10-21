#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int num = 34567;
    int sum=0;
    while (num > 0)
    {
        sum+=num%10;
        num/=10;
    }
    printf("%d",sum);

    return 0;
}
