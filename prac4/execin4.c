#include <stdio.h>
#include <math.h>


float dr(float y)
{
    return M_PI * y / 180; 
}

float tr(float a,float b,int N, float arr[N+1])
{
    float w = arr[0] + arr[N];
    int i=0;
    for(i=1;i<N;i++)
    {
        w+=2*arr[i];
    }
    return (b-a)*(w)/(2*N);
}

void main() 
{
    int N=12,i=0;
    float a =0,b=60;
    float s = (b-a)/N;
    float x[N+1];
    
    for(i=0;i<=N;i++)
    {
        x[i]=tan(dr(s*i));
        printf("Tan[%d]=%f\n",(i),x[i]);
    }
    
    float result = tr(dr(a),dr(b),N,x);
    printf("Approximate AREA(result): %f\n",result);
    printf("Exact result: %f",logf(2));

}