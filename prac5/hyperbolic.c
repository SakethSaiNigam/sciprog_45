#include <stdio.h>
#include <math.h>


double at1(const double q,const double w);

double at2(const double e);

void main() 
{
    double d,r;
    printf("enter the precision for Maclaurin series: \n");
    scanf("%lf", &d);
    
    int length = 1000;
    double t1[length];
    double t2[length];
    
    int u =0;
    r = -0.9;
    while(r<=0.9 && u<length)
    {
        t1[u] = at1(r,d);
        t2[u] = at2(r);
        printf("The difference at r = %lf between them is %.10lf\n",r,fabs(t1[u]-t2[u]));
        u++;
        r = r +0.1;
    }
}

double at1(const double q,const double w)
{
    double at = 0;
    double el,vl;
    int f = 0;
    do{
        vl = 2*f+1;
        el = pow(q,vl)/vl;
        at += el;
        f++;
    } while(fabs(el)>=w);
    return at;
}

double at2(const double e)
{
    return (log(1+e)-log(1-e)/2);
}