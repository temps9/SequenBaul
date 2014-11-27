#include "AdnForme33.h"

// Génère les fichiers c.jo
void genereFichierJo33(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{
    int mesamplifront[16]; //son du n, la référence
    int mesdurerfront[16]; //son du n, la référence
    int mesvarampli[16]; //son du n, la référence
    int mesvardurer[16]; //son du n, la référence
    int madurer; //son du n, la référence
    int maforceh;
    int maforceb;
    int montremolo;
    int maforceplus;
    int macombiendezonememoire;
mesamplifront[0] = quelpiano2;
mesamplifront[1] = quelpiano3;
mesdurerfront[0] = quelpiano4;
mesdurerfront[1] = quelpiano5;
mesvarampli[0] = quelpiano6;
mesvarampli[1] = quelpiano7;
mesvardurer[0] = quelpiano8;
mesvardurer[1] = quelpiano9;
madurer = quelpiano10;
maforceh = quelpiano11;
maforceb = quelpiano12;
montremolo = quelpiano13;
maforceplus = quelpiano14;
macombiendezonememoire = quelpiano15;

  // Nom du fichier jo
  char nomfichierjo[32];
  snprintf(nomfichierjo, 32, "%d.jo", piste);
  // Fichier jo
  FILE* fichierjo;
  if (!(fichierjo = fopen(nomfichierjo, "ab")))
   {
    exit(-1);
   }
// ici commence la zone de travail pour l'apprenant

int tablex[250]= {120, 60, 40, 30, 24, 20, 17, 15, 13, 12, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int calculpossible = tablex[maforceh-1];
double pourmacom = (mesvarampli[0] * 0.01);
double pourmacom1 = (mesvarampli[1] * 0.01);
double pourmacom2 = (mesvardurer[0] * 0.01);
double pourmacom3 = (mesvardurer[1] * 0.01);
double pourmacom4 = (madurer * 0.01);
double pourmacom5 = (maforceplus * 0.01);
double pourmacom6 = (macombiendezonememoire * 0.01);
      for(int i=2; i<16; i++)
       {
        if(i%2)
                {
	mesamplifront[i] = mesamplifront[1];
	mesdurerfront[i] = mesdurerfront[1];
         mesvarampli[i] = mesvarampli[1];
         mesvardurer[i] = mesvardurer[1];	}
        else
                {
	mesamplifront[i] = mesamplifront[0];
	mesdurerfront[i] = mesdurerfront[0];
         mesvarampli[i] = mesvarampli[0];
         mesvardurer[i] = mesvardurer[0];	}
	}
//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  int(calculpossible * pourmacom) ;
         mesamplifront[3] -= int(calculpossible * pourmacom) ;
         mesamplifront[4] +=  int(calculpossible * pourmacom1) ;
         mesamplifront[5] -= int(calculpossible * pourmacom1) ;
         mesamplifront[6] +=  (calculpossible * pourmacom2) ;
         mesamplifront[7] -= int(calculpossible * pourmacom2) ;
         mesamplifront[8] +=  int(calculpossible * pourmacom3) ;
         mesamplifront[9] -= int(calculpossible * pourmacom3) ;
         mesamplifront[10] +=  int(calculpossible * pourmacom4) ;
         mesamplifront[11] -= int(calculpossible * pourmacom4) ;
         mesamplifront[12] +=  int(calculpossible * pourmacom5) ;
         mesamplifront[13] -= int(calculpossible * pourmacom5) ;
         mesamplifront[14] +=  int(calculpossible * pourmacom6) ;
         mesamplifront[15] -= int(calculpossible * pourmacom6) ;
	
	 // respect des limites
      for(int i=0; i<16; i++)
       {
	if(mesamplifront[i]>249)
	mesamplifront[i] = 249;

	if(mesamplifront[i]<6)
	mesamplifront[i] = 6;	


	}

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}
      for(int i=2; i<16; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i-1]);

	}

     }
//plateau tremolo mariage

int basculeDe1 = montremolo * 2;
int basculeDe2 = basculeDe1 - 1;
int basculeDe3 = basculeDe1 * 2 - 1;
int basculeDe5 = 0;

    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {

if(basculeDe5<basculeDe1)
{
      for(int i=0; i<16; i++)
       {


        if(i%2)
         mesamplifront[i] += mesvarampli[i];
        else
         mesamplifront[i] -= mesvarampli[i];

	mesdurerfront[i] += mesvarampli[i];


	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	}
}

if(basculeDe5>basculeDe2)
{
      for(int i=0; i<16; i++)
       {


        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

	mesdurerfront[i] -= mesvarampli[i];


	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	

	}

}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}
      for(int i=2; i<16; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i-1]);

	}


     }
//descend

    for(int laforcebbase = maforceh-1; laforcebbase > 0; laforcebbase--)
     {
         mesamplifront[0] -= calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] -=  int(calculpossible * pourmacom) ;
         mesamplifront[3] += int(calculpossible * pourmacom) ;
         mesamplifront[4] -=  int(calculpossible * pourmacom1) ;
         mesamplifront[5] += int(calculpossible * pourmacom1) ;
         mesamplifront[6] -=  int(calculpossible * pourmacom2) ;
         mesamplifront[7] += int(calculpossible * pourmacom2) ;
         mesamplifront[8] -=  int(calculpossible * pourmacom3) ;
         mesamplifront[9] += int(calculpossible * pourmacom3) ;
         mesamplifront[10] -=  int(calculpossible * pourmacom4) ;
         mesamplifront[11] += int(calculpossible * pourmacom4) ;
         mesamplifront[12] -=  int(calculpossible * pourmacom5) ;
         mesamplifront[13] += int(calculpossible * pourmacom5) ;
         mesamplifront[14] -=  int(calculpossible * pourmacom6) ;
         mesamplifront[15] += int(calculpossible * pourmacom6) ;

	
	 // respect des limites
      for(int i=0; i<16; i++)
       {
	if(mesamplifront[i]>249)
	mesamplifront[i] = 249;

	if(mesamplifront[i]<6)
	mesamplifront[i] = 6;	


	}

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}
      for(int i=2; i<16; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i-1]);

	}

     }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
