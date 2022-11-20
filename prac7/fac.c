#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int fac(int n);

int main()
{
    int i ,o ;
    double e, *t;
    
    printf("please enter the required polynomial order: \n");
    if(scanf("%d",&o) != 1)
    {
        printf("Didn't Enter the required polynomial");
        return 1;
    }
    
    t = malloc(o * sizeof(double));
    for(i=0;i<o;i++)
    {
        t[i] = 1.0/(double)fac(i+1);
       printf("Each term for o %d is %1.14lf\n",o,t[i]);
    }
    e=1.0;
for(i=0;i<o;i++)
{
    e = e+t[i];
}
free(t);
printf("\ne is estimated as %.10lf with difference %.10lf\n", e,e-exp(1.0));
return 0;
}


int fac(int n )
{
    if(n<0)
    {
        printf("Error: it should be positive");
        return(-1);
    }
    else if(n==0)
    {
        return 1;
    }
    else{
     return (n*fac(n-1));
    }
}