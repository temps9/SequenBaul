#include "AdnForme60.h"
#define combientaba 1024
#define combientabd 1024

// Génère les fichiers c.jo et c.joa
void genereFichierJo60(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

choixconsonne(piste, quelpiano11, quelpiano12, quelpiano13, quelpiano14, quelpiano15);

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
position2 = quelpiano7 + quelpiano8;
if(position2>290)
position2=290;

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

// creation de la voyelle

  int tabamplitude[combientaba] =
    { 

86, 176, 100, 164, 74, 176, 112, 115, 99, 167, 68, 180, 96, 174, 61, 187, 106, 111, 91, 179, 118, 119, 58, 187, 109, 112, 87, 181, 118, 119, 57, 189, 108, 111, 87, 182, 119, 120, 56, 189, 107, 111, 86, 183, 117, 120, 55, 191, 105, 111, 84, 185, 114, 118, 54, 193, 102, 111, 85, 187, 112, 117, 53, 195, 100, 111, 84, 190, 109, 117, 52, 197, 97, 112, 84, 191, 107, 116, 51, 198, 94, 112, 84, 193, 104, 116, 51, 200, 89, 113, 84, 194, 103, 115, 50, 200, 87, 113, 85, 194, 102, 115, 50, 200, 85, 114, 86, 194, 101, 115, 50, 201, 84, 114, 86, 194, 100, 114, 50, 201, 82, 113, 88, 195, 98, 114, 50, 202, 80, 115, 88, 196, 96, 113, 50, 202, 77, 115, 89, 196, 93, 113, 50, 203, 76, 116, 89, 196, 93, 113, 50, 203, 76, 117, 90, 196, 95, 114, 50, 203, 77, 117, 90, 196, 95, 112, 51, 203, 77, 117, 92, 195, 96, 111, 51, 202, 78, 116, 94, 195, 97, 109, 52, 202, 78, 116, 96, 194, 96, 107, 53, 201, 78, 116, 99, 194, 93, 104, 55, 201, 77, 116, 103, 193, 94, 102, 56, 201, 77, 116, 105, 193, 91, 99, 58, 200, 76, 117, 109, 192, 91, 98, 60, 199, 78, 117, 110, 191, 90, 95, 64, 198, 79, 117, 113, 189, 93, 95, 66, 196, 83, 117, 115, 186, 95, 96, 68, 194, 86, 118, 116, 184, 96, 97, 71, 191, 89, 118, 117, 183, 75, 189, 91, 180, 78, 186, 95, 176, 82, 183, 99, 170, 88, 178, 102, 123, 122, 164, 118, 124, 96, 170, 109, 128, 121, 157, 121, 139, 113, 141, 122
};





  int tabdurer[combientabd] =
    { 
70, 48, 49, 76, 98, 41, 40, 17, 24, 45, 101, 44, 81, 47, 98, 42, 43, 13, 27, 45, 55, 7, 40, 42, 43, 12, 27, 44, 56, 6, 41, 41, 44, 11, 28, 41, 54, 12, 38, 43, 41, 13, 28, 45, 49, 12, 40, 40, 40, 16, 26, 46, 45, 14, 39, 41, 40, 17, 27, 43, 45, 17, 35, 40, 41, 20, 23, 43, 46, 16, 36, 39, 41, 20, 25, 43, 42, 20, 32, 41, 39, 22, 23, 43, 43, 18, 35, 38, 38, 25, 22, 42, 44, 19, 32, 41, 37, 24, 23, 41, 42, 21, 32, 41, 36, 23, 26, 40, 41, 21, 32, 39, 39, 23, 24, 43, 39, 22, 31, 41, 37, 26, 22, 41, 40, 22, 31, 39, 39, 24, 22, 41, 43, 20, 31, 40, 37, 27, 21, 42, 39, 22, 31, 39, 38, 26, 22, 42, 40, 21, 31, 39, 39, 25, 23, 40, 41, 20, 32, 38, 39, 27, 22, 41, 41, 21, 31, 38, 40, 25, 23, 42, 40, 21, 30, 41, 39, 27, 21, 40, 45, 17, 31, 39, 40, 27, 22, 42, 42, 18, 30, 42, 39, 28, 21, 42, 42, 17, 31, 41, 40, 30, 19, 42, 44, 15, 29, 41, 41, 31, 18, 43, 44, 14, 29, 42, 41, 31, 19, 42, 42, 17, 27, 43, 41, 33, 15, 44, 45, 13, 29, 42, 42, 34, 13, 43, 50, 9, 28, 43, 43, 35, 11, 46, 48, 9, 25, 44, 45, 33, 13, 46, 47, 6, 30, 44, 43, 37, 8, 46, 84, 44, 44, 92, 82, 46, 45, 89, 83, 46, 46, 91, 84, 46, 44, 34, 13, 42, 46, 21, 30, 42, 41, 33, 21, 38, 41, 34, 46, 53, 76
};

int pass1=0;
int pass2=0;

if(quelpiano9<250)

   {

  for(int positiontab = position1; positiontab < position2; positiontab++)
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
//        fprintf(fichierjo,  "%c%c",    (char)126, (char)250);
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
