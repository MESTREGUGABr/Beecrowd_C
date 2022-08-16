#include <stdio.h>
#include <stdlib.h>

int main()
{
   int inicio, hora1, minuto1, segundos1;
   int fim, hora2, minuto2, segundos2;
   scanf("Dia %d", &inicio);
   scanf("%d : %d : %d\n", &hora1, &minuto1, &segundos1);
   scanf("Dia %d", &fim);
   scanf("%d : %d : %d\n", &hora2, &minuto2, &segundos2);

   segundos1 = segundos2 - segundos1;
   minuto1 = minuto2 - minuto1;
   hora1 = hora2 - hora1;
   inicio = fim - inicio;

if (segundos1 < 0){
 segundos1 += 60;
 minuto1--;
 }
 if (minuto1 < 0){
 minuto1 += 60;
 hora1--;
 }
if (hora1 < 0){
 hora1 += 24;
 inicio--;
 }
printf("%d dia(s)\n", inicio);
 printf("%d hora(s)\n", hora1);
 printf("%d minuto(s)\n", minuto1);
 printf("%d segundo(s)\n", segundos1);
}




