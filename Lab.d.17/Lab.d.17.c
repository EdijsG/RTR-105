naop   GNU nano 4.8                                                                                    17.Nodarbība.c                                                                                              
#include<stdio.h>
#include<math.h>

long double mans_cos(long double x){
long double a,s,r;
int  k=0;


a = pow(-1,k)*pow(x,2*k)/(1.);
s = a;
//printf("Piešķirt vērtību x (veselos skaitļos)");
//printf ("%.3f\t%8.3f\t%8.3f\n",x,a,s);

while(k<500){
k++;
r = ((-1)*x*x) / (pow(2,2)*(2*k-1)*(2*k));
a = a*r;
s = s+a;
//printf("%8.3f\t%8.3f\t%8.3f\n",x,a,s);

if(k == 5){
printf("\na0 = %10.3Le\t s0 = %10.3Le\n",a,s);
        }
if(k == 10){
printf("a10 = %10.3Le\t s10 = %10.3Le\n",a,s);
        }
if(k == 50){
printf("a50 = %10.3Le\t s50 = %10.3Le\n",a,s);
        }
if(k == 100){
printf("a100 = %10.3Le\t s100 = %10.3Le\n",a,s);
        }
if(k == 500){
printf("a500 = %10.3Le\t s500 = %10.3Le\n",a,s);
                }
        }
return s;
}

void main(){
double x,y,yy;

printf("\n\n\n\n\n\n\nCos aprēķināšana;\nIevadi argumentu x:");
scanf("%lf",&x);


y = cos(x/2);
printf("standarta finkcija cos y = cos(%3f) = %3f\n",x,y);

yy = mans_cos(x);
//printf("lietotāja funkcija  y = cos(%3.f) = %.3f\n",x,yy);

//printf("sin(%8.3f) = %.3f",x,yy);
printf("Cos (%.3f) = %.3f \n",x,yy);


printf("\n                  5000                        \n");
printf("                    ____                        \n");
printf("                    \\       k   2*k            \n");
printf("                     \\  (-1) * x               \n");
printf(" cos(%.3f)       =    > ______________          \n",x);
printf("                     /             2*k          \n");
printf("                    /___ (2*k)! * 2             \n");
printf("                     k=0                        \n");
printf("                                                \n");

printf("                                     2                  \n");
printf("                                   -x                   \n");
printf(" Rekurences reizinātātājs: ___________________          \n");
printf("                            2                           \n");
printf("                           2 * (2*k-1) * (2*k)          \n\n\n");


}

