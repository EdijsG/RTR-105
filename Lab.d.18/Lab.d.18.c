include<stdio.h>
#include<math.h>

//double f(double x){

//      return cos(x/2);

        float  mf(float x, float A){
                return cos(x/2) - A;
                }

        int k=0;


int main(){

        float a, x, A, b=x*M_PI /*pi <math.h> constante*/, delta_x=1.e-3/*0.001*/, funka, funkb, funkx;


                printf("\t\t Dihadomijas metode cos(x/2)\n\t\t Lai veiktu aprēķinus ar doto formulu nepieciešams definēt robežas starp punktiem a un b\n\t D>
                scanf("%f",&a);
                printf("\t Definēt punktu: b");
                scanf("%f",&b);
                printf("\t Definēt vērtību: x");
                scanf("%f",&x);
                printf("\t Definēt: delta_x");
                scanf("%f",&delta_x);

        funka = mf(a, A); funkb = mf(b, A); funkx = mf(x, A);// vai pareizi tiek rēķināt dotā funkcija cos(x/2)??

                if(funka * funkb > 0){  //Ja zīme ir + pāra sakņu skaits vai sakņu nav
                printf("Intervālā [%.2f;%.2f] cos(x/2) funkcijai\n",a,b);
                printf("Sakes nav (vai tajā ir pāra skaita saknes)\n");

                return 1;
                }

        printf("                cos(%7.3f) = %7.3f\t\t\t\t",a,mf(a, A));
        printf("cos(%7.3f)=%7.3f\n",b,mf(b, A));

                while( (b-a) > delta_x ){ /*Ja ir zīmes maiņa (nepāra skaita saknes,) [b-a] = intervāla gaums = ar funkciju x=(a+b)/2 = fukcija (x/2)*/

                        k++; // Samazina Intervālu b-a > detla X uz PUSI kamēr b-a < delt X (funkca = atupveni +0 funkcb =aptuveni -0 )
                        x = (a+b)/2;

                                if(funka * mf (x, A) > 0){ //pie a=0 -> funkca=0 -> reizinājums ir precīzi 0 visu laiku -> visu laiku "reķina" b=x
                                        a = x; //ja zīme mainās (nav pozetīva -x*+x = -... )
                                        }
                                        else{
                                                b = x; //ja zīme mainās (nav pozetīva +x*-x = -...)
                                                printf("%2d. iterācija: cos(%7.3f)=%7.3fl\t\n",k,a,mf);
                                                printf("cos(%7.3f)=%7.3fl\t\n",x,mf);
                                                printf("cos(%7.3f)=%7.3fl\n",b,mf);
                                                }
                        }

        printf("Sakne atrodas pie x=%.3f,jo cos(x/2) ir %.3fl\n",x,mf);

        return 0;
        }
