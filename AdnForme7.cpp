#include "AdnForme7.h"

// Génère les fichiers piste.jo
void genereFichierJo7(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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

/**********************************************/
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
// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = 7; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= 12;
        else
         mesamplifront[i] += 12;
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

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
mesamplifront[0] -= mesvarampli[0];
mesdurerfront[1] += mesvardurer[1];
mesamplifront[1] -= mesvarampli[1];
}

if(basculeDe5>basculeDe2)
{
mesdurerfront[0] -= mesvardurer[0];
mesamplifront[0] += mesvarampli[0];
mesdurerfront[1] -= mesvardurer[1];
mesamplifront[1] += mesvarampli[1];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

	 // respect des limites

      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;

}


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);


    for(int laforcebbase = maforceplus; laforcebbase > 0; laforcebbase--)
     {


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);


     }

     }



//descend

    for(int laforcebbase = 7; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] += 12;
        else
         mesamplifront[i] -= 12;
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

       }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
