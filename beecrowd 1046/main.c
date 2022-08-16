#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,f,t;
    scanf("%d %d", &i,&f);
    if (i>f){
    printf("O JOGO DUROU %d HORA(S)\n", 24 - (i-f));
    } else if (f>i){
    printf("O JOGO DUROU %d HORA(S)\n", f-i);
    } else {
    printf("O JOGO DUROU 24 HORA(S)\n", t);
    }
}
