#include "AdnForme54.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo54(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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

// multiplie
  for(int duree = quelpiano11; duree>0; duree--)
   {

//monte

    for(int laforcebbase = quelpiano12; laforcebbase > 0; laforcebbase--)
     {


        fprintf(fichierjo,  "%c%c",    (char)(128 + 2 + int (quelpiano2*0.42)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 2 - int (quelpiano3*0.42)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 4 + int (quelpiano2*0.41)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 4 - int (quelpiano3*0.41)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 5 + int (quelpiano2*0.41)), (char)(53 - int (quelpiano6*0.18) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 5 - int (quelpiano3*0.41)), (char)(53 - int (quelpiano7*0.18) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 8 + int (quelpiano2*0.40)), (char)(67 - int (quelpiano6*0.23) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 8 - int (quelpiano3*0.40)), (char)(67 - int (quelpiano7*0.23) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 8 + int (quelpiano2*0.40)), (char)(86 - int (quelpiano6*0.31) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 8 - int (quelpiano3*0.40)), (char)(86 - int (quelpiano7*0.31) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 14 + int (quelpiano2*0.38)), (char)(71 - int (quelpiano6*0.25) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 14 - int (quelpiano3*0.38)), (char)(71 - int (quelpiano7*0.25) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 22 + int (quelpiano2*0.34)), (char)(66 - int (quelpiano6*0.23) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 22 - int (quelpiano3*0.34)), (char)(66 - int (quelpiano7*0.23) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 24 + int (quelpiano2*0.34)), (char)(65 - int (quelpiano6*0.23) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 24 - int (quelpiano3*0.34)), (char)(65 - int (quelpiano7*0.23) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 25 + int (quelpiano2*0.33)), (char)(67 - int (quelpiano6*0.23) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 25 - int (quelpiano3*0.33)), (char)(67 - int (quelpiano7*0.23) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 25 + int (quelpiano2*0.33)), (char)(68 - int (quelpiano6*0.24) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 25 - int (quelpiano3*0.33)), (char)(68 - int (quelpiano7*0.24) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 30 + int (quelpiano2*0.31)), (char)(64 - int (quelpiano6*0.22) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 30 - int (quelpiano3*0.31)), (char)(64 - int (quelpiano7*0.22) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 35 + int (quelpiano2*0.29)), (char)(64 - int (quelpiano6*0.22) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 35 - int (quelpiano3*0.29)), (char)(64 - int (quelpiano7*0.22) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 36 + int (quelpiano2*0.29)), (char)(65 - int (quelpiano6*0.23) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 36 - int (quelpiano3*0.29)), (char)(65 - int (quelpiano7*0.23) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 39 + int (quelpiano2*0.28)), (char)(63 - int (quelpiano6*0.22) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 39 - int (quelpiano3*0.28)), (char)(63 - int (quelpiano7*0.22) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 46 + int (quelpiano2*0.25)), (char)(66 - int (quelpiano6*0.23) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 46 - int (quelpiano3*0.25)), (char)(66 - int (quelpiano7*0.23) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 50 + int (quelpiano2*0.23)), (char)(61 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 50 - int (quelpiano3*0.23)), (char)(61 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 56 + int (quelpiano2*0.21)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 56 - int (quelpiano3*0.21)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 62 + int (quelpiano2*0.19)), (char)(61 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 62 - int (quelpiano3*0.19)), (char)(61 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 70 + int (quelpiano2*0.16)), (char)(61 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 70 - int (quelpiano3*0.16)), (char)(61 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 77 + int (quelpiano2*0.13)), (char)(60 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 77 - int (quelpiano3*0.13)), (char)(60 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 80 + int (quelpiano2*0.12)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 80 - int (quelpiano3*0.12)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));		

        fprintf(fichierjo,  "%c%c",    (char)(128 + 94 + int (quelpiano2*0.06)), (char)(60 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 94 - int (quelpiano3*0.06)), (char)(60 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));		

        fprintf(fichierjo,  "%c%c",    (char)(128 + 97 + int (quelpiano2*0.05)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 97 - int (quelpiano3*0.05)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));		

        fprintf(fichierjo,  "%c%c",    (char)(128 + 108 + int (quelpiano2*0.01)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 108 - int (quelpiano3*0.01)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 106 + int (quelpiano2*0.01)), (char)(56 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 106 - int (quelpiano3*0.01)), (char)(56 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 115 + int (quelpiano2*0.01)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 115 - int (quelpiano3*0.01)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 110 + int (quelpiano2*0.01)), (char)(55 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 110 - int (quelpiano3*0.01)), (char)(55 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 119 + int (quelpiano2*0.01)), (char)(58 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 119 - int (quelpiano3*0.01)), (char)(58 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 109 + int (quelpiano2*0.01)), (char)(56 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 109 - int (quelpiano3*0.01)), (char)(56 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 111 + int (quelpiano2*0.01)), (char)(58 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 111 - int (quelpiano3*0.01)), (char)(58 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 96 + int (quelpiano2*0.05)), (char)(56 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 96 - int (quelpiano3*0.05)), (char)(56 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 107 + int (quelpiano2*0.01)), (char)(56 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 107 - int (quelpiano3*0.01)), (char)(56 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 82 + int (quelpiano2*0.11)), (char)(55 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 82 - int (quelpiano3*0.11)), (char)(55 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 93 + int (quelpiano2*0.07)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 93 - int (quelpiano3*0.07)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 68 + int (quelpiano2*0.16)), (char)(53 - int (quelpiano6*0.18) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 68 - int (quelpiano3*0.16)), (char)(53 - int (quelpiano7*0.18) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 75 + int (quelpiano2*0.14)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 75 - int (quelpiano3*0.14)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 56 + int (quelpiano2*0.21)), (char)(53 - int (quelpiano6*0.18) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 56 - int (quelpiano3*0.21)), (char)(53 - int (quelpiano7*0.18) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 69 + int (quelpiano2*0.16)), (char)(55 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 69 - int (quelpiano3*0.16)), (char)(55 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 51 + int (quelpiano2*0.23)), (char)(51 - int (quelpiano6*0.17) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 51 - int (quelpiano3*0.23)), (char)(51 - int (quelpiano7*0.17) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 67 + int (quelpiano2*0.17)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 67 - int (quelpiano3*0.17)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 44 + int (quelpiano2*0.26)), (char)(50 - int (quelpiano6*0.17) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 44 - int (quelpiano3*0.26)), (char)(50 - int (quelpiano7*0.17) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 63 + int (quelpiano2*0.18)), (char)(58 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 63 - int (quelpiano3*0.18)), (char)(58 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 38 + int (quelpiano2*0.28)), (char)(48 - int (quelpiano6*0.16) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 38 - int (quelpiano3*0.28)), (char)(48 - int (quelpiano7*0.16) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 58 + int (quelpiano2*0.20)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 58 - int (quelpiano3*0.20)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 43 + int (quelpiano2*0.26)), (char)(49 - int (quelpiano6*0.16) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 43 - int (quelpiano3*0.26)), (char)(49 - int (quelpiano7*0.16) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 57 + int (quelpiano2*0.21)), (char)(56 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 57 - int (quelpiano3*0.21)), (char)(56 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));

        fprintf(fichierjo,  "%c%c",    (char)(128 + 45 + int (quelpiano2*0.25)), (char)(53 - int (quelpiano6*0.18) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 45 - int (quelpiano3*0.25)), (char)(53 - int (quelpiano7*0.18) + int (quelpiano5*0.6)));	

        fprintf(fichierjo,  "%c%c",    (char)(128 + 59 + int (quelpiano2*0.20)), (char)(56 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 59 - int (quelpiano3*0.20)), (char)(56 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));		

        fprintf(fichierjo,  "%c%c",    (char)(128 + 49 + int (quelpiano2*0.24)), (char)(54 - int (quelpiano6*0.18) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 49 - int (quelpiano3*0.24)), (char)(54 - int (quelpiano7*0.18) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 64 + int (quelpiano2*0.18)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 64 - int (quelpiano3*0.18)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 45 + int (quelpiano2*0.25)), (char)(49 - int (quelpiano6*0.16) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 45 - int (quelpiano3*0.25)), (char)(49 - int (quelpiano7*0.16) + int (quelpiano5*0.6)));
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 63 + int (quelpiano2*0.18)), (char)(58 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 63 - int (quelpiano3*0.18)), (char)(58 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 58 + int (quelpiano2*0.20)), (char)(54 - int (quelpiano6*0.18) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 58 - int (quelpiano3*0.20)), (char)(54 - int (quelpiano7*0.18) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 69 + int (quelpiano2*0.16)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 69 - int (quelpiano3*0.16)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 66 + int (quelpiano2*0.17)), (char)(55 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 66 - int (quelpiano3*0.17)), (char)(55 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 69 + int (quelpiano2*0.16)), (char)(55 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 69 - int (quelpiano3*0.16)), (char)(55 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 69 + int (quelpiano2*0.16)), (char)(55 - int (quelpiano6*0.19) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 69 - int (quelpiano3*0.16)), (char)(55 - int (quelpiano7*0.19) + int (quelpiano5*0.6)));
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 72 + int (quelpiano2*0.15)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 72 - int (quelpiano3*0.15)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));		
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 64 + int (quelpiano2*0.18)), (char)(57 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 64 - int (quelpiano3*0.18)), (char)(57 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 70 + int (quelpiano2*0.16)), (char)(58 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 70 - int (quelpiano3*0.16)), (char)(58 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 59 + int (quelpiano2*0.20)), (char)(59 - int (quelpiano6*0.2) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 59 - int (quelpiano3*0.20)), (char)(59 - int (quelpiano7*0.2) + int (quelpiano5*0.6)));		
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 55 + int (quelpiano2*0.21)), (char)(60 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 55 - int (quelpiano3*0.21)), (char)(60 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 46 + int (quelpiano2*0.25)), (char)(60 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 46 - int (quelpiano3*0.25)), (char)(60 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 38 + int (quelpiano2*0.28)), (char)(62 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));	
        fprintf(fichierjo,  "%c%c",    (char)(128 - 38 - int (quelpiano3*0.28)), (char)(62 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 32 + int (quelpiano2*0.30)), (char)(66 - int (quelpiano6*0.23) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 32 - int (quelpiano3*0.30)), (char)(66 - int (quelpiano7*0.23) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 19 + int (quelpiano2*0.36)), (char)(60 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 19 - int (quelpiano3*0.36)), (char)(60 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));	
	
        fprintf(fichierjo,  "%c%c",    (char)(128 + 8 + int (quelpiano2*0.4)), (char)(60 - int (quelpiano6*0.21) + int (quelpiano4*0.6)));
        fprintf(fichierjo,  "%c%c",    (char)(128 - 8 - int (quelpiano3*0.4)), (char)(60 - int (quelpiano7*0.21) + int (quelpiano5*0.6)));	

	


       }
  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano11), (char)(quelpiano10));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano9), (char)(quelpiano8));
}




    for(int pourquelpiano15 = quelpiano15; pourquelpiano15 > 0; pourquelpiano15--)
     {
        fprintf(fichierjo,  "%c%c",    (char)quelpiano14, (char)250);

        fprintf(fichierjo,  "%c%c",    (char)quelpiano13, (char)250);


     }



// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
