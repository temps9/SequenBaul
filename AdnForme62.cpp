#include "AdnForme62.h"
#define combientaba 6024
#define combientabd 6024

// Génère les fichiers c.jo et c.joa
void genereFichierJo62(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

choixconsonne(piste, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);
int pass1=0;
int pass2=0;

if(quelpiano2>255)
quelpiano2 = 255;

if(quelpiano3>255)
quelpiano3 = 255;

if(quelpiano4>255)
quelpiano4 = 255;

if(quelpiano5>255)
quelpiano5 = 255;

if(quelpiano6>255)
quelpiano6 = 255;

if(quelpiano7 >255)
quelpiano7 = 255;

int position1;
int position2;
position1 = quelpiano6;
position2 = quelpiano7 * quelpiano8;
if(position2>67)
position2=67;

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


//multiplie

    for(int laforcebbase = quelpiano10; laforcebbase > 0; laforcebbase--)
     {



// voyelle son "A"

  int tabamplitude[combientaba] =
    { 
132, 130, 135, 133, 134, 133, 136, 109, 133, 130, 134, 133, 134, 133, 134, 132, 135, 110, 132, 131, 133, 132, 134, 132, 136, 109, 132, 130, 135, 132, 136, 109, 132, 131, 135, 132, 136, 108, 133, 132, 136, 132, 135, 134, 135, 107, 133, 132, 134, 134, 136, 132, 136, 107, 133, 131, 136, 133, 135, 134, 136, 107, 137, 133, 136, 106, 128
};





  int tabdurer[combientabd] =
    { 
12, 4, 17, 15, 5, 3, 8, 25, 25, 7, 9, 3, 5, 3, 6, 6, 17, 27, 25, 7, 5, 6, 13, 7, 16, 27, 24, 7, 25, 7, 14, 28, 28, 4, 24, 6, 17, 28, 37, 2, 15, 6, 8, 2, 8, 25, 27, 6, 9, 5, 9, 9, 13, 28, 28, 7, 14, 15, 6, 3, 9, 25, 51, 12, 13, 26, 19
};

 pass1=0;
 pass2=0;

	  for (int recommence = 0; recommence < 12; recommence++)
	    {

  for(int positiontab = position1; positiontab<position2; positiontab++)
   {

        if(positiontab%2)
                {
	pass1 = tabamplitude[positiontab] - int(tabamplitude[positiontab] * 0.01 * quelpiano2);
	pass2 = int(tabdurer[positiontab] * 0.01 * quelpiano3);

	}
        else
                {
	pass1 = tabamplitude[positiontab] + int(tabamplitude[positiontab] * 0.01 * quelpiano4);
	pass2 = int(tabdurer[positiontab] * 0.01 * quelpiano5);
	}

	if(pass1<16)
	pass1=16;

	if(pass2<4)
	pass2=4;

	if(pass1 >239)
	pass1=239;

	if(pass2>250)
	pass2=250;

        fprintf(fichierjo,  "%c%c",    (char)(pass1), (char)(pass2));

}

	    }			//fin recommence la forme

    for(int pourquelpiano9 = quelpiano9; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)130, (char)250);

     }

// fin  multiplie
   }
 
  fclose(fichierjo);

       }

// fin de la zone de travail de l'apprenant
