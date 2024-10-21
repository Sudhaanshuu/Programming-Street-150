#include <STDIO.H>
int findDay(int a)
{
    int sum = 0, share, like;
    sum = (5 / 2);
    like = sum - (sum + 1);
    for (int i = 1; i <= a; i++)
    {
        sum = (sum) * 3;
        like = sum - (sum + 1);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int day;
    scanf("%d", &day);
    printf("%d", findDay(day));
    return 0;
}
