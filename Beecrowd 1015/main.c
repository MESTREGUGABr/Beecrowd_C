#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,x2,y,y2;
    float dist;
    scanf("%f %f",&x,&y);
    scanf("%f %f",&x2,&y2);
    dist = sqrt(pow(x2-x,2)+pow(y2-y,2));
    printf("%.4lf\n",dist);

}
