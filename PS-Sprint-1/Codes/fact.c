#include<STDIO.H>
int calfact(int a){
    int sum=1;
    for (int  i = 2; i <=a; i++)
    {
        sum*=i;
    }
    return sum;
    
}
int main(int argc, char const *argv[])
{

    int num=6;
   printf("%d", calfact(num));
    return 0;

}
