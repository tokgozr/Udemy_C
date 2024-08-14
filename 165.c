#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
// 10a 10 boyutta matris
int main()
{
    int i,j;
    printf("%4c",'I');
    for(i=1;i<=BOYUT;i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    printf("-------");
    for(i=1;i<=BOYUT;i++)
    {
        printf("----");
    }
    printf("\n");
    for(i=1;i<=BOYUT;i++)
    {
        printf("%4d",i);
        for(j=1;j<=BOYUT;j++)
        {
           printf("%4d",i*j);
        }
        printf("\n");
    }
    return 0;
}
