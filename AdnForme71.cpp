#include "AdnForme71.h"
#define combientaba 1000
#define combientabd 1000

// Génère les fichiers c.jo son "A" api 
void genereFichierJo71(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>316)
position2=316;

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



// son "e" api 310
  int tabamplitude[combientaba] =
    { 
136, 107, 143, 115, 142, 93, 155, 115, 147, 83, 161, 113, 151, 72, 169, 114, 160, 65, 173, 112, 162, 57, 173, 111, 163, 55, 174, 118, 160, 55, 170, 121, 149, 55, 167, 122, 153, 59, 176, 112, 163, 59, 180, 98, 171, 59, 187, 94, 175, 59, 186, 94, 168, 58, 187, 98, 163, 62, 195, 97, 174, 57, 201, 82, 178, 51, 206, 80, 185, 47, 210, 78, 186, 45, 211, 88, 188, 46, 212, 96, 188, 43, 203, 88, 176, 41, 198, 90, 178, 39, 197, 96, 181, 38, 198, 98, 178, 34, 203, 99, 182, 32, 206, 97, 188, 30, 208, 94, 198, 29, 212, 91, 206, 27, 215, 87, 211, 25, 218, 87, 214, 23, 220, 73, 212, 21, 223, 63, 213, 19, 226, 65, 212, 16, 228, 63, 207, 20, 228, 69, 195, 27, 221, 82, 146, 145, 160, 30, 220, 82, 208, 24, 226, 45, 210, 24, 226, 47, 200, 28, 223, 51, 204, 26, 225, 44, 198, 35, 221, 40, 187, 41, 219, 43, 198, 172, 175, 45, 213, 50, 188, 138, 169, 43, 206, 63, 161, 129, 171, 48, 195, 75, 152, 135, 171, 64, 191, 95, 144, 143, 165, 68, 190, 90, 147, 144, 145, 57, 197, 84, 154, 130, 152, 55, 197, 81, 154, 129, 171, 63, 197, 93, 154, 126, 171, 64, 194, 91, 149, 125, 170, 72, 185, 95, 136, 119, 163, 80, 178, 105, 129, 126, 152, 80, 169, 103, 143, 84, 166, 109, 137, 85, 162, 112, 140, 88, 159, 107, 126, 125, 126, 123, 140, 90, 158, 113, 129, 125, 142, 98, 152, 117, 126, 125, 140, 105, 147, 117, 122, 120, 132, 109, 143, 126, 138, 121, 139, 125, 132, 116, 117, 116, 131, 119, 122, 121, 126, 118, 129, 128, 129, 124, 127, 123, 128, 124, 129, 125, 127, 124, 125, 124, 127, 124, 127, 126
};





  int tabdurer[combientabd] =
    { 
108, 73, 66, 70, 98, 81, 68, 72, 91, 83, 67, 74, 88, 85, 68, 81, 84, 80, 75, 82, 82, 78, 71, 84, 76, 79, 71, 84, 78, 74, 70, 78, 74, 83, 66, 62, 75, 98, 62, 64, 69, 104, 62, 67, 66, 99, 63, 71, 68, 92, 63, 74, 64, 90, 62, 70, 74, 86, 63, 65, 70, 94, 65, 63, 70, 97, 64, 64, 73, 95, 61, 68, 74, 95, 61, 68, 73, 94, 63, 71, 67, 104, 62, 70, 68, 104, 61, 71, 67, 107, 63, 70, 69, 108, 63, 71, 66, 109, 63, 71, 77, 100, 67, 70, 84, 97, 63, 72, 86, 95, 63, 74, 85, 97, 62, 76, 88, 94, 66, 75, 86, 96, 67, 78, 87, 102, 65, 74, 87, 107, 69, 70, 91, 107, 67, 74, 95, 109, 66, 73, 94, 120, 67, 76, 65, 16, 40, 102, 73, 91, 112, 95, 68, 91, 107, 102, 72, 78, 127, 103, 75, 79, 131, 99, 76, 79, 120, 113, 78, 80, 84, 153, 82, 75, 78, 48, 21, 96, 78, 75, 71, 52, 41, 90, 79, 72, 68, 44, 51, 83, 93, 70, 70, 39, 58, 85, 105, 71, 75, 21, 55, 135, 72, 71, 88, 38, 25, 134, 73, 72, 69, 59, 47, 109, 75, 70, 72, 52, 62, 101, 80, 72, 65, 50, 66, 109, 79, 73, 64, 47, 68, 118, 77, 71, 62, 46, 68, 135, 74, 75, 62, 37, 77, 136, 74, 78, 180, 134, 79, 78, 192, 124, 77, 91, 196, 115, 82, 88, 75, 3, 8, 39, 94, 93, 90, 86, 88, 52, 87, 98, 89, 91, 84, 38, 114, 97, 92, 90, 66, 51, 114, 96, 110, 92, 203, 149, 96, 141, 212, 90, 7, 3, 97, 110, 89, 66, 95, 88, 107, 2, 9, 87, 104, 95, 115, 101, 77, 116, 62, 127, 129, 16, 105, 92, 140, 91
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
