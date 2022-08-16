#include <stdio.h>
#include <stdlib.h>

int segundosParaHoras (int segundos){
return segundos/3600;
}

int segundosParaMinutos (int segundos) {
return (segundos%3600)/60;
}

int segundos (int segundos){
return segundos % 60;
}
int main()
{
   int n;
   scanf("%d", &n);
   printf("%d:%d:%d", segundosParaHoras(n), segundosParaMinutos(n), segundos(n));
}
