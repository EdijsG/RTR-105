#include<stdio.h>
#include<math.h>

void main(){
        float a,/*Robežas sākuma punkts*/ b,/*Robežas noslēguma punkts*/ eps, h,/*????*/ /*Precizitātes līmenis kas nosaka taisnsturau platumu x asī*/ integr1,/**/ integr2/**/;
        int k,n=2;/*Mainīgais kurš norāda cik taisnstūri tiks izmantoti (Programmu uzsākot, tiek defeinēti 2 taisnstūri)*/ 

         printf("Lai aprēķinātu cos(x/2) integr1, integr2. Izmantojot");
         printf("Piešķirt vērtību robežas sākumpunktu a :");
         scanf("%f/*double datu tips*/", &a);
         printf("Piešķirt vērtību robežas beigupunktam b :");
         scanf("%f/*double datu tips*/", &b);
         printf("Norādiet mainīgo ar kurnu tiks palielināta x vērtība  ");
         scanf("%f/*double datu tips*/", &eps); //lielāka precizitāte ja piešķir mazāku vērtību

        integr2=(b-a)*(cos(a)+cos(b))/n; /*Laukums (starp f(x) unxass) vērtību (aprēķins izmantojot taisnstūru metodi)*/
                while(fabs(integr2-integr1)>eps){
                n*=2;
                h=(b-a)/n;
                integr1=integr2;
                        for(k=0; k<n; k++)
                                integr2+=h*cos(a+(k+0.5)*h);
                        }

        printf("Integrāllja vērtība : %2f\n",integr2);
        }
