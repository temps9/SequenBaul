#include "AdnForme66.h"
#define combientaba 1000
#define combientabd 1000

// Génère les fichiers c.jo son "OU" api 
void genereFichierJo66(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>148)
position2=148;

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



// son on
  int tabamplitude[combientaba] =
    { 
135, 109, 140, 127, 130, 103, 147, 128, 130, 88, 152, 120, 128, 82, 159, 120, 136, 76, 168, 125, 141, 73, 168, 115, 134, 59, 170, 116, 136, 54, 171, 121, 136, 50, 175, 125, 137, 46, 184, 130, 141, 40, 193, 128, 142, 37, 198, 125, 143, 33, 204, 120, 136, 34, 207, 119, 133, 32, 208, 120, 132, 36, 211, 119, 132, 36, 209, 118, 132, 39, 209, 114, 134, 39, 205, 115, 133, 39, 198, 114, 132, 41, 196, 117, 134, 45, 192, 117, 132, 46, 186, 120, 136, 50, 182, 120, 136, 53, 177, 117, 138, 55, 170, 120, 138, 61, 165, 122, 140, 69, 159, 120, 138, 75, 158, 119, 139, 84, 159, 115, 139, 91, 159, 110, 144, 96, 160, 109, 149, 97, 155, 111, 150, 99, 148, 116, 146, 106, 140, 120, 139, 115, 136, 122, 133, 122, 129, 128
};





  int tabdurer[combientabd] =
    { 
144, 67, 112, 53, 22, 71, 110, 68, 25, 60, 108, 68, 31, 61, 101, 70, 34, 60, 109, 65, 37, 57, 108, 69, 35, 56, 108, 66, 37, 53, 113, 67, 31, 56, 102, 71, 32, 58, 98, 72, 32, 59, 95, 70, 32, 63, 94, 67, 34, 64, 95, 69, 34, 61, 95, 70, 31, 60, 99, 70, 28, 63, 99, 69, 27, 63, 99, 67, 34, 58, 102, 65, 33, 61, 99, 67, 37, 64, 94, 67, 39, 61, 95, 69, 36, 65, 90, 75, 39, 62, 91, 72, 41, 58, 98, 68, 39, 62, 92, 73, 42, 58, 97, 74, 41, 59, 109, 64, 38, 60, 114, 66, 34, 61, 117, 60, 44, 55, 121, 63, 47, 51, 122, 62, 50, 62, 110, 66, 57, 64, 105, 68, 59, 70, 99, 74, 60, 68, 116, 71, 62, 82, 105, 71, 75, 75, 105, 33
};

	 pass1=0;
	 pass2=0;

if(quelpiano9<250)

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

}//fin boucle for
    for(int pourquelpiano9 = quelpiano9; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)130, (char)250);
     }
}
else
   {
  for(int positiontab = position1; positiontab<position2; positiontab++)
   {

        if(positiontab%2)
                {
	pass1 = tabamplitude[positiontab] - int(tabamplitude[positiontab] * 0.01 * quelpiano2);
	pass2 = int(tabdurer[positiontab] + tabdurer[positiontab]* 0.01 * quelpiano3);

	}
        else
                {
	pass1 = tabamplitude[positiontab] + int(tabamplitude[positiontab] * 0.01 * quelpiano4);
	pass2 = int(tabdurer[positiontab] + tabdurer[positiontab] * 0.01 * quelpiano5);
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

}//fin boucle for
}//





// fin  multiplie
   }
 
  fclose(fichierjo);

       }

// fin de la zone de travail de l'apprenant
