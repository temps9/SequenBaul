#include "AdnForme26.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo26(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[2]; //son du n, la référence
    int mesdurerfront[2]; //son du n, la référence
    int mesvarampli[2]; //son du n, la référence
    int mesvardurer[2]; //son du n, la référence
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
int ajusteur1;
int ajusteur2;
int ajusteur3;
int ajusteur4;
double pourmacom = (macombiendezonememoire * 0.01);

// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] -= calculpossible;
         mesamplifront[0] += calculpossible;
         mesvardurer[1] -= int(calculpossible * pourmacom) ;
         mesvardurer[0] +=  int(calculpossible * pourmacom) ;
	
	 // respect des limites
      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesvardurer[i]>239)
	mesvardurer[i] = 239;

	if(mesvardurer[i]<16)
	mesvardurer[i] = 16;	
	}
	ajusteur1 = mesamplifront[0] - 2;
	ajusteur2 = mesamplifront[1] + 2;
	ajusteur3 = mesvardurer[0] - 2;
	ajusteur4 = mesvardurer[1] + 2;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);

    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
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
mesvardurer[0] -= mesvarampli[0];
mesamplifront[0] -= mesvarampli[0];
ajusteur1 -= mesvarampli[0];
ajusteur3 -= mesvarampli[0];
mesvardurer[1] += mesvarampli[1];
mesamplifront[1] += mesvarampli[1];
ajusteur2 += mesvarampli[1];
ajusteur4 += mesvarampli[1];
}

if(basculeDe5>basculeDe2)
{
mesvardurer[0] += mesvarampli[0];
mesamplifront[0] += mesvarampli[0];
ajusteur1 += mesvarampli[0];
ajusteur3 += mesvarampli[0];
mesvardurer[1] -= mesvarampli[1];
mesamplifront[1] -= mesvarampli[1];
ajusteur2 -= mesvarampli[1];
ajusteur4 -= mesvarampli[1];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	
	}




        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
/*********************/



    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
     }
/************************/


     }



//descend


    for(int laforcebbase = maforceh-1; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] += calculpossible;
         mesamplifront[0] -= calculpossible;
         mesvardurer[1] += int(calculpossible * pourmacom) ;
         mesvardurer[0] -=  int(calculpossible * pourmacom) ;
	
	 // respect des limites
      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesvardurer[i]>239)
	mesvardurer[i] = 239;

	if(mesvardurer[i]<16)
	mesvardurer[i] = 16;	
	}
	ajusteur1 = mesamplifront[0] - 2;
	ajusteur2 = mesamplifront[1] + 2;
	ajusteur3 = mesvardurer[0] - 2;
	ajusteur4 = mesvardurer[1] + 2;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);

    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
     }


     }


// fin  multiplie
   }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
