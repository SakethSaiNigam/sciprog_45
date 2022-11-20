#include <stdio.h>
#include <stdlib.h>

void fib(int *a, int *b)
{
    int c;
    c = *a+*b;
    *b = *a;
    *a = c;
}

void main() 
{
    int N=0,i;
    int x1=1,x0=0;
    
    printf("Enter number N: ");
    scanf("%d",&N);
    
    if(N<1)
    {
        printf("Positive number required!....(given is negative number)");
        exit(1);
    }
    
    printf("Fibonacci Series of %d numbers are: \n",N);
    printf("%d, %d, ",x0,x1);
    
    for(i =2;i<=N;i++)
    {
        fib(&x1,&x0);
        printf("%d, ", x1);
        if(((i+1)%10)==0) printf("\n");
    }

}
