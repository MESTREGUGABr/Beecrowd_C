#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, anos, meses, dias;
    scanf("%d", &n);

  anos = n/365;
  meses = (n%365)/30;
  dias = (n%365)%30;
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos, meses,dias );
}
