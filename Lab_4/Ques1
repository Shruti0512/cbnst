/* Find the approximate root of the equation x^3-4*x-9 upto 4 decimal places by Regular Falsi Method.*/

#include<stdio.h>
#include<conio.h>
double f(double x)
{
    double v=(x*x*x)-4*x-9;
    return (v);
}
double calc(double a,double b)
{
    double c=a;
    int i=1;
    while((b-a)>=0.0001 && i<8)
    {
        c=a-((double)(b-a)/(f(b)-f(a)))*f(a);
        //cout<<c;
        if(f(c)==0.0)
        {
            break;
        }
        else if(f(a)*f(c)<0)
        {
            b=c;
        }
        else 
        {
            a=c;
        }
        i++;
        //cout<<"hrhr";
    }
    return c;
}
int main()
{
    double ps=f(0);
    double a,b;

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
    //cout<<a<<b<<endl;
    double x=calc(a,b);
   
    printf("%lf",x);
}
