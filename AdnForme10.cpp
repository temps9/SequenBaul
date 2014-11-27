#include "AdnForme10.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo10(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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

int avececo[2];
int avececo1[2];



// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)       {
         mesamplifront[i] -= mesvarampli[i];
         mesdurerfront[i] += mesvardurer[i];
	       }
        else       {
         mesamplifront[i] += mesvarampli[i];
         mesdurerfront[i] -= mesvardurer[i];
	       }

avececo[0]=mesamplifront[0] - (mesamplifront[0]*montremolo)*0.1;
avececo[1]=mesamplifront[1] + (mesamplifront[1]*montremolo)*0.1;
avececo1[0]=mesamplifront[0] - (mesamplifront[0]*macombiendezonememoire)*0.05;
avececo1[1]=mesamplifront[1] + (mesamplifront[1]*macombiendezonememoire)*0.05;

	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	

	if(avececo[i]>239)
	avececo[i] = 239;

	if(avececo[i]<16)
	avececo[i] = 16;	

	if(avececo1[i]>239)
	avececo1[i] = 239;

	if(avececo1[i]<16)
	avececo1[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)avececo[i], (char)mesdurerfront[i]);

        fprintf(fichierjo,  "%c%c",    (char)avececo1[i], (char)mesdurerfront[i]);

	}
       }
     }
//plateau


    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)avececo[i], (char)mesdurerfront[i]);

        fprintf(fichierjo,  "%c%c",    (char)avececo1[i], (char)mesdurerfront[i]);

	}

       }
     }



//descend


    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)       {
         mesamplifront[i] += mesvarampli[i];
         mesdurerfront[i] -= mesvardurer[i];
	       }
        else       {
         mesamplifront[i] -= mesvarampli[i];
         mesdurerfront[i] += mesvardurer[i];
	       }

avececo[0]=mesamplifront[0] - (mesamplifront[0]*montremolo)*0.1;
avececo[1]=mesamplifront[1] + (mesamplifront[1]*montremolo)*0.1;
avececo1[0]=mesamplifront[0] - (mesamplifront[0]*macombiendezonememoire)*0.05;
avececo1[1]=mesamplifront[1] + (mesamplifront[1]*macombiendezonememoire)*0.05;

	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	

	if(avececo[i]>239)
	avececo[i] = 239;

	if(avececo[i]<16)
	avececo[i] = 16;	

	if(avececo1[i]>239)
	avececo1[i] = 239;

	if(avececo1[i]<16)
	avececo1[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {
        fprintf(fichierjo,  "%c%c",    (char)avececo[i], (char)mesdurerfront[i]);

        fprintf(fichierjo,  "%c%c",    (char)avececo1[i], (char)mesdurerfront[i]);

	}
       }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
