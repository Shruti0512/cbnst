/*Find the real roots of equation x^2+2x-8=0 by bisection method correct upto two decimal places.*/


#include<stdio.h>
#include<conio.h>
double f(double x)
{ 
    return ((x*x)+(2*x)-8);
}
double calc(double a,double b)
{
   if(f(a)>0 && f(b)>0 || f(a)<0 && f(b)<0)
    {
        printf("root out of bound");
        return 0.0;
    }
    if(f(a)==0)
    {
        printf("a is root %f",a);
        return 0.0;
    }
    else if(f(b)==0)
    {
        printf("b is root %f",b);
        return 0.0;
    }
    double c=a;
    while((b-a)>=0.01)
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
    scanf("%lf %lf",&a,&b);
    printf("%lf %lf",a,b);
    double x=calc(a,b);
    printf("%lf",x);
    return 0;
}

