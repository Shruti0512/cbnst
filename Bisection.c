/*Find the real roots of equation x^3-4x-9 by bisection method correct upto 3 decimal places.*/



#include<stdio.h>
#include<conio.h>
double f(double x)
{ 
    return ((x*x*x)-(4*x)-9);
}
double calc(double a,double b)
{
    if(f(a)*f(b)>0)
    {
        printf("root out of bound");
        return 0.0;
    }
    else if(f(a)==0)
    {
        printf("%f",a);
        return 0.0;
    }
    else if(f(b)==0)
    {
        printf("%f",b);
        return 0.0;
    }
    double c=a;
    while((b-a)>=0.001)
    {
        
        c=(a+b)/2.0;
        if(f(c)==0.0)
        {
            break;
        }
        else if(f(c)*f(a)<0)
        {
            b=c;
        }
        else{
            a=c;
        }
    }
    return c;
}
int main()
{   
    double a,b;
    scanf("%f %f",&a,&b);
    double x=calc(a,b);
    printf("%f",x);
    return 0;
}

