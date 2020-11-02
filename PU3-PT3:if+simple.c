
#include<stdio.h>

int sim_g = 0;          // izveleta simblu grupa
char simb_1 = 0;        // Definetasis simbols Nr. 1
char simb_2 = 0;        // Definetasis simbols Nr. 2
char simb_3 = 0;        // Definetasis simbols Nr. 3

int allsimbs();

int allsimbs (){
printf(" \n");
printf(" \n");
printf(" \n");
printf("        Ievietojiet simbolus individuali atdalot tos (lai apstiprinatu izvaleto simbolu nospiest - ENTER) \n");
printf("                        simbolu skaits ir limitets Max 3 individuali simboli\n");
printf(" \n");
printf(" \n");
printf("        Definejiet simbolu Nr. 1\n      (Lai apstiprinatu ievietoto simbolu nospiest - ENTER) :");
scanf("%s",&simb_1);

        if(simb_1 != 0){
        printf(" \n");
        printf(" \n");
        printf("        Definejiet simbolu Nr. 2\n      (Lai apstiprinatu ievietoto simbolu nospiest - ENTER) :");
        scanf("%s",&simb_2);
        }

                if(simb_2 != 0){
                printf(" \n");
                printf(" \n");
                printf("        Definejiet simbolu Nr. 3\n      (Lai apstiprinatu ievietoto simbolu nospiest - ENTER) :");
                scanf("%s",&simb_3);
                }

                        if(simb_3 != 0){
                        printf(" \n");
                        printf(" \n");
                        printf("        Definetie simboli \n Nr. 1 %c\n Nr. 2 %c\n Nr. 3 %c\n", simb_1, simb_2, simb_3);
                        }

return 0;
}//int allsimbs


int main()
{
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf("			Dotos simblu sakartosana augosi vai dilstosi \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf("				Izveleties simbolu tipu \n");
printf(" \n");
printf(" \n");
printf("-------------------- Ja velaties sakartot simbolus grupu 1. - latinu alfabeta no A lidz Z  ------------------ \n");
printf(" \n");
printf("-------------------------- Sadala: (Define simbolu grupu) ievieto : 1 --------------------------------------- \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf("-------------------- Ja velaties sakartot simbolus grupu 2.- vesali skaitli no 0 lidz 9  -------------------- \n");
printf(" \n");
printf("-------------------------- Sadala: (Define simbolu grupu) ievieto : 2 --------------------------------------- \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");
printf("               	Define simblu grupu (lai apstiprinatu izvaleto grupu nospiest - ENTER) : ");


	scanf("%d",&sim_g);
	 if(sim_g == 1){
	printf(" \n");
	printf(" \n");
	printf(" \n");
	printf(" \n");
      	 printf("                                izveleta grupa - alfabets no A lidz Z\n");
	 }

	 if(sim_g == 2){
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
	 printf("                                izveleta grupa - skaitli no 0 lidz 9\n");
	 }

	 if(sim_g > 2){
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
	printf("					Neeksistejosa simbolu grupa\n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
        printf(" \n");
	}

if(sim_g <= 2){
int allsimbs();



/*
printf("%c",simb_1);
printf(" \n");
printf(" \n");
printf(" \n");
printf("	Ievietojiet simbolus individuali atdalot tos (lai apstiprinatu izvaleto simbolu nospiest - ENTER) \n");
printf(" 			simbolu skaits ir limitets Max 3 individuali simboli\n");
printf(" \n");
printf(" \n");
printf("	Definejiet simbolu Nr. 1\n	(Lai apstiprinatu ievietoto simbolu nospiest - ENTER) :");
scanf("%s",&simb_1);

	if(simb_1 != 0){
	printf(" \n");
	printf(" \n");
	printf("        Definejiet simbolu Nr. 2\n 	(Lai apstiprinatu ievietoto simbolu nospiest - ENTER) :");
        scanf("%s",&simb_2);
	}
		if(simb_2 != 0){
		printf(" \n");
		printf(" \n");
		printf("        Definejiet simbolu Nr. 3\n	(Lai apstiprinatu ievietoto simbolu nospiest - ENTER) :");
        	scanf("%s",&simb_3);
		}
			if(simb_3 != 0){
			printf(" \n");
			printf(" \n");
			printf("	Definetie simboli \n Nr. 1 %c\n Nr. 2 %c\n Nr. 3 %c\n", simb_1, simb_2, simb_3);
			}
*/
}//if noradita kada no dotajam grupam


return 0;


}//int main
