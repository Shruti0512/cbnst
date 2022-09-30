/* Find the approximate roots of the equation x^3-4x-9=0 correct upto 5 decimal places by Newton-Raphson Method.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
double f(double x)
{
    double v=(x*x*x)-4*x-9;
   // printf("%lf ",v);
    return (v);
}
double fd(double x)
{
    return ((3*x*x)-4);
}
double calc(double x)
{
    double c=x-((double)f(x)/fd(x));
    double d=x-c;
   // printf("%lf ",c);
    while((fabs(d))>0.00001)
    {
        
        //printf("%lf ",x);
        c=x-((double)f(x)/fd(x));
        d=x-c;
        x=c;
        //printf("%lf ",c);
    }
    return c;

}
int main()
{
    double a,b;
    double ps=f(0);
    for(int i=1;i<100;i++)
    {
        if(ps<0 && f(i)>0 || ps>0 && f(i)<0)
        {
            a=i-1;
            b=i;
            break;
        }
        ps=f(i);
    }
    //printf("%lf",a);
    double x=calc(a);
    printf("%lf",x);
}
