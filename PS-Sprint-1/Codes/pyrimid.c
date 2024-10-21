#include<STDIO.H>
void printPyramid(int count){
    for (int i = 1; i <= count; i++)
    {
       for (int j = 1; j <= count-i; j++)
       {
        printf(" ");
       }
       for (int k =1 ; k <= 2*i-1; k++)
       {
       printf("*");
       }
       printf("\n");
       
       
    }
    
}
int main(int argc, char const *argv[])
{
    printf("Enter the height ");
    int h;
    scanf("%d",&h);
    printPyramid(h);
    return 0;
}
