#include "AdnForme46.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo46(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[2]; //son du n, la référence
    int mesdurerfront[2]; //son du n, la référence
    int mesvarampli[2]; //son du n, la référence
    int madurer; //son du n, la référence
    int maforceh;
    int maforceb;



mesamplifront[0] = quelpiano2;
mesamplifront[1] = quelpiano3;
mesdurerfront[0] = quelpiano4;
mesdurerfront[1] = quelpiano5;
mesvarampli[0] = quelpiano6;
mesvarampli[1] = quelpiano7;
madurer = quelpiano10;
maforceh = quelpiano11;
maforceb = quelpiano12;



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

mesamplifront[0] = quelpiano2;
mesamplifront[1] = quelpiano3;
mesdurerfront[0] = quelpiano4;
mesdurerfront[1] = quelpiano5;
mesvarampli[0] = quelpiano6;
mesvarampli[1] = quelpiano7;
maforceh = quelpiano11;
maforceb = quelpiano12;

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

mesdurerfront[0] +=quelpiano14;
mesdurerfront[1] +=quelpiano14;

	if(mesdurerfront[0]>239)
	mesdurerfront[0] = 239;

	if(mesdurerfront[1]>239)
	mesdurerfront[1] = 239;
	


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);


    for(int pourquelpiano8 = quelpiano8; pourquelpiano8 > 0; pourquelpiano8--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
     }

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

    for(int pourquelpiano9 = quelpiano9; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
     }


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

mesdurerfront[0] -=quelpiano14;
mesdurerfront[1] -=quelpiano14;

	if(mesdurerfront[0]<6)
	mesdurerfront[0] = 6;

	if(mesdurerfront[1]<6)
	mesdurerfront[1] = 6;
	



        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);


    for(int pourquelpiano13 = quelpiano9; pourquelpiano13 > 0; pourquelpiano13--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
     }

     }




// fin  multiplie
   }

    for(int pourquelpiano15 = quelpiano15; pourquelpiano15 > 0; pourquelpiano15--)
     {
        fprintf(fichierjo,  "%c%c",    (char)130, (char)250);

        fprintf(fichierjo,  "%c%c",    (char)quelpiano13, (char)250);


     }


 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
