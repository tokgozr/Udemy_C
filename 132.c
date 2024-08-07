#include <stdio.h>
#include <stdlib.h>
// girilen sayının tek çift olduğunu fonk ile bulan program
int isOddIsEven(int a)
{
    if ( a % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int number;
    int result;
    printf("Please enter a positive integer.\n");
    scanf("%d", &number);
    result = isOddIsEven(number);

    if (result == 1)
        printf("Number is Even.\n");
    else
        printf("Number is Odd.\n");
   return 0;
}
