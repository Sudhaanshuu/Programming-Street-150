#include<STDIO.H>
void printpattern(int r){
    for (int i = 1; i <= r; i++)
    {
      for (int j = 1; j <= r-i; j++)
      {
        printf(" ");
      }
      for (int k = 1; k <=2*i-1 ; k++)
      {
        printf("*");
      }
      printf("\n");
      
    }
    
}
int main(int argc, char const *argv[])
{
    printpattern(5);
    return 0;
}
