#include "AdnForme65.h"
#define combientaba 1000
#define combientabd 1000

// Génère les fichiers c.jo son "U" api 309
void genereFichierJo65(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>790)
position2=790;

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
127, 126, 128, 127, 129, 128, 136, 108, 136, 135, 141, 139, 141, 126, 128, 127, 131, 104, 105, 102, 136, 135, 142, 141, 148, 145, 147, 127, 131, 127, 131, 129, 131, 88, 93, 85, 142, 140, 151, 147, 155, 149, 151, 119, 123, 118, 127, 125, 131, 101, 103, 80, 89, 76, 96, 95, 147, 146, 158, 154, 161, 155, 155, 119, 122, 120, 138, 76, 83, 72, 157, 156, 167, 165, 171, 125, 142, 70, 81, 69, 101, 100, 133, 132, 161, 159, 170, 164, 172, 158, 160, 115, 131, 129, 137, 84, 86, 50, 72, 53, 98, 93, 135, 133, 154, 152, 164, 159, 172, 164, 175, 158, 163, 136, 140, 111, 124, 111, 134, 128, 139, 48, 67, 49, 95, 92, 158, 157, 165, 163, 173, 168, 174, 138, 140, 115, 130, 113, 138, 127, 142, 116, 116, 78, 80, 40, 66, 42, 97, 90, 140, 136, 167, 159, 177, 168, 180, 169, 176, 157, 162, 134, 144, 115, 136, 118, 142, 130, 139, 78, 80, 34, 65, 34, 98, 87, 150, 142, 177, 170, 184, 181, 185, 180, 184, 162, 167, 134, 150, 116, 144, 120, 151, 131, 141, 72, 73, 26, 62, 26, 98, 79, 151, 138, 183, 174, 194, 192, 194, 187, 190, 162, 170, 129, 149, 114, 141, 125, 148, 133, 136, 25, 56, 27, 94, 81, 151, 141, 188, 180, 198, 193, 195, 164, 172, 128, 147, 112, 138, 127, 148, 68, 72, 16, 57, 19, 92, 75, 149, 138, 184, 180, 208, 194, 202, 162, 174, 124, 144, 107, 132, 119, 139, 133, 134, 63, 75, 13, 60, 18, 96, 71, 151, 135, 186, 180, 203, 201, 211, 195, 203, 161, 174, 121, 142, 107, 130, 117, 139, 126, 131, 59, 69, 12, 58, 19, 98, 71, 152, 133, 187, 180, 210, 199, 204, 164, 172, 124, 137, 112, 127, 122, 136, 66, 73, 19, 59, 23, 94, 76, 148, 139, 184, 184, 214, 203, 210, 168, 175, 129, 139, 112, 126, 118, 135, 62, 78, 13, 64, 18, 98, 71, 150, 134, 182, 180, 214, 199, 210, 165, 178, 122, 143, 104, 131, 113, 140, 125, 130, 65, 82, 14, 71, 16, 102, 68, 149, 129, 181, 177, 213, 201, 210, 165, 179, 120, 143, 96, 132, 110, 141, 127, 129, 66, 85, 13, 73, 13, 102, 66, 149, 129, 183, 177, 210, 195, 206, 163, 178, 117, 146, 95, 137, 107, 143, 125, 129, 73, 87, 15, 72, 10, 102, 63, 153, 124, 185, 169, 199, 192, 199, 158, 171, 113, 146, 90, 140, 103, 146, 119, 134, 80, 85, 23, 71, 15, 100, 64, 154, 125, 188, 169, 200, 161, 169, 115, 146, 93, 142, 105, 149, 119, 137, 83, 84, 27, 72, 22, 102, 69, 154, 125, 188, 166, 197, 188, 190, 159, 166, 117, 148, 91, 144, 101, 148, 117, 139, 82, 83, 31, 71, 23, 101, 71, 155, 124, 187, 161, 193, 181, 185, 158, 162, 119, 147, 97, 145, 104, 153, 121, 146, 37, 72, 31, 106, 76, 159, 126, 189, 156, 194, 172, 190, 170, 172, 154, 156, 124, 143, 100, 143, 106, 150, 121, 146, 115, 118, 81, 88, 37, 76, 34, 107, 78, 156, 129, 183, 158, 188, 166, 185, 164, 177, 146, 159, 118, 141, 99, 137, 106, 146, 125, 145, 123, 126, 84, 94, 40, 77, 39, 102, 84, 145, 134, 167, 158, 172, 162, 177, 161, 173, 148, 158, 126, 138, 111, 131, 115, 137, 133, 139, 52, 75, 55, 105, 100, 148, 142, 163, 159, 164, 163, 168, 160, 170, 150, 159, 126, 139, 112, 133, 116, 139, 133, 142, 90, 93, 59, 83, 65, 112, 107, 147, 141, 156, 153, 154, 152, 161, 151, 167, 144, 159, 127, 139, 112, 128, 115, 133, 130, 140, 94, 95, 68, 86, 76, 115, 112, 144, 138, 150, 146, 155, 153, 162, 149, 156, 132, 136, 117, 123, 120, 140, 101, 104, 74, 99, 78, 120, 106, 139, 129, 143, 139, 155, 149, 167, 148, 162, 131, 139, 115, 119, 115, 133, 132, 142, 130, 134, 103, 112, 80, 105, 84, 119, 106, 131, 122, 132, 130, 153, 150, 165, 151, 159, 133, 137, 112, 116, 107, 145, 140, 142, 115, 117, 91, 105, 89, 113, 104, 122, 118, 164, 151, 155, 129, 131, 107, 116, 103, 122, 119, 150, 99, 100, 95, 105, 104, 155, 153, 157, 145, 145, 111, 113, 109, 151, 97, 104, 95, 109, 106, 148, 146, 150, 139, 140, 125, 127, 115, 118, 115, 147, 104, 110, 104, 115, 112, 124, 123, 141, 139, 142, 136, 138, 128, 130, 121, 123, 118, 122, 121, 140, 114, 117, 113, 119, 117, 136, 134, 137, 134, 135, 122, 133, 122, 123, 122, 129, 128
};





  int tabdurer[combientabd] =
    { 
6, 6, 25, 9, 9, 11, 63, 78, 80, 2, 12, 11, 9, 45, 9, 7, 10, 63, 6, 10, 63, 6, 14, 3, 11, 8, 7, 46, 8, 10, 9, 9, 6, 46, 8, 10, 63, 5, 11, 7, 11, 11, 5, 46, 8, 9, 11, 6, 8, 30, 5, 12, 8, 9, 14, 4, 48, 5, 10, 9, 11, 12, 4, 44, 8, 8, 27, 50, 7, 9, 67, 4, 13, 8, 9, 71, 35, 47, 8, 9, 14, 3, 16, 3, 30, 6, 10, 9, 10, 12, 5, 56, 16, 7, 8, 31, 4, 11, 9, 9, 12, 6, 15, 4, 14, 5, 11, 6, 11, 8, 10, 10, 8, 13, 7, 12, 10, 9, 12, 8, 11, 46, 8, 10, 12, 6, 34, 4, 12, 4, 11, 10, 8, 36, 5, 11, 10, 9, 12, 9, 10, 13, 3, 13, 4, 12, 9, 8, 13, 6, 15, 5, 12, 8, 10, 7, 11, 9, 8, 12, 7, 11, 8, 10, 10, 9, 13, 9, 9, 28, 3, 12, 10, 8, 13, 6, 14, 6, 13, 7, 12, 5, 9, 8, 7, 14, 7, 12, 8, 10, 10, 10, 12, 10, 9, 27, 3, 12, 9, 9, 12, 7, 13, 7, 12, 8, 11, 8, 5, 10, 6, 13, 7, 12, 8, 11, 10, 9, 13, 12, 7, 40, 10, 9, 13, 6, 14, 6, 13, 8, 14, 21, 5, 13, 7, 11, 8, 10, 10, 10, 12, 43, 4, 12, 10, 9, 12, 7, 13, 7, 13, 5, 26, 10, 7, 13, 7, 11, 8, 10, 10, 9, 12, 11, 3, 29, 6, 11, 10, 9, 12, 8, 12, 7, 13, 5, 13, 4, 10, 10, 8, 11, 7, 12, 8, 10, 10, 9, 11, 9, 7, 27, 6, 11, 10, 9, 12, 8, 12, 7, 13, 6, 27, 10, 7, 12, 7, 11, 8, 11, 11, 7, 12, 40, 6, 11, 10, 9, 13, 7, 13, 7, 15, 3, 26, 10, 7, 13, 7, 12, 7, 10, 9, 9, 13, 41, 6, 12, 9, 10, 12, 8, 12, 7, 14, 3, 27, 9, 8, 13, 6, 12, 8, 10, 10, 8, 12, 10, 7, 26, 7, 11, 10, 9, 12, 8, 12, 8, 13, 6, 25, 10, 7, 12, 7, 12, 8, 10, 10, 9, 12, 11, 5, 26, 7, 12, 9, 10, 11, 9, 12, 8, 12, 7, 23, 11, 7, 12, 8, 11, 9, 10, 10, 10, 11, 12, 8, 22, 7, 12, 9, 10, 12, 9, 12, 8, 12, 8, 16, 15, 7, 14, 8, 12, 8, 11, 10, 10, 12, 11, 9, 22, 6, 12, 9, 10, 12, 8, 13, 8, 12, 8, 13, 40, 7, 12, 9, 10, 11, 9, 12, 10, 11, 23, 4, 12, 10, 10, 11, 9, 12, 8, 12, 9, 12, 8, 8, 26, 6, 12, 8, 11, 10, 10, 11, 10, 10, 26, 4, 12, 9, 10, 12, 8, 12, 8, 12, 9, 11, 10, 9, 23, 7, 12, 9, 10, 11, 9, 11, 11, 9, 44, 9, 9, 12, 8, 12, 9, 11, 9, 11, 9, 10, 12, 5, 11, 4, 12, 8, 10, 10, 10, 10, 11, 9, 12, 4, 12, 6, 11, 9, 10, 11, 8, 12, 8, 11, 9, 10, 9, 10, 9, 8, 11, 7, 11, 8, 11, 10, 8, 11, 9, 10, 12, 4, 14, 5, 12, 9, 9, 12, 7, 14, 7, 11, 8, 9, 9, 9, 11, 8, 12, 7, 13, 8, 11, 9, 9, 11, 8, 8, 52, 10, 8, 14, 6, 14, 7, 13, 6, 11, 5, 8, 11, 9, 12, 7, 12, 9, 12, 9, 9, 12, 7, 10, 34, 5, 13, 9, 9, 14, 6, 15, 6, 13, 8, 7, 6, 11, 8, 10, 11, 8, 12, 8, 12, 9, 10, 12, 5, 10, 40, 3, 13, 10, 8, 16, 5, 14, 8, 13, 9, 23, 6, 11, 11, 7, 14, 7, 14, 11, 8, 35, 30, 7, 11, 10, 9, 12, 7, 13, 8, 12, 9, 23, 9, 10, 10, 9, 11, 9, 12, 9, 8, 26, 2, 15, 11, 7, 13, 7, 11, 10, 9, 12, 7, 12, 8, 12, 6, 29, 6, 11, 10, 8, 13, 5, 14, 8, 9, 43, 11, 7, 18, 5, 13, 9, 11, 11, 9, 13, 9, 61, 12, 6, 16, 5, 12, 9, 9, 13, 5, 36, 51, 7, 10, 16, 2, 71, 6, 9, 14, 4, 35, 8, 7, 55, 57, 8, 10, 13, 6, 66, 8, 7, 16, 5, 14, 6, 15, 7, 10, 58, 59, 10, 9, 13, 6, 16, 5, 47, 8, 9, 13, 4, 14, 6, 13, 7, 10, 13, 2, 49, 68, 7, 10, 11, 7, 64, 9, 12, 13, 4, 54, 78, 62, 9, 9, 101, 32
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
