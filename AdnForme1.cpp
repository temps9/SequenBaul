#include "AdnForme1.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo1(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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

	 int basehaut = 1;
	 int basebas = 1;

// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte en augmentant le plateau des durées

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] -= mesvarampli[1];
         mesamplifront[0] += mesvarampli[0];

	 // respect des limites

	if(mesamplifront[0]>239)
	mesamplifront[0] = 239;

	if(mesamplifront[1]<16)
	mesamplifront[1] = 16;	

	 basehaut = (mesamplifront[0] -2);
	 basebas = (mesamplifront[1] +2);
	


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);



     }
//plateau


    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

     }



//descend

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
         mesamplifront[1] += mesvarampli[1];
         mesamplifront[0] -= mesvarampli[0];

	 // respect des limites

	if(mesamplifront[1]>239)
	mesamplifront[1] = 239;

	if(mesamplifront[0]<16)
	mesamplifront[0] = 16;	

	 basehaut = (mesamplifront[0] -2);
	 basebas = (mesamplifront[1] +2);
	



        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

     }




// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
