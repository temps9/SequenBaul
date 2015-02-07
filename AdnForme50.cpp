#include "AdnForme50.h"

// Génère les fichiers piste.jo
void genereFichierJo50(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[2]; //son du n, la référence
    int mesdurerfront[2]; //son du n, la référence
    int mesvarampli[2]; //son du n, la référence
    int madurer; //son du n, la référence
    int maforceb;
    int montremolo;
    int maforceplus;


mesamplifront[0] = quelpiano2;
mesamplifront[1] = quelpiano3;
mesdurerfront[0] = quelpiano4;
mesdurerfront[1] = quelpiano5;
mesvarampli[0] = quelpiano6;
mesvarampli[1] = quelpiano7;
madurer = quelpiano10;
maforceb = quelpiano12;
montremolo = quelpiano13;
maforceplus = quelpiano14;


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

mesamplifront[0] = quelpiano2;
mesamplifront[1] = quelpiano3;
mesdurerfront[0] = quelpiano4;
mesdurerfront[1] = quelpiano5;
mesvarampli[0] = quelpiano6;
mesvarampli[1] = quelpiano7;
maforceb = quelpiano12;
montremolo = quelpiano13;
maforceplus = quelpiano14;
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

int abascule =1;
    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {

     switch (abascule) {

case 1 :


      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}

    for(int laforcebbase = montremolo; laforcebbase > 0; laforcebbase--)
     {

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}

	}
abascule++;
 break;

default: 
         for(int i=0; i<2; i++)
          {
        if(i%2)
         mesamplifront[i] += mesvarampli[i];
        else
         mesamplifront[i] -= mesvarampli[i];

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);
	}

    for(int laforcebbase = maforceplus; laforcebbase > 0; laforcebbase--)
     {

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}

	}

abascule = 1;
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


    for(int pourquelpiano15 = quelpiano8; pourquelpiano15 > 0; pourquelpiano15--)
     {
        fprintf(fichierjo,  "%c%c",    (char)quelpiano9, (char)250);

        fprintf(fichierjo,  "%c%c",    (char)quelpiano11, (char)250);
        fprintf(fichierjo,  "%c%c",    (char)quelpiano15, (char)250);


     }

// fin  multiplie
   }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
