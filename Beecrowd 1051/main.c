#include <stdio.h>
#include <stdlib.h>


int main()
{
    float renda, imp;
    scanf("%f", &renda);
    if (renda <= 2000.0){
        printf("Insento\n");
    } else if (renda <= 3000.0){
        imp = ((renda-2000.0)*0.08);
     printf("R$ %.2f\n",imp);
    } else if (renda <= 4500) {
        imp = ((1000.0 * 0.08 +(renda-3000)*0.18));
     printf("R$ %.2f\n", imp);
    } else {
        imp = (1000.0*0.08+1500.0*0.18+(renda-4500.0)*0.28);
        printf("R$ %.2f", imp);
        }

}
