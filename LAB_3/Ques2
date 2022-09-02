/*Find the real roots of equation e^-x(3.2sin(x)-0.5cos(x))=0 by bisection method correct upto 4 decimal places.*/


#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 2.71828182846
double f(double x)
{ 
    return (pow(e,-x)*((3.2*sin(x))-0.5*cos(x)));
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
        printf("%lf",a);
        return 0.0;
    }
    else if(f(b)==0)
    {
        printf("%lf",b);
        return 0.0;
    }
    double c=a;
    while((b-a)>=0.0001)
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
    double x=calc(a,b);
    printf("%lf",x);
    return 0;
}

