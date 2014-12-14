#include "AdnForme42.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo42(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[12]; //son du n, la référence
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
   

   
if(quelpiano4<120)
   {
    mesamplifront[2] = 128 + quelpiano4;
    mesamplifront[3] = 128 - quelpiano4;
   }
else   
   {
    mesamplifront[2] = quelpiano4;
    mesamplifront[3] = quelpiano4 - 6;
   }
   


if(quelpiano6<120)
   {
    mesamplifront[4] = 128 + quelpiano6;
    mesamplifront[5] = 128 - quelpiano6;
   }
else   
   {
    mesamplifront[4] = quelpiano6;
    mesamplifront[5] = quelpiano6 - 6;
   }
   

   
if(quelpiano8<120)
   {
    mesamplifront[6] = 128 + quelpiano8;
    mesamplifront[7] = 128 - quelpiano8;
   }
else   
   {
    mesamplifront[6] = quelpiano8;
    mesamplifront[7] = quelpiano8 - 6;
   }
   

/****/
if(quelpiano10<120)
   {
    mesamplifront[8] = 128 + quelpiano10;
    mesamplifront[9] = 128 - quelpiano10;
   }
else   
   {
    mesamplifront[8] = quelpiano10;
    mesamplifront[9] = quelpiano10 - 6;
   }
   

   
if(quelpiano12<120)
   {
    mesamplifront[10] = 128 + quelpiano12;
    mesamplifront[11] = 128 - quelpiano12;
   }
else   
   {
    mesamplifront[10] = quelpiano12;
    mesamplifront[11] = quelpiano12 - 6;
   }

mesdurerfront = quelpiano14;
maforceh = quelpiano15;

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


    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront);       
       
           for(int laforcebbaseb = quelpiano3; laforcebbaseb > 0; laforcebbaseb--)
     {


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)mesdurerfront);       
       
           for(int laforcebbaseb = quelpiano5; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)mesdurerfront);   

	}
 /*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)mesdurerfront);       
       
           for(int laforcebbaseb = quelpiano7; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)mesdurerfront);       
       
           for(int laforcebbaseb = quelpiano9; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)mesdurerfront);   

	}
          
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[8], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[9], (char)mesdurerfront);       
       
           for(int laforcebbaseb = quelpiano11; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[8], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[9], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[10], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[11], (char)mesdurerfront);       
       
           for(int laforcebbaseb = quelpiano13; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[10], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[11], (char)mesdurerfront);   

	}
    

     
// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
