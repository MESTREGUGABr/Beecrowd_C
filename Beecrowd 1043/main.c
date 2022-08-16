#include <stdio.h>

int main(){
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);

    if (x<y+z&&y<x+z&&z<x+y){
        printf("Perimetro = %.1f\n",x+y+z);
    }else{
        printf("Area = %.1f\n",z*(x+y)/2);
    }
    return 0;

}
