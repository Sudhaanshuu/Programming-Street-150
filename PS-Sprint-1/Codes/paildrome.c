
/*Identifying Palindromes
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to check if a string or number is a palindrome.
Example:
Input: string = "radar"
Output: Palindrome
Explanation: "radar" reads the same backward as forward.*/
#include <STDIO.H>
void checkPal(int a);
int main(int argc, char const *argv[])
{
    int nuum = 123;
    checkPal(nuum);
    return 0;
}
void checkPal(int a)
{
    int c = a;
    int sum = 0, r;
    while (c > 0)
    {
        sum = sum * 10 + c % 10;
        c /= 10;
    }
    if (sum == a)

    {
        printf("Num is plandrome");
    }
    else
    {
        printf("Not paildrome");
    }
}
