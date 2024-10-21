#include<STDIO.H>

int main(int argc, char const *argv[])
{
    char suku[10];
    printf("Enter the string ");
    scanf("%s",&suku);

    char su[10]="";
    int i=0;
    while (suku[i]!='\0')
    {
        i++;
    }
    su[i]='\0';
    int t=0;
    while (t<=i)
    {
        su[t]=suku[i-t-1];
        t++;
    }

    int pal=1;
    for (int k = 0; k < i/2; k++)
    {
       if (suku[k]!=suku[i-k-1])
       {
        pal=0;
        break;
       }
       
    }
    if (pal)
    {
            printf("%s %s is paildrome",su,suku);

    }else{

            printf("%s %s not is paildrome",su,suku);
    }
    
    
    
    return 0;
}
