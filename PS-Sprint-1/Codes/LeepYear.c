
#include <STDIO.H>
int checkLeap(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return 1;
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    printf("Enter the Year ");
    int y;
    scanf("%d", &y);
    if (checkLeap(y))
        printf("Its leep");
    else
        printf("Not leep");

    return 0;
}
