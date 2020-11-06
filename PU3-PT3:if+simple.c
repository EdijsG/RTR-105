
#include<stdio.h>

int  sim_g = 0;          // izveleta simblu grupa
char simb_1 = 0;        // Definetasis simbols Nr. 1
char simb_2 = 0;        // Definetasis simbols Nr. 2
char simb_3 = 0;        // Definetasis simbols Nr. 3
int  sec = 0;           //seciba (augosa vai dilstosa).


int allsimbs (){
printf("\n\n\n");
printf("        Ievietojiet simbolus individuali atdalot tos (lai apstiprinatu izvaleto simbolu nospiest - ENTER)\n");
printf("                        simbolu skaits ir limitets Max 3 individuali simboli\n\n\n");
printf("        Definejiet simbolu Nr. 1\n      (Lai apstiprinatu ievietoto simbolu nospiest - ENTER) : ");
scanf("%s",&simb_1);

        if(simb_1 != 0){
        printf("\n\n");
        printf("        Definejiet simbolu Nr. 2\n      (Lai apstiprinatu ievietoto simbolu nospiest - ENTER) : ");
        scanf("%s",&simb_2);
        }
                if(simb_2 != 0){
                printf("\n\n");
                printf("        Definejiet simbolu Nr. 3\n      (Lai apstiprinatu ievietoto simbolu nospiest - ENTER) : ");
                scanf("%s",&simb_3);
                }
                        if(simb_3 != 0){
                        printf("\n\n");
                        printf("        Definetie simboli\n\n Nr. 1 :	%c\n Nr. 2 :	%c\n Nr. 3 :	%c\n", simb_1, simb_2, simb_3);
                        }

return 0;
}//int allsimbs


int main()
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("						Dotos simblu sakartosana augosi vai dilstosi\n\n\n\n\n");
printf("		Izveleties simbolu grupu\n\n\n");
printf("			Ja velaties sakartot simbolus grupu 1. - latinu ALFABETA no A lidz Z\n\n");
printf("			Sadala: (Define simbolu grupu) ievieto : 1\n\n\n\n\n");
printf("			Ja velaties sakartot simbolus grupu 2.- vesali SKAITLI no 0 lidz 9\n\n");
printf("			Sadala: (Define simbolu grupu) ievieto : 2\n\n\n\n\n");
printf("               	Define simblu grupu (lai apstiprinatu izvaleto grupu nospiest - ENTER) : ");


	scanf("%d",&sim_g);
	 if(sim_g == 1){
	printf("\n\n\n\n");
      	 printf("		izveleta grupa - ALFABETA no A lidz Z\n");
	 }

	 if(sim_g == 2){
        printf(" \n\n\n\n");
	 printf("		izveleta grupa - SKAITLI no 0 lidz 9\n");
	 }

	 if(sim_g != 1 && sim_g != 2){
        printf("\n\n\n\n");
	printf("		Neeksistejosa simbolu grupa\n\n\n\n\n");
	}

if(sim_g <= 2){

 allsimbs();

        printf("\n\n\n");
        printf("	Definejiest secibu kada tiks sakartoti simboli ");
        printf("\n\n\n");
        printf(" 		Lai definetos simbolus skartoto DILSTOSI sadala\n \n	Seciba noradi : 1");
        printf("\n\n\n");
        printf(" 		Lai definetos simbolus skartoto AUGOSI sadala\n \n 	Seciba noradi : 2");
	printf("\n\n\n");
        printf("      	        Seciba - (Lai apstiprinatu izveleto secibu nospiest - ENTER) : ");
	scanf("%d",&sec);

if(sec == 1){ //Augosa seciba

	if(simb_1 > simb_2 && simb_1 > simb_3){
		if(simb_3 > simb_2){
			printf("\n");
			printf("Dilstosa seciba\n\n 	%c\n 	%c\n 	%c\n",simb_1, simb_2, simb_3);
		}
		else{
			printf("\n");
			printf("Dilstosa seciba\n\n	%c\n 	%c\n 	%c\n",simb_1, simb_3, simb_2);
		}
	}
	if(simb_2 > simb_1 && simb_2 >simb_3){
		if(simb_3 > simb_1){
			printf("\n");
			printf("Dilstosa seciba\n\n 	%c\n 	%c\n 	%c\n",simb_2, simb_3, simb_1);
		}
		else{
			printf("\n");
			printf("Dilstosa seciba\n\n 	%c\n 	%c\n 	%c\n",simb_2, simb_1, simb_3);
		}
	}
        if(simb_3 > simb_1 && simb_3 > simb_2){
                if(simb_2 > simb_1){
                        printf("\n");
                        printf("Dilstosa seciba\n\n 	%c\n 	%c\n 	%c\n",simb_3, simb_2, simb_1);
                }
                else{
                        printf("\n");
                        printf("Dilstosa seciba\n\n	%c\n 	%c\n 	%c\n",simb_3, simb_1, simb_2);

		}
	}
printf("\n\n\n");
}//if augosa seciba

if(sec == 2){ //Dilstosa seciba

        if(simb_1 < simb_2 && simb_1 < simb_3){
                if(simb_3 < simb_2){
                        printf("\n");
                        printf("Augosa seciba\n\n 	%c\n	 %c\n	 %c\n",simb_1, simb_2, simb_3);
                }
                else{
                        printf("\n");
                        printf("Augosa seciba\n\n 	%c\n	 %c\n	 %c\n",simb_1, simb_3, simb_2);
                }
        }
        if(simb_2 < simb_1 && simb_2 < simb_3){
                if(simb_3 < simb_1){
                        printf("\n");
                        printf("Augosa seciba\n\n 	%c\n 	%c\n	 %c\n",simb_2, simb_3, simb_1);
                }
                else{
                        printf("\n");
                        printf("Augosa seciba\n\n 	%c\n	 %c\n	 %c\n",simb_2, simb_1, simb_3);
                }
        }
        if(simb_3 < simb_1 && simb_3 < simb_2){
                if(simb_2 < simb_1){
                        printf("\n");
                        printf("Augosa seciba\n\n 	%c\n	 %c\n	 %c\n	",simb_3, simb_2, simb_1);
                }
                else{
                        printf("\n");
                        printf("Augosa seciba\n\n	%c\n 	%c\n 	%c\n"	,simb_3, simb_1, simb_2);

                }
        }
}//if dilstosa seciba

}//if noradita kada no dotajam grupam

if(sec != 1 && sec != 2){
	printf("\n");
	printf("\n");
	printf("		Nav noradita Seciba kada sakartor sibolus");
	printf("\n");
	printf("\n");
}
return 0;


}//int main
