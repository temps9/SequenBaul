#include "AdnForme61.h"
#define combientaba 7024
#define combientabd 7024

// Génère les fichiers c.jo et c.joa
void genereFichierJo61(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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

if(quelpiano7 >419)
quelpiano7 = 419;

int position1;
int position2;
position1 = quelpiano6;
position2 = quelpiano7 * quelpiano8;
if(position2>218)
position2=218;

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




// voyelle i
  int tabamplitude[combientaba] =
    { 
132, 131, 132, 131, 132, 131, 135, 131, 139, 129, 145, 129, 131, 130, 151, 126, 130, 128, 157, 124, 129, 127, 159, 122, 127, 127, 165, 115, 167, 107, 174, 108, 121, 119, 174, 96, 182, 93, 186, 90, 190, 82, 98, 97, 194, 79, 199, 75, 201, 74, 206, 74, 86, 85, 208, 69, 80, 79, 211, 66, 74, 73, 214, 64, 72, 71, 216, 61, 69, 68, 220, 58, 67, 65, 223, 54, 60, 59, 225, 52, 58, 57, 228, 51, 57, 55, 231, 53, 56, 54, 232, 50, 55, 53, 233, 47, 53, 50, 235, 43, 51, 49, 236, 39, 49, 47, 237, 42, 50, 48, 241, 42, 50, 48, 239, 37, 44, 42, 241, 38, 47, 45, 241, 40, 54, 53, 241, 37, 240, 35, 241, 35, 43, 42, 240, 19, 24, 20, 30, 22, 243, 235, 244, 235, 236, 32, 33, 29, 38, 35, 43, 37, 238, 232, 240, 231, 233, 32, 34, 32, 40, 38, 232, 225, 231, 33, 36, 27, 30, 29, 31, 29, 35, 21, 244, 211, 237, 210, 242, 23, 36, 31, 36, 32, 41, 25, 236, 211, 230, 211, 234, 22, 46, 29, 45, 32, 50, 29, 229, 209, 225, 207, 230, 31, 46, 37, 44, 40, 48, 39, 50, 32, 224, 206, 219, 206, 222, 33, 51, 39, 50, 42, 50, 39, 53, 32, 220, 204, 213, 205, 217, 35, 56, 42, 55, 49, 61, 44, 57, 37, 216, 200, 209, 201, 210, 47, 60, 52, 57, 50, 54, 50, 57, 44, 216, 193, 210, 193, 213, 47, 61, 52, 61, 54, 60, 52, 62, 47, 209, 191, 205, 190, 208, 52, 63, 56, 62, 57, 62, 57, 65, 53, 204, 188, 200, 187, 204, 54, 67, 59, 66, 62, 70, 64, 71, 61, 198, 186, 194, 188, 192, 184, 185, 119, 171, 68, 69, 67, 69, 68, 190, 180, 193, 65, 75, 70, 76, 71, 74, 67, 191, 177, 187, 178, 185, 130, 180, 179, 183, 177, 184, 70, 80, 70, 183, 173, 183, 128, 182, 173, 180, 77, 83, 74, 179, 172, 177, 174, 176, 173, 175, 81, 174, 168, 173, 170, 173, 169, 172, 87, 132, 85, 87, 85, 117, 88, 167, 91, 93, 88, 166, 161, 164, 123, 131, 92, 160, 155, 161, 96, 97, 96, 98, 97, 156, 154, 156, 99, 151, 105, 125, 124, 135, 110, 128, 113, 120, 114, 122, 121, 124, 123, 128, 120, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 129, 128, 132, 128, 129
};





  int tabdurer[combientabd] =
    { 
17, 17, 3, 16, 9, 8, 225, 72, 90, 106, 62, 60, 32, 23, 50, 58, 32, 22, 45, 63, 25, 25, 49, 64, 34, 9, 49, 58, 91, 61, 93, 62, 32, 11, 49, 62, 88, 64, 90, 60, 87, 60, 35, 8, 49, 63, 88, 61, 90, 62, 84, 66, 28, 4, 54, 59, 32, 5, 48, 67, 27, 7, 49, 68, 24, 9, 51, 64, 27, 6, 50, 62, 29, 7, 52, 66, 25, 7, 49, 66, 29, 4, 50, 66, 25, 6, 54, 78, 12, 5, 51, 64, 29, 6, 52, 64, 25, 9, 48, 64, 30, 6, 49, 63, 31, 5, 51, 64, 27, 9, 47, 68, 27, 7, 50, 65, 27, 8, 48, 67, 28, 7, 49, 67, 30, 6, 46, 67, 86, 69, 85, 70, 19, 3, 63, 65, 16, 7, 14, 8, 26, 10, 12, 15, 4, 35, 5, 10, 13, 7, 10, 9, 27, 10, 11, 14, 5, 33, 9, 7, 22, 17, 34, 9, 10, 41, 8, 12, 13, 3, 9, 9, 10, 9, 21, 11, 11, 10, 11, 22, 12, 9, 22, 12, 10, 10, 23, 11, 11, 12, 11, 24, 11, 12, 12, 11, 11, 11, 25, 13, 11, 11, 10, 23, 9, 11, 12, 7, 12, 10, 10, 10, 23, 11, 12, 13, 11, 22, 11, 9, 12, 10, 10, 9, 11, 9, 22, 9, 10, 9, 9, 21, 10, 12, 11, 10, 11, 13, 11, 11, 24, 11, 15, 13, 10, 24, 12, 10, 10, 10, 11, 9, 8, 11, 21, 12, 11, 11, 10, 25, 11, 12, 11, 12, 10, 11, 10, 10, 22, 10, 10, 10, 10, 24, 11, 11, 11, 12, 13, 11, 9, 10, 22, 11, 10, 10, 10, 23, 11, 11, 11, 10, 14, 12, 9, 11, 24, 11, 11, 12, 10, 12, 6, 19, 16, 28, 4, 22, 14, 8, 50, 11, 10, 24, 11, 11, 13, 18, 11, 8, 24, 11, 11, 11, 8, 17, 19, 7, 9, 9, 10, 25, 12, 11, 26, 11, 10, 18, 18, 10, 10, 53, 9, 10, 23, 10, 11, 13, 7, 13, 6, 48, 25, 9, 12, 11, 9, 11, 8, 45, 20, 22, 7, 11, 54, 22, 27, 34, 10, 10, 27, 9, 8, 26, 14, 48, 71, 14, 27, 95, 11, 7, 11, 7, 26, 9, 9, 83, 113, 71, 86, 9, 32, 106, 67, 58, 50, 48, 55, 26, 50, 30, 50, 110, 250, 3, 196, 27, 7, 15, 7, 13, 10, 21, 42, 27, 40, 26, 4
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
