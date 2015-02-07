#include "AdnForme69.h"
#define combientaba 1000
#define combientabd 1000

// Génère les fichiers c.jo son "A" api 
void genereFichierJo69(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>443)
position2=443;

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
131, 126, 129, 120, 134, 121, 131, 128, 129, 125, 128, 123, 129, 128, 134, 127, 131, 110, 139, 119, 134, 132, 135, 119, 136, 115, 143, 126, 139, 125, 128, 101, 140, 112, 141, 128, 135, 126, 132, 123, 139, 134, 136, 99, 142, 114, 142, 129, 133, 125, 146, 126, 137, 83, 137, 105, 132, 131, 144, 112, 149, 110, 153, 129, 133, 92, 132, 109, 149, 119, 153, 110, 159, 127, 133, 85, 151, 104, 153, 108, 165, 105, 153, 128, 138, 68, 155, 101, 147, 103, 153, 114, 147, 133, 139, 70, 162, 110, 155, 106, 159, 120, 157, 134, 140, 71, 157, 116, 157, 106, 148, 117, 150, 132, 139, 73, 152, 118, 157, 110, 146, 118, 150, 130, 134, 70, 156, 122, 159, 114, 147, 124, 152, 133, 139, 68, 151, 128, 132, 125, 163, 110, 146, 118, 153, 131, 135, 62, 144, 127, 135, 125, 169, 106, 151, 114, 159, 134, 138, 59, 145, 124, 136, 126, 169, 105, 154, 112, 158, 132, 137, 56, 144, 123, 124, 122, 166, 109, 153, 115, 157, 65, 150, 112, 159, 114, 154, 117, 158, 66, 147, 109, 151, 116, 152, 115, 158, 64, 141, 107, 151, 114, 154, 112, 161, 126, 129, 65, 141, 100, 158, 108, 167, 101, 163, 131, 137, 53, 143, 83, 149, 117, 164, 91, 168, 153, 156, 129, 131, 44, 141, 83, 143, 140, 153, 123, 155, 97, 171, 148, 170, 119, 132, 30, 130, 85, 160, 118, 149, 112, 159, 151, 170, 119, 137, 24, 129, 93, 144, 141, 157, 118, 149, 116, 162, 146, 166, 112, 127, 39, 126, 118, 138, 130, 179, 132, 151, 136, 161, 113, 120, 48, 145, 114, 181, 118, 163, 109, 139, 138, 142, 126, 129, 124, 125, 55, 156, 110, 169, 129, 155, 102, 134, 117, 147, 123, 139, 54, 151, 103, 162, 111, 143, 84, 130, 113, 144, 130, 147, 123, 127, 50, 156, 105, 157, 109, 140, 88, 139, 122, 153, 136, 150, 124, 129, 59, 157, 103, 152, 116, 138, 97, 139, 122, 148, 130, 151, 120, 124, 72, 156, 101, 158, 137, 143, 119, 132, 99, 142, 116, 154, 124, 155, 110, 128, 77, 145, 113, 145, 120, 124, 113, 137, 135, 141, 119, 128, 96, 145, 121, 145, 133, 137, 117, 132, 113, 136, 128, 138, 124, 130, 104, 142, 123, 139, 128, 136, 117, 134, 118, 136, 127, 134, 125, 139, 125, 133, 125, 132, 113, 141, 124, 131, 129, 133, 123, 133, 122, 132, 126, 131, 124, 133, 127, 129, 128, 129, 120, 132, 125, 130, 126, 129, 126, 129, 127, 128, 127, 129, 127, 128, 127, 128
};





  int tabdurer[combientabd] =
    { 
22, 24, 20, 24, 27, 27, 30, 33, 3, 28, 20, 23, 26, 22, 27, 31, 26, 33, 29, 26, 31, 17, 16, 26, 22, 26, 26, 25, 20, 27, 11, 28, 28, 25, 27, 24, 22, 20, 21, 22, 28, 22, 17, 64, 31, 26, 35, 58, 16, 25, 30, 27, 18, 32, 31, 24, 31, 8, 23, 28, 27, 27, 28, 28, 14, 33, 33, 29, 48, 31, 27, 29, 28, 28, 12, 31, 29, 27, 57, 27, 27, 25, 28, 23, 15, 28, 32, 27, 58, 28, 28, 24, 28, 21, 14, 31, 31, 27, 60, 28, 27, 24, 26, 24, 13, 30, 32, 25, 59, 28, 26, 23, 26, 23, 15, 32, 32, 27, 56, 30, 25, 23, 27, 25, 11, 31, 33, 27, 56, 29, 24, 23, 25, 24, 14, 30, 34, 24, 14, 15, 28, 30, 25, 22, 27, 25, 13, 31, 33, 21, 18, 16, 28, 30, 24, 24, 26, 25, 13, 30, 33, 22, 18, 18, 27, 29, 24, 25, 28, 23, 14, 32, 35, 28, 10, 11, 31, 30, 26, 26, 29, 72, 34, 35, 39, 33, 28, 26, 28, 74, 35, 34, 39, 34, 27, 30, 30, 74, 32, 31, 47, 29, 30, 30, 33, 35, 11, 33, 32, 29, 44, 30, 27, 29, 33, 44, 12, 36, 28, 26, 56, 27, 24, 27, 32, 22, 12, 29, 6, 32, 28, 24, 33, 12, 20, 22, 22, 27, 28, 19, 21, 27, 15, 30, 29, 22, 65, 27, 21, 26, 28, 15, 22, 30, 18, 32, 31, 23, 33, 10, 24, 26, 26, 24, 28, 20, 21, 30, 16, 31, 35, 13, 22, 16, 31, 30, 26, 37, 34, 69, 15, 30, 32, 23, 57, 28, 26, 28, 32, 11, 17, 28, 15, 22, 8, 34, 30, 25, 54, 30, 22, 26, 25, 20, 26, 22, 25, 58, 30, 24, 60, 29, 21, 27, 26, 19, 26, 17, 22, 27, 11, 30, 30, 24, 57, 29, 21, 27, 28, 20, 26, 21, 19, 27, 13, 30, 30, 24, 37, 50, 23, 28, 27, 23, 26, 20, 25, 29, 11, 30, 28, 26, 29, 24, 15, 24, 21, 24, 27, 21, 26, 24, 22, 27, 18, 28, 29, 24, 28, 67, 15, 24, 74, 27, 28, 35, 16, 31, 30, 22, 26, 26, 16, 26, 22, 26, 32, 25, 53, 45, 21, 31, 31, 22, 27, 23, 20, 25, 25, 21, 25, 26, 20, 19, 28, 24, 22, 22, 20, 26, 27, 28, 27, 10, 22, 26, 25, 26, 27, 24, 22, 23, 26, 34, 29, 8, 18, 29, 30, 30, 31, 57, 25, 26, 25, 25, 26, 22, 17, 22, 35, 15, 28
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
