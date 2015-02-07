#include "AdnForme70.h"
#define combientaba 1000
#define combientabd 1000

// Génère les fichiers c.jo son "A" api 
void genereFichierJo70(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>422)
position2=422;

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



// son "ai" api 302
  int tabamplitude[combientaba] =
    { 
128, 127, 129, 128, 129, 128, 129, 127, 128, 126, 127, 126, 129, 128, 129, 126, 132, 120, 122, 119, 124, 123, 130, 129, 134, 130, 131, 121, 124, 122, 125, 125, 133, 131, 133, 122, 139, 111, 113, 110, 121, 120, 143, 126, 127, 118, 121, 118, 138, 135, 137, 121, 122, 120, 145, 143, 144, 101, 104, 98, 115, 113, 151, 141, 141, 112, 116, 113, 142, 138, 142, 119, 145, 102, 103, 90, 105, 102, 152, 149, 151, 111, 114, 109, 143, 141, 144, 121, 147, 95, 98, 83, 105, 102, 163, 157, 158, 106, 111, 105, 146, 145, 149, 127, 147, 90, 92, 75, 95, 93, 167, 100, 108, 106, 139, 136, 149, 138, 146, 138, 142, 136, 142, 139, 144, 77, 81, 71, 167, 104, 144, 119, 171, 53, 54, 54, 59, 58, 195, 92, 152, 125, 127, 122, 161, 50, 55, 43, 189, 93, 99, 96, 146, 127, 131, 125, 161, 42, 51, 43, 94, 93, 205, 92, 104, 98, 127, 126, 151, 147, 151, 133, 136, 130, 162, 158, 167, 37, 45, 36, 206, 199, 200, 96, 102, 98, 143, 142, 148, 142, 144, 133, 134, 127, 130, 128, 164, 163, 170, 22, 32, 24, 208, 200, 200, 95, 106, 98, 149, 144, 149, 128, 128, 120, 123, 119, 130, 130, 172, 19, 27, 20, 211, 200, 200, 95, 107, 97, 153, 150, 155, 131, 134, 128, 169, 168, 179, 32, 37, 30, 217, 104, 108, 104, 160, 136, 168, 34, 37, 31, 205, 103, 159, 132, 172, 35, 37, 30, 195, 187, 187, 95, 100, 97, 148, 146, 157, 148, 148, 125, 125, 118, 122, 119, 163, 159, 167, 23, 28, 19, 184, 174, 176, 104, 105, 99, 104, 101, 150, 147, 156, 146, 146, 123, 125, 116, 120, 118, 130, 129, 171, 33, 36, 25, 175, 167, 171, 135, 137, 105, 115, 106, 150, 147, 152, 151, 152, 140, 142, 120, 120, 117, 182, 27, 170, 168, 171, 118, 123, 120, 154, 151, 153, 116, 117, 116, 187, 17, 161, 160, 166, 119, 120, 118, 128, 126, 147, 146, 151, 117, 117, 110, 198, 24, 166, 132, 147, 115, 116, 113, 198, 31, 34, 26, 163, 162, 164, 157, 159, 135, 137, 133, 136, 132, 134, 129, 130, 119, 121, 115, 182, 35, 173, 128, 131, 130, 136, 133, 136, 133, 174, 53, 54, 50, 177, 129, 131, 129, 138, 131, 161, 65, 163, 128, 138, 128, 150, 89, 149, 130, 132, 131, 132, 128, 135, 112, 135, 128, 129, 127, 128, 127
};





  int tabdurer[combientabd] =
    { 
75, 52, 29, 2, 9, 3, 5, 7, 6, 16, 6, 8, 38, 4, 9, 28, 64, 45, 4, 9, 15, 3, 9, 4, 18, 16, 5, 27, 7, 7, 8, 3, 27, 7, 6, 40, 50, 49, 4, 9, 14, 3, 30, 31, 3, 17, 6, 5, 39, 7, 6, 29, 4, 4, 41, 6, 6, 37, 7, 8, 12, 5, 31, 17, 3, 30, 6, 5, 38, 7, 6, 29, 50, 40, 3, 11, 10, 6, 28, 8, 5, 39, 6, 5, 42, 4, 6, 40, 41, 39, 4, 10, 12, 4, 30, 9, 3, 38, 7, 6, 40, 3, 7, 40, 37, 40, 3, 10, 11, 4, 43, 51, 7, 4, 27, 5, 8, 7, 8, 11, 7, 6, 8, 5, 8, 54, 7, 7, 53, 42, 49, 36, 54, 46, 4, 3, 5, 4, 44, 49, 51, 28, 5, 7, 40, 47, 6, 8, 48, 49, 6, 4, 41, 26, 5, 7, 38, 51, 6, 9, 14, 2, 29, 51, 7, 5, 17, 2, 10, 7, 12, 18, 5, 6, 29, 5, 7, 49, 5, 7, 48, 6, 4, 41, 6, 4, 31, 3, 6, 6, 4, 8, 4, 7, 5, 5, 30, 2, 7, 50, 6, 6, 50, 7, 3, 39, 6, 6, 29, 6, 5, 19, 3, 6, 5, 4, 10, 2, 29, 52, 5, 8, 47, 8, 3, 39, 6, 6, 30, 5, 6, 26, 6, 5, 30, 4, 7, 54, 6, 7, 47, 51, 5, 6, 43, 37, 44, 52, 6, 7, 48, 51, 52, 40, 40, 53, 5, 9, 47, 7, 3, 40, 6, 5, 30, 4, 7, 8, 3, 19, 3, 7, 5, 5, 29, 4, 7, 51, 5, 6, 50, 6, 5, 30, 3, 7, 5, 4, 31, 5, 6, 7, 3, 18, 4, 7, 6, 4, 8, 2, 30, 53, 3, 10, 47, 6, 5, 18, 3, 18, 6, 6, 30, 4, 7, 4, 4, 8, 3, 21, 3, 5, 49, 63, 51, 5, 5, 39, 7, 5, 29, 7, 4, 41, 4, 4, 50, 65, 51, 4, 7, 40, 4, 4, 7, 5, 19, 4, 6, 30, 3, 8, 59, 71, 64, 45, 30, 40, 5, 6, 59, 64, 5, 6, 63, 4, 4, 8, 3, 31, 5, 6, 4, 7, 5, 7, 4, 17, 4, 9, 70, 82, 69, 53, 7, 5, 25, 6, 7, 9, 68, 75, 3, 7, 69, 54, 5, 4, 30, 37, 58, 74, 80, 54, 39, 41, 53, 78, 79, 57, 21, 8, 3, 55, 51, 75, 80, 68, 31, 63, 71, 6
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
