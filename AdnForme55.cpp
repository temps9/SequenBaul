#include "AdnForme55.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo55(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{




if(quelpiano2>255)
quelpiano2 = 255;

if(quelpiano3>255)
quelpiano2 = 255;

if(quelpiano4>255)
quelpiano2 = 255;

if(quelpiano5>255)
quelpiano2 = 255;

if(quelpiano6>255)
quelpiano2 = 255;

if(quelpiano7 >255)
quelpiano7 = 255;



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

    int mesamplifront[6];
    int mesdurerfront[6];
	mesamplifront[0] = quelpiano2;
	mesamplifront[1] = quelpiano3;
	mesamplifront[2] = quelpiano5;
	mesamplifront[3] = quelpiano6;
	mesdurerfront[0] = quelpiano4;
	mesdurerfront[1] = quelpiano4;
	mesdurerfront[2] = quelpiano7;
	mesdurerfront[3] = quelpiano7;
	mesamplifront[4] = quelpiano8;
	mesdurerfront[4] = quelpiano10;
	mesamplifront[5] = quelpiano9;
	mesdurerfront[5] = quelpiano10;

// multiplie total
  for(int duree = quelpiano14; duree>0; duree--)
   {


// multiplie 1
  for(int duree = quelpiano11; duree>0; duree--)
   {

      for(int i=0; i<2; i++)
       {

//         mesamplifront[i] -= mesvarampli[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]<4)
	mesdurerfront[i] = 4;	


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


       }

// fin  multiplie 1
   }
// multiplie 2
  for(int duree = quelpiano12; duree>0; duree--)
   {

      for(int i=2; i<4; i++)
       {

//         mesamplifront[i] -= mesvarampli[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]<4)
	mesdurerfront[i] = 4;	


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


       }

// fin  multiplie 2
   }

// multiplie 3
  for(int duree = quelpiano13; duree>0; duree--)
   {

      for(int i=4; i<6; i++)
       {

         mesamplifront[i] += quelpiano15;
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]<4)
	mesdurerfront[i] = 4;	


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


       }

// fin  multiplie 3
   }

// multiplie 4
  for(int duree = quelpiano13; duree>0; duree--)
   {

      for(int i=4; i<6; i++)
       {

         mesamplifront[i] -= quelpiano15;
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]<4)
	mesdurerfront[i] = 4;	


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


       }

// fin  multiplie 4
   }

// fin  multiplie total
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
