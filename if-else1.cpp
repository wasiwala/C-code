#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char i;
    scanf(" %c",&i);
    if (i>=41 && i<=90)
    {
        printf("i=char=%d\n",i);
    }
    else if (i>=0 && i<=9)
    {
        printf("i=int=%d\n",i);
    }
    return 0;
}