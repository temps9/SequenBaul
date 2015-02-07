#include "AdnForme64.h"
#define combientaba 1000
#define combientabd 1000

// Génère les fichiers c.jo et c.joa
void genereFichierJo64(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>251)
position2=251;

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
130, 116, 144, 115, 131, 111, 117, 114, 176, 82, 149, 105, 128, 103, 187, 73, 154, 104, 128, 100, 201, 58, 158, 129, 132, 100, 130, 98, 209, 54, 162, 128, 132, 102, 129, 97, 207, 56, 164, 105, 127, 97, 209, 58, 166, 107, 125, 100, 213, 59, 166, 107, 127, 105, 219, 61, 165, 118, 119, 106, 125, 107, 218, 61, 168, 113, 119, 110, 123, 110, 215, 62, 173, 109, 121, 112, 124, 114, 211, 62, 176, 104, 123, 112, 124, 117, 204, 65, 178, 95, 136, 108, 195, 74, 176, 90, 143, 106, 191, 78, 177, 88, 147, 104, 187, 81, 175, 86, 149, 104, 185, 82, 175, 85, 150, 104, 185, 84, 173, 87, 149, 106, 184, 87, 170, 89, 146, 107, 181, 88, 167, 91, 144, 108, 179, 90, 164, 92, 142, 110, 179, 92, 162, 95, 140, 112, 177, 93, 158, 96, 137, 114, 174, 95, 154, 98, 135, 114, 173, 96, 154, 98, 136, 115, 172, 97, 151, 101, 135, 115, 168, 102, 144, 104, 133, 115, 166, 101, 144, 105, 133, 115, 164, 105, 140, 109, 132, 116, 161, 108, 136, 111, 132, 115, 158, 110, 132, 114, 130, 115, 156, 112, 129, 116, 131, 114, 154, 115, 126, 119, 130, 114, 150, 116, 121, 120, 130, 113, 147, 116, 130, 114, 145, 116, 132, 115, 143, 114, 130, 115, 140, 115, 129, 118, 137, 117, 127, 119, 133, 119, 126, 120, 130, 122, 126, 122, 128, 123, 124, 122, 128
};





  int tabdurer[combientabd] =
    { 
27, 121, 117, 44, 37, 72, 42, 35, 72, 40, 39, 73, 35, 48, 87, 39, 35, 74, 35, 52, 85, 39, 35, 29, 15, 29, 34, 52, 81, 39, 36, 29, 15, 32, 37, 44, 74, 39, 37, 77, 38, 39, 67, 42, 37, 77, 39, 36, 61, 41, 38, 84, 32, 37, 51, 42, 40, 44, 9, 28, 35, 38, 45, 41, 39, 39, 17, 30, 33, 35, 43, 41, 36, 39, 26, 28, 36, 24, 41, 39, 38, 36, 32, 30, 30, 21, 40, 39, 36, 38, 34, 37, 79, 39, 36, 37, 38, 38, 70, 39, 36, 40, 37, 37, 66, 39, 36, 40, 37, 41, 57, 40, 37, 39, 37, 41, 53, 40, 38, 38, 40, 39, 51, 40, 39, 38, 38, 38, 51, 40, 37, 40, 37, 40, 50, 39, 39, 38, 40, 37, 48, 41, 39, 40, 38, 40, 47, 39, 40, 40, 36, 44, 44, 41, 39, 40, 39, 40, 46, 41, 39, 39, 42, 41, 44, 40, 41, 40, 40, 42, 44, 42, 40, 39, 38, 45, 47, 40, 39, 42, 42, 42, 47, 42, 39, 39, 44, 42, 48, 45, 36, 40, 42, 50, 46, 46, 38, 42, 41, 48, 45, 47, 42, 35, 46, 47, 55, 51, 38, 34, 42, 53, 54, 56, 45, 17, 47, 53, 66, 68, 97, 51, 79, 72, 78, 71, 81, 74, 78, 69, 93, 72, 77, 83, 96, 71, 78, 84, 104, 73, 82, 82, 118, 73, 82, 87, 104, 104, 55, 100, 170
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
