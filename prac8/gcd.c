#include<stdio.h>
#include <stdlib.h>

int iterativeGCD(int a,int b);
int recursiveGCD(int a,int b);

int main()
{
    int x,y,ie;
    printf("Enter input 2 positive numbers:\n");
    ie = scanf("%d %d",&x,&y);
    if(ie != 2)
    {
        printf("Please enter 2 positive numbers!");
        return 1;
    }
    if(x<=0 || y<=0)
    {
        printf("These are not positive numbers. Please enter two positive numbers!");
        return 1;
    }
    
    printf("The IterativeGCD(%d,%d) is: %d\n",x,y,iterativeGCD(x,y));
    printf("The RecursiveGCD(%d,%d) is: %d\n",x,y,recursiveGCD(x,y));
    return 0;
}

int iterativeGCD(int a,int b)
{
    int r;
    while(b!=0)
    {
        r = b;
        b = a%b;
        a = r;
    }
    return a;
}

int recursiveGCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return recursiveGCD(b,a%b);
    }
}

