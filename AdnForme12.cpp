#include "AdnForme12.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo12(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
int ajuste = maforceh;
	int centre;

// multiplie
  for(int duree = 1; duree>0; duree--)
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




// plateau

	int montage1[2];
	int montage3[2];
	int montage2[2];
	int montage4[2];

    for(int laforcehbase = ajuste; laforcehbase > 0; laforcehbase--)
     {


	if (mesamplifront[0] - mesamplifront[1])
       {

	centre = mesamplifront[0] - mesamplifront[1];
         montage1[0] = mesamplifront[0] - ((mesamplifront[0] - centre)*(0.01*montremolo)) ;
         montage2[0] = mesamplifront[0] - ((mesamplifront[0] - centre)*(0.01*maforceplus)) ;
         montage3[0] = mesamplifront[0] - ((mesamplifront[0] - centre)*(0.01*macombiendezonememoire)) ;
         montage4[0] = mesamplifront[0] - ((mesamplifront[0] - centre)*(0.01*madurer)) ;
         montage1[1] = mesamplifront[1] + ((mesamplifront[0] - centre)*(0.01*montremolo)) ;
         montage2[1] = mesamplifront[1] + ((mesamplifront[0] - centre)*(0.01*maforceplus)) ;
         montage3[1] = mesamplifront[1] + ((mesamplifront[0] - centre)*(0.01*macombiendezonememoire)) ;
         montage4[1] = mesamplifront[1] + ((mesamplifront[0] - centre)*(0.03*madurer)) ;
       }


      for(int i = 0; i <2 ; i++)
       {

	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;

	if(montage1[i]>239)
	montage1[i] = 239;

	if(montage1[i]<16)
	montage1[i] = 16;
    if(montage2[i]>239)
	montage2[i] = 239;

	if(montage2[i]<16)
	montage2[i] = 16;
	if(montage3[i]>239)
	montage3[i] = 239;

	if(montage3[i]<16)
	montage3[i] = 16;
	if(montage4[i]>239)
	montage4[i] = 239;

	if(montage4[i]<16)
	montage4[i] = 16;
       }

      for(int i = 0; i <2 ; i++)
       {


          fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

       }

      for(int pit = maforceb; pit > 0; pit--)
       {

      for(int i = 0; i <2 ; i++)
       {
          fprintf(fichierjo,  "%c%c",    (char)montage1[i], (char)mesdurerfront[i]);

	}
      for(int i = 0; i <2 ; i++)
       {
          fprintf(fichierjo,  "%c%c",    (char)montage2[i], (char)mesdurerfront[i]);

	}
      for(int i = 0; i <2 ; i++)
       {
          fprintf(fichierjo,  "%c%c",    (char)montage3[i], (char)mesdurerfront[i]);

	}
      for(int i = 0; i <2 ; i++)
       {
          fprintf(fichierjo,  "%c%c",    (char) montage4[i], (char)mesdurerfront[i]);


       }
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
