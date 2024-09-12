#include<STDIO.H>

int main(int argc, char const *argv[])
{
    int suku=1,r=4,bk=1;
    for (int i = 1; i < r||bk<r; i++)
    {
        printf("%d ",suku++);
        if (i%3==0)
        {
           printf("\n");
           bk++;
        }
        
    }
    
    return 0;
}

