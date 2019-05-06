#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int i,j;
  i=1;
  j=getchar();
  printf(":%d/n",j);
  if(j<10)
  {
    j=i+1;
    printf("%d/n",j);
  }
  else
  {
    printf("j=%d/n",j);
  }
  system("pause");
  return 0;
}
