#include <stdio.h>
#include <math.h>

void main() 
{
    int N=12,i;
    float a =0.0,bd=60.0;
    float br,c,brn;
    
    br = (M_PI * bd)/180.0;
    
    c = tan(a)+tan(br);
    
    for(i=5;i<60;i=i+5)
    {
        c = c+2*tan((M_PI*i)/180.0);
    }
    
    brn =(M_PI * (bd/(2*N)))/180.0;
    c = c * brn;
    printf("Approximate = %f\n",c);
    printf("Exact= %f",log(2.0));
}
