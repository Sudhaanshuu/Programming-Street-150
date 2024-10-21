#include <STDIO.H>
int main()
{
  char suku[10] = "radar";
  char su[10] = "";
  int i = 0;
  int l = 0;
  while (suku[i] != '\0')
  {
    l++;
    i++;
  }
  int pal = 1;
  for (int i = 0; i < l / 2; i++)
  {
    if (suku[i] != suku[l - i - 1])
    {
      pal = 0;
      break;
    }
  }
  if (pal)
  {
    printf("String is %s Palaindrome ", suku);
  }
  else
  {
    printf("String is %s Not Palaindrome ", suku);
  }

  return 0;
}
