#include<stdio.h>
#include<conio.h>

#define _CRT_SECURE_NO_WARNINGS
#define ALMOSTZERO 0.0000000000000000001
#define LN10 2.3025850929940456840179914546844

int findRoot(int number){
    int sqrt, temp;
    sqrt = number / 2;
        temp = 0;
        // Iterate until sqrt is different of temp, that is updated on the loop
        while(sqrt != temp){
            // initially 0, is updated with the initial value of 128
            // (on second iteration = 65)
            // and so on
            temp = sqrt;

            // Then, replace values (256 / 128 + 128 ) / 2 = 65
            // (on second iteration 34.46923076923077)
            // and so on
            sqrt = ( number/temp + temp) / 2;
        }
    return sqrt;
}

double exp(double a){
    int ans=1;
    for(int i=0; i<2.71828;i++){
    ans *= a;
    }
    return ans;
}

double ln(double x)
{
    double old_sum = 0.0;
    double xmlxpl = (x - 1) / (x + 1);
    double xmlxpl_2 = xmlxpl * xmlxpl;
    double denom = 1.0;
    double frac = xmlxpl;
    double term = frac;                 // denom start from 1.0
    double sum = term;

    while ( sum != old_sum )
    {
        old_sum = sum;
        denom += 2.0;
        frac *= xmlxpl_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}
double log10( double x ) {
    return ln(x) / LN10;    
}



int main()

{

double a,b,c,d,e,f,g,h,i,j,k,l,m,n,p,r,s,t,u,x1,x2,x3;

int w;

printf("\n a*x^3+b*x^2+c*x+d:\n");

printf("a=");

scanf("%lf", &a);

printf("\nb=");

scanf("%lf", &b);

printf("\nc=");

scanf("%lf", &c);

printf("\nd=");

scanf("%lf", &d);

e=2.7182818284590;

f=((3*c/a)-(b*b/(a*a)))/3; // ** bracketed (a*a)!

g=((2*b*b*b/(a*a*a))-(9*b*c/(a*a))+(27*d/a))/27; // ** brackets!

h=(g*g/4)+(f*f*f/27);

i=findRoot(((g*g/4)-h));

j=exp(log10(i)/log10(e)/3);

k=acos((-1)*(g/(2*i)));

l=j*(-1);

m=cos(k/3);

n=findRoot(3)*sin(k/3);

p=(b/3*a)*(-1);

r=(-1)*(g/2)+findRoot(h);

s=exp(log10(r)/log10(e)/3);

t=(-1)*(g/2)-findRoot(h);

u=exp(log10(t)/log10(e)/3);

if (h>0) w=1;

if (h<=0) w=3;

if ((f==0) && (g==0) && (h==0)) w=2;

switch (w){

case 1:

x1=(s+u)-(b/3*a);

x2=(-1)*(s+u)/2-(b/3*a);

x3=(s-u)*findRoot(3)/2;

printf("\nA 3 pont:\n%lf\n%lf +i*%lf\n%lf -i*%lf", x1, x2, x3, x2, x3);

break;

case 2:

x1=exp(log10(d/a)/log10(e)/3)*(-1);

printf("\n There is a line:\n%lf", x1);

break;

case 3:

x1=2*j*cos(k/3)-(b/3*a);

x2=l*(m+n)+p;

x3=l*(m-n)+p;

printf("\nA 3 Roots:\n%lf\n%lf\n%lf", x1, x2, x3);

break;

}

getch();

}