#include "AdnForme15.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo15(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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



int fronts1[2];
int fronts2[2];

if(mesamplifront[0]>128)
{
 fronts1[0] = mesamplifront[0] -128;
 fronts1[1] = 128 - fronts1[0];
}
if(mesamplifront[0]<128)
{
 fronts1[0] = 128 - mesamplifront[0];
 fronts1[1] = 128 + fronts1[0];
}
if(mesamplifront[0]==128)
{
 fronts1[0] = 129;
 fronts1[1] = 127;
}
if(mesamplifront[1]>128)
{
 fronts2[0] = mesamplifront[1] -128;
 fronts2[1] = 128 - fronts2[0];
}
if(mesamplifront[1]<128)
{
 fronts2[0] = 128 - mesamplifront[1];
 fronts2[1] = 128 + fronts2[0];
}
if(mesamplifront[1]==128)
{
 fronts2[0] = 129;
 fronts2[1] = 127;
}

// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         fronts1[i] -= mesvarampli[0];
        else
         fronts1[i] += mesvarampli[0];
	
	 // respect des limites
	if(fronts1[i]>239)
	fronts1[i] = 239;

	if(fronts1[i]<16)
	fronts1[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)fronts1[i], (char)mesdurerfront[i]);


       }
      for(int i=0; i<2; i++)
       {
        if(i%2)
         fronts2[i] -= mesvarampli[1];
        else
         fronts2[i] += mesvarampli[1];
	
	 // respect des limites
	if(fronts2[i]>239)
	fronts2[i] = 239;

	if(fronts2[i]<16)
	fronts2[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)fronts2[i], (char)mesdurerfront[i]);


       }
     }
//plateau
int basculeDe1 = montremolo * 2;
int basculeDe2 = basculeDe1 - 1;
int basculeDe3 = basculeDe1 * 2 - 1;
int basculeDe5 = 0;

    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {


if(basculeDe5<basculeDe1)
{
mesdurerfront[0] += mesvardurer[0];
fronts1[0] += mesvarampli[0];
fronts2[0] -= mesvarampli[0];
mesdurerfront[1] += mesvardurer[1];
fronts1[1] += mesvarampli[1];
fronts2[1] -= mesvarampli[1];
}

if(basculeDe5>basculeDe2)
{
mesdurerfront[0] -= mesvardurer[0];
fronts1[0] -= mesvarampli[0];
fronts2[0] += mesvarampli[0];
mesdurerfront[1] -= mesvardurer[1];
fronts1[1] -= mesvarampli[1];
fronts2[1] += mesvarampli[1];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

      for(int i=0; i<2; i++)
       {

	if(fronts1[i]>239)
	fronts1[i] = 239;

	if(fronts1[i]<16)
	fronts1[i] = 16;

	if(fronts2[i]>239)
	fronts2[i] = 239;

	if(fronts2[i]<16)
	fronts2[i] = 16;

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;

        fprintf(fichierjo,  "%c%c",    (char)fronts1[i], (char)mesdurerfront[i]);

        fprintf(fichierjo,  "%c%c",    (char)fronts2[i], (char)mesdurerfront[i]);


       }
int fronts1a[2];  
int fronts2a[2];
      for(int i=0; i<2; i++)
       {
fronts1a[i] = fronts1[i];
fronts2a[i] = fronts2[i];
}


      for(int aaee=maforceplus; aaee>0; aaee--)
       {
      for(int i=0; i<2; i++)
       {

	if(fronts1a[i]>239)
	fronts1a[i] = 239;

	if(fronts1a[i]<16)
	fronts1a[i] = 16;

	if(fronts2a[i]>239)
	fronts2a[i] = 239;

	if(fronts2a[i]<16)
	fronts2a[i] = 16;

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;

        fprintf(fichierjo,  "%c%c",    (char)fronts1a[i], (char)mesdurerfront[i]);

        fprintf(fichierjo,  "%c%c",    (char)fronts2a[i], (char)mesdurerfront[i]);


       }
       }



     }



//descend

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         fronts2[i] += mesvarampli[1];
        else
         fronts2[i] -= mesvarampli[1];
	
	 // respect des limites
	if(fronts2[i]>239)
	fronts2[i] = 239;

	if(fronts2[i]<16)
	fronts2[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)fronts2[i], (char)mesdurerfront[i]);


       }
      for(int i=0; i<2; i++)
       {
        if(i%2)
         fronts1[i] += mesvarampli[0];
        else
         fronts1[i] -= mesvarampli[0];
	
	 // respect des limites
	if(fronts1[i]>239)
	fronts1[i] = 239;

	if(fronts1[i]<16)
	fronts1[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)fronts1[i], (char)mesdurerfront[i]);


       }
     }



// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
