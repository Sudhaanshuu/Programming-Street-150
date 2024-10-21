#include <stdio.h>
void smallestLargest(int suku[], int size)
{
    int s = suku[0], l = suku[0];
    for (int i = 0; i < size; i++)
    {
        if (suku[i] > l)
        {
            l = suku[i];
        }
        if (suku[i] < s)
        {
            s = suku[i];
        }
    }
    // printf("Smallest element %dand largest elemet %d",s,l);
    printf("%d %d", s, l);
}
int main()
{
    int size;
    scanf("%d", &size);

    int suku[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &suku[i]);
    }
    smallestLargest(suku, size);

    return 0;
}
