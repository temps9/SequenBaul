#include "AdnForme34.h"

// Génère les fichiers c.jo
void genereFichierJo34(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
int variance1 = int(calculpossible * pourmacom);
if (variance1<1)
variance1 = 1;

int variance2 = int(calculpossible * pourmacom1);
if (variance2<1)
variance2 = 1;

int variance3 = int(calculpossible * pourmacom2);
if (variance3<1)
variance3 = 1;

int variance4 = int(calculpossible * pourmacom3);
if (variance4<1)
variance4 = 1;

int variance5 = int(calculpossible * pourmacom4);
if (variance5<1)
variance5 = 1;

int variance6 = int(calculpossible * pourmacom5);
if (variance6<1)
variance6 = 1;

int variance7 = int(calculpossible * pourmacom6);
if (variance7<1)
variance7 = 1;


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
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
         mesamplifront[10] +=  variance5 ;
         mesamplifront[11] -= variance5 ;
         mesamplifront[12] +=  variance6 ;
         mesamplifront[13] -= variance6 ;
         mesamplifront[14] +=  variance7 ;
         mesamplifront[15] -= variance7 ;
	
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
// j'augmente la force avec montremolo
    for(int laforcebbasex = montremolo; laforcebbasex > 0; laforcebbasex--)
     {
      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}
      for(int i=2; i<16; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i-1]);

	}
     }

     }

//descend

int calculpossiblex = tablex[maforceb-1];
double pourmacomx = (mesvarampli[0] * 0.01);
double pourmacom1x = (mesvarampli[1] * 0.01);
double pourmacom2x = (mesvardurer[0] * 0.01);
double pourmacom3x = (mesvardurer[1] * 0.01);
double pourmacom4x = (madurer * 0.01);
double pourmacom5x = (maforceplus * 0.01);
double pourmacom6x = (macombiendezonememoire * 0.01);



    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
         mesamplifront[10] -=  int(calculpossiblex * pourmacom4x) ;
         mesamplifront[11] += int(calculpossiblex * pourmacom4x) ;
         mesamplifront[12] -=  int(calculpossiblex * pourmacom5x) ;
         mesamplifront[13] += int(calculpossiblex * pourmacom5x) ;
         mesamplifront[14] -=  int(calculpossiblex * pourmacom6x) ;
         mesamplifront[15] += int(calculpossiblex * pourmacom6x) ;

	
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
