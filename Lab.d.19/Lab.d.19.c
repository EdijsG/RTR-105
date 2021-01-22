  GNU nano 4.8                                                                                                                      19.Nodarbība.c                                                                                                                                 
#include<stdio.h>
#include<math.h>
#define N 100           /*Masīvs N = punktu skaits kuros tiks rēķināta dotā funkcija cos(x/2) */

double f(double x){     /*Dotā funkcija cos(x/2)*/
        return cos(x/2);
}

double fp(double x){    /*Pirmās kārtas atvasinājums funkcijai cos(x/2)'*/
        return -sin(x/2);1/2;
}

double fpp(double x){   /*Ortrās kārtas atvasinājums funkcijai cos(x/2)''*/
        return -1/4;cos(x/2);
}



int main(){
        double x[N], y[N], yp[N-1], ypp[N-2], a/*a = Robežas sākum punkts*/ /*b = Robežas beigu punkts */ /*x = kordināte kurā tiek rēķināta formula*/, delta_x;/*delta_x = punkts ar kuru pārvietojas x asī*/
        int i;/*conter = kutā darbība*/

                printf("Lai parēķinātu cos(x/2) prim1, prom2. Izmantojot diffrencēšanas formulu\n");
                printf("Piešķirt vērtību robežas sākumpunktu a :");
                scanf("%lf/*double datu tips*/", &a);
//              printf("Piešķirt vērtību robežas beigupunktam b :");
//              scanf("%lf/*double datu tips*/", &b);
                printf("Norādiet mainīgo ar kurnu tiks palielināta x vērtība  ");
                scanf("%lf/*double datu tips*/", &delta_x);


        for(int i=0; i<N; i++/*+1 Nepieciešams lai virzītos uz nākamo koordinātes punktu*/){
                x[i] = a + i * delta_x; /*Aprēķina argumentu*/
                y[i] = f(x[i]); /*Aprēķina un piešķir jaunās funkcijas vērtību nākamajā argumentā */
                }

        for(int i=0; i<N-1/*-1 Lai nepārsniegtu dotos robež punktus*/; i++){/*Atvasinājuma masīva aprēķināšana*/
                yp[i] = (y[i+1]-y[i]) / (x[i+1]-x[i]);
                }

        for(int i=0; i<N-2; i++){
                ypp[i] = (yp[i+1]-y[i]) / (x[i+1]-x[i]);/*<-Argumenta pieaugums*/
                }

        for(i=0; i<N-2; i++){
                printf("    x     ||    f(x)   ||    f'(x)    ||   f'(x)  ||    f''(x)   | f''(x)    \n");
                printf("          ||           || Analytical  || Finite   ||  Analytical | Finite    \n");
                printf("__________||___________||_____________||__________||_____________|___________\n");
                printf("%10.3lf   ||%10.3lf     ||%10.3lf     ||%10.3lf   ||%10.3lf      |%10.3lf     \n",x[i], y[i], fp(x[i]), yp[i], fpp(x[i]), ypp[i]);
                }
        }



/*fpirintf = */



/*
printf("  x  ||    f(x)  ||    f'(x)     ||  f'(x)  ||    f''(x)   | f''(x)    ");
printf("     ||          || Analytical   || Finite  ||  Analytical | Finite    ");
printf("_____||__________||______________||_________||_____________|___________");
printf("     ||          ||              ||         ||             |            ");
*/

