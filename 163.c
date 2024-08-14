#include <stdio.h>
#include <stdlib.h>
#define M 10
//dizilerde max min bulma
int main()
{
    int i;
    int max,min;
    int dizi[M];
    printf("Lutfen %d kadar deger giriniz\n",M);
    for(i=0;i<M;i++)
    {
        scanf("%d",&dizi[i]);
    }
    max=min=dizi[0];
    for(i=1;i<M;i++)
    {
        if(dizi[i]>max)
        {
            max = dizi[i];
        }
        if(dizi[i]<min)
        {
            min = dizi[i];
        }
    }
    printf("Max deger : %d \n", max);
    printf("Min deger : %d \n", min);
    return 0;
}
