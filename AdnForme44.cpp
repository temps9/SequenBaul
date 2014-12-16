#include "AdnForme44.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo44(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[12]; //son du n, la référence
    int mesdurerfront; //son du n, la référence
    int madurer; //son du n, la référence

    int maforceplus;



if(quelpiano14<120)
   {
    mesamplifront[0] = 128 + quelpiano14;
    mesamplifront[1] = 128 - quelpiano14;
   }
else   
   {
    mesamplifront[0] = quelpiano14;
    mesamplifront[1] = quelpiano14 - 6;
   }
   

   
if(quelpiano14<120)
   {
    mesamplifront[2] = 128 + quelpiano14;
    mesamplifront[3] = 128 - quelpiano14;
   }
else   
   {
    mesamplifront[2] = quelpiano14;
    mesamplifront[3] = quelpiano14 - 6;
   }
   


if(quelpiano14<120)
   {
    mesamplifront[4] = 128 + quelpiano14;
    mesamplifront[5] = 128 - quelpiano14;
   }
else   
   {
    mesamplifront[4] = quelpiano14;
    mesamplifront[5] = quelpiano14 - 6;
   }
   

   
if(quelpiano14<120)
   {
    mesamplifront[6] = 128 + quelpiano14;
    mesamplifront[7] = 128 - quelpiano14;
   }
else   
   {
    mesamplifront[6] = quelpiano14;
    mesamplifront[7] = quelpiano14 - 6;
   }
   

/****/
if(quelpiano14<120)
   {
    mesamplifront[8] = 128 + quelpiano14;
    mesamplifront[9] = 128 - quelpiano14;
   }
else   
   {
    mesamplifront[8] = quelpiano14;
    mesamplifront[9] = quelpiano14 - 6;
   }
   

   
if(quelpiano14<120)
   {
    mesamplifront[10] = 128 + quelpiano14;
    mesamplifront[11] = 128 - quelpiano14;
   }
else   
   {
    mesamplifront[10] = quelpiano14;
    mesamplifront[11] = quelpiano14 - 6;
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

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)quelpiano2);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)quelpiano2);       
       
           for(int laforcebbaseb = quelpiano3; laforcebbaseb > 0; laforcebbaseb--)
     {


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)quelpiano2);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)quelpiano2);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)quelpiano4);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)quelpiano4);       
       
           for(int laforcebbaseb = quelpiano5; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)quelpiano4);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)quelpiano4);   

	}
 /*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)quelpiano6);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)quelpiano6);       
       
           for(int laforcebbaseb = quelpiano7; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)quelpiano6);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)quelpiano6);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)quelpiano8);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)quelpiano8);       
       
           for(int laforcebbaseb = quelpiano9; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)quelpiano8);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)quelpiano8);   

	}
          
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[8], (char)quelpiano10);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[9], (char)quelpiano10);       
       
           for(int laforcebbaseb = quelpiano11; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[8], (char)quelpiano10);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[9], (char)quelpiano10);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[10], (char)quelpiano12);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[11], (char)quelpiano12);       
       
           for(int laforcebbaseb = quelpiano13; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[10], (char)quelpiano12);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[11], (char)quelpiano12);   

	}
    

     
// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
