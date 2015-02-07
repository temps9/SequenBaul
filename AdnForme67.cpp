#include "AdnForme67.h"
#define combientaba 1000
#define combientabd 1000

// Génère les fichiers c.jo son "OU" api 
void genereFichierJo67(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>243)
position2=243;

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
130, 123, 132, 124, 130, 126, 132, 117, 137, 122, 130, 129, 134, 111, 142, 118, 130, 129, 138, 102, 152, 112, 135, 131, 143, 92, 163, 105, 139, 129, 149, 81, 173, 99, 139, 128, 151, 73, 177, 97, 141, 128, 153, 68, 184, 94, 146, 128, 153, 64, 187, 92, 147, 127, 151, 61, 188, 90, 148, 127, 152, 60, 193, 89, 157, 128, 150, 59, 193, 86, 157, 126, 149, 58, 195, 83, 159, 125, 150, 54, 197, 80, 159, 122, 152, 48, 199, 79, 161, 123, 158, 47, 205, 82, 160, 122, 165, 37, 209, 79, 156, 122, 171, 30, 215, 78, 152, 122, 177, 22, 221, 75, 150, 125, 183, 15, 229, 72, 151, 128, 189, 9, 235, 67, 148, 129, 191, 3, 235, 65, 142, 129, 192, 3, 233, 70, 141, 136, 191, 17, 225, 73, 177, 32, 209, 75, 164, 51, 200, 75, 158, 148, 150, 61, 189, 79, 156, 137, 149, 66, 182, 89, 154, 129, 157, 61, 184, 91, 152, 124, 168, 48, 186, 87, 147, 118, 179, 40, 188, 95, 142, 124, 183, 39, 188, 97, 139, 137, 169, 49, 190, 94, 144, 135, 150, 62, 185, 92, 150, 119, 153, 81, 169, 111, 138, 119, 146, 81, 174, 107, 131, 117, 147, 93, 168, 99, 138, 124, 140, 103, 151, 113, 134, 123, 138, 110, 144, 116, 133, 123, 134, 119, 137, 121, 131, 124, 132, 125, 131, 126, 128, 127, 128
};





  int tabdurer[combientabd] =
    { 
31, 54, 64, 57, 49, 35, 51, 50, 63, 57, 49, 27, 31, 61, 55, 56, 61, 5, 43, 57, 56, 52, 52, 29, 36, 55, 54, 53, 49, 27, 42, 54, 53, 52, 51, 32, 37, 53, 55, 53, 46, 32, 39, 50, 55, 52, 47, 35, 37, 52, 55, 51, 47, 33, 39, 51, 52, 51, 51, 33, 34, 52, 55, 51, 46, 39, 32, 52, 55, 50, 49, 39, 34, 50, 53, 50, 47, 38, 36, 51, 53, 50, 48, 41, 33, 50, 55, 49, 50, 38, 36, 51, 54, 51, 47, 38, 36, 51, 56, 51, 47, 36, 39, 52, 56, 51, 46, 35, 40, 55, 54, 54, 47, 33, 39, 55, 56, 54, 48, 29, 43, 55, 57, 53, 48, 29, 44, 56, 57, 53, 51, 24, 45, 58, 56, 57, 54, 16, 46, 60, 59, 59, 113, 61, 63, 61, 109, 66, 63, 58, 67, 32, 17, 68, 60, 57, 59, 42, 32, 58, 61, 57, 52, 41, 42, 59, 60, 57, 50, 42, 47, 59, 59, 55, 53, 39, 50, 61, 64, 57, 53, 34, 55, 63, 66, 65, 59, 28, 50, 71, 66, 64, 65, 41, 45, 72, 65, 58, 56, 48, 54, 77, 72, 58, 50, 51, 65, 83, 68, 64, 44, 43, 68, 100, 68, 63, 63, 50, 67, 81, 72, 63, 57, 54, 70, 89, 74, 66, 59, 51, 67, 101, 70, 62, 56, 55, 58, 133, 60, 63, 68, 44, 103
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
