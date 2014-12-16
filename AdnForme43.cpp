#include "AdnForme43.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo43(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[8]; //son du n, la référence
    int mesdurerfront; //son du n, la référence
    int madurer; //son du n, la référence
    int maforceh;
    int maforceplus;



if(quelpiano2<120)
   {
    mesamplifront[0] = 128 + quelpiano2;
    mesamplifront[1] = 128 - quelpiano2;
   }
else   
   {
    mesamplifront[0] = quelpiano2;
    mesamplifront[1] = quelpiano2 - 6;
   }
   

   
if(quelpiano5<120)
   {
    mesamplifront[2] = 128 + quelpiano5;
    mesamplifront[3] = 128 - quelpiano5;
   }
else   
   {
    mesamplifront[2] = quelpiano5;
    mesamplifront[3] = quelpiano5 - 6;
   }
   


if(quelpiano8<120)
   {
    mesamplifront[4] = 128 + quelpiano8;
    mesamplifront[5] = 128 - quelpiano8;
   }
else   
   {
    mesamplifront[4] = quelpiano8;
    mesamplifront[5] = quelpiano8 - 6;
   }
   

   
if(quelpiano11<120)
   {
    mesamplifront[6] = 128 + quelpiano11;
    mesamplifront[7] = 128 - quelpiano11;
   }
else   
   {
    mesamplifront[6] = quelpiano11;
    mesamplifront[7] = quelpiano11 - 6;
   }
   

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


    for(int laforcebbase = quelpiano15; laforcebbase > 0; laforcebbase--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)quelpiano3);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)quelpiano3);       
       
           for(int laforcebbaseb = quelpiano4; laforcebbaseb > 0; laforcebbaseb--)
     {


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)quelpiano3);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)quelpiano3);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)quelpiano6);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)quelpiano6);       
       
           for(int laforcebbaseb = quelpiano7; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)quelpiano6);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)quelpiano6);   

	}
 /*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)quelpiano9);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)quelpiano9);       
       
           for(int laforcebbaseb = quelpiano10; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)quelpiano9);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)quelpiano9);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)quelpiano12);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)quelpiano13);       
       
           for(int laforcebbaseb = quelpiano14; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)quelpiano12);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)quelpiano13);   

	}
          

     
// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
