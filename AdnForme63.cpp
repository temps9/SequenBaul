#include "AdnForme63.h"
#define combientaba 6024
#define combientabd 6024

// Génère les fichiers c.jo et c.joa
void genereFichierJo63(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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
if(position2>798)
position2=798;

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


//voyelle ai

  int tabamplitude[combientaba] =
    { 
135, 134, 135, 134, 135, 132, 132, 131, 141, 140, 141, 128, 129, 128, 131, 125, 126, 124, 125, 124, 148, 147, 149, 147, 150, 120, 124, 122, 152, 124, 141, 120, 123, 120, 122, 118, 119, 117, 118, 117, 157, 156, 158, 156, 159, 112, 117, 112, 118, 116, 160, 125, 137, 112, 118, 115, 116, 114, 129, 117, 118, 111, 112, 110, 112, 110, 112, 110, 112, 109, 113, 111, 162, 161, 165, 164, 167, 164, 169, 103, 111, 102, 173, 113, 139, 103, 124, 106, 159, 103, 105, 103, 105, 103, 106, 104, 106, 105, 169, 168, 173, 171, 175, 172, 177, 172, 178, 96, 103, 95, 179, 103, 121, 97, 111, 99, 128, 99, 105, 95, 98, 94, 98, 95, 99, 96, 100, 95, 100, 98, 180, 178, 184, 179, 186, 178, 188, 90, 94, 90, 189, 109, 134, 87, 107, 89, 136, 90, 97, 88, 90, 87, 90, 88, 92, 87, 93, 86, 190, 185, 191, 188, 193, 188, 193, 82, 89, 78, 172, 168, 199, 111, 139, 76, 119, 93, 173, 83, 93, 84, 87, 79, 86, 79, 86, 80, 87, 80, 90, 77, 197, 191, 199, 195, 202, 195, 204, 71, 87, 67, 192, 186, 205, 96, 125, 76, 113, 86, 174, 78, 87, 78, 81, 73, 79, 73, 79, 73, 80, 76, 89, 72, 197, 194, 206, 202, 209, 201, 212, 63, 79, 63, 204, 196, 212, 86, 93, 71, 88, 82, 166, 76, 78, 67, 73, 67, 73, 68, 76, 69, 81, 73, 211, 202, 214, 207, 216, 207, 217, 65, 77, 52, 213, 188, 221, 76, 148, 55, 169, 71, 171, 71, 79, 65, 66, 64, 67, 64, 69, 67, 73, 71, 216, 209, 221, 212, 224, 210, 225, 59, 69, 49, 218, 198, 223, 70, 101, 61, 123, 67, 156, 65, 72, 62, 64, 58, 63, 58, 64, 60, 64, 61, 73, 67, 218, 210, 226, 217, 229, 216, 232, 50, 68, 42, 225, 204, 228, 69, 90, 56, 134, 73, 183, 69, 74, 59, 62, 53, 60, 55, 62, 61, 224, 217, 230, 221, 233, 219, 236, 51, 60, 45, 236, 209, 226, 58, 91, 69, 111, 97, 117, 51, 56, 52, 58, 54, 227, 221, 233, 225, 236, 224, 237, 48, 56, 43, 232, 208, 228, 67, 70, 61, 79, 74, 105, 59, 70, 54, 56, 47, 55, 48, 56, 52, 233, 222, 239, 224, 243, 221, 244, 41, 216, 201, 230, 84, 101, 57, 83, 74, 93, 73, 88, 50, 52, 48, 54, 50, 230, 228, 235, 231, 238, 228, 237, 44, 234, 206, 232, 91, 127, 59, 101, 61, 83, 66, 69, 54, 55, 47, 52, 47, 54, 51, 94, 93, 236, 225, 240, 227, 243, 224, 239, 37, 225, 190, 232, 68, 151, 50, 81, 57, 114, 73, 82, 48, 52, 49, 53, 52, 58, 52, 234, 228, 236, 231, 239, 42, 223, 171, 222, 62, 149, 58, 136, 63, 109, 76, 85, 51, 54, 51, 58, 56, 58, 57, 232, 224, 238, 227, 240, 225, 237, 47, 219, 178, 190, 84, 114, 75, 90, 70, 86, 75, 103, 58, 61, 52, 58, 51, 61, 54, 59, 56, 231, 230, 231, 60, 222, 69, 124, 74, 89, 68, 95, 56, 58, 55, 60, 57, 61, 58, 225, 218, 232, 220, 233, 218, 228, 141, 148, 84, 194, 125, 135, 84, 129, 93, 97, 92, 103, 72, 138, 80, 84, 58, 68, 58, 65, 63, 68, 59, 111, 86, 219, 218, 225, 220, 224, 218, 219, 187, 214, 109, 191, 101, 138, 91, 101, 81, 114, 101, 136, 64, 72, 62, 70, 62, 66, 62, 67, 64, 219, 215, 219, 212, 219, 194, 207, 111, 172, 95, 127, 75, 111, 90, 119, 106, 121, 75, 81, 69, 76, 72, 90, 88, 211, 205, 209, 191, 199, 123, 152, 96, 104, 80, 91, 85, 87, 81, 117, 86, 107, 103, 199, 196, 201, 176, 186, 93, 103, 86, 98, 89, 91, 88, 90, 88, 183, 167, 189, 183, 189, 157, 183, 126, 148, 120, 138, 106, 109, 107, 112, 104, 107, 104, 111, 110, 168, 160, 168, 166, 179, 158, 171, 168, 169, 148, 166, 133, 138, 109, 114, 113, 126, 124, 133, 130, 142, 135, 140, 138, 148, 137, 143, 138, 148, 126, 135, 125, 131, 124, 136, 123, 131, 114, 121, 113, 118, 113, 129, 126, 138, 133, 146, 134, 152, 142, 147, 144, 152, 142, 149, 141, 146, 134, 135, 129, 133, 129, 142, 139, 140, 138, 142, 136, 140, 133, 136, 129, 134, 131, 136, 132, 136, 134, 137, 131, 132, 129, 130, 129, 132, 131, 132, 129, 130, 129, 131, 128, 130, 129, 131, 130, 134, 132, 136, 135, 137, 135, 137, 135, 136, 135, 136, 135, 138, 136, 137, 136, 137, 135, 136, 134, 135, 134, 135, 128

};





  int tabdurer[combientabd] =
    { 
10, 11, 6, 5, 15, 46, 49, 37, 95, 6, 7, 17, 4, 36, 22, 64, 10, 35, 9, 5, 54, 6, 24, 5, 7, 16, 21, 6, 13, 11, 10, 13, 6, 22, 8, 39, 6, 37, 10, 7, 52, 9, 6, 7, 6, 15, 7, 7, 8, 4, 21, 13, 8, 11, 8, 7, 6, 6, 10, 13, 4, 23, 5, 8, 6, 9, 7, 7, 7, 7, 9, 6, 21, 6, 10, 7, 7, 8, 8, 16, 7, 8, 32, 12, 9, 11, 16, 9, 12, 37, 6, 9, 7, 6, 9, 6, 9, 7, 25, 4, 8, 6, 8, 7, 6, 8, 5, 15, 6, 6, 33, 14, 8, 10, 17, 10, 13, 14, 6, 10, 7, 7, 8, 7, 7, 7, 6, 8, 9, 3, 28, 4, 8, 7, 8, 6, 7, 15, 5, 7, 32, 13, 8, 11, 17, 8, 11, 12, 8, 22, 7, 6, 11, 6, 7, 7, 9, 6, 18, 8, 9, 8, 9, 7, 5, 16, 5, 6, 16, 4, 12, 14, 8, 11, 12, 10, 12, 12, 7, 8, 5, 8, 7, 8, 8, 8, 7, 6, 9, 6, 18, 7, 11, 6, 7, 8, 5, 15, 6, 7, 16, 7, 10, 14, 7, 11, 16, 8, 11, 12, 6, 9, 4, 8, 7, 8, 8, 6, 9, 5, 8, 8, 17, 5, 12, 6, 8, 7, 7, 14, 8, 6, 18, 7, 7, 15, 5, 11, 16, 5, 14, 21, 5, 9, 8, 7, 9, 6, 7, 7, 9, 6, 18, 7, 10, 6, 9, 6, 6, 14, 6, 7, 15, 9, 9, 13, 10, 11, 12, 11, 11, 14, 8, 13, 6, 6, 6, 8, 9, 7, 7, 5, 22, 6, 8, 8, 7, 7, 7, 14, 5, 7, 15, 8, 9, 15, 7, 12, 15, 9, 10, 12, 6, 8, 5, 8, 6, 7, 8, 7, 8, 6, 8, 5, 17, 6, 8, 7, 7, 7, 6, 15, 6, 7, 15, 9, 9, 15, 7, 13, 13, 8, 11, 13, 4, 9, 6, 8, 8, 7, 10, 3, 41, 5, 9, 7, 8, 7, 7, 16, 5, 6, 15, 8, 9, 19, 9, 9, 12, 8, 10, 38, 9, 6, 8, 9, 38, 6, 8, 7, 7, 8, 6, 16, 5, 6, 15, 8, 7, 20, 6, 9, 17, 6, 10, 12, 7, 9, 5, 8, 8, 7, 8, 7, 39, 6, 7, 8, 7, 8, 6, 23, 16, 7, 9, 15, 6, 10, 10, 14, 11, 9, 8, 24, 6, 7, 8, 8, 45, 5, 10, 7, 7, 7, 6, 24, 16, 7, 8, 17, 8, 11, 10, 16, 10, 10, 4, 12, 3, 9, 7, 7, 9, 5, 24, 2, 15, 6, 7, 7, 8, 7, 6, 22, 16, 8, 9, 14, 9, 12, 10, 14, 12, 11, 7, 21, 9, 6, 9, 4, 8, 7, 31, 5, 8, 7, 6, 35, 14, 9, 8, 15, 11, 10, 11, 14, 11, 10, 7, 22, 8, 6, 10, 5, 6, 4, 30, 5, 8, 7, 7, 8, 6, 24, 16, 11, 6, 13, 8, 10, 7, 13, 13, 8, 9, 12, 4, 9, 6, 8, 8, 8, 8, 6, 48, 8, 6, 34, 15, 34, 10, 11, 7, 20, 13, 33, 6, 7, 9, 6, 7, 8, 38, 5, 9, 6, 8, 8, 5, 12, 4, 10, 12, 18, 7, 9, 10, 9, 6, 6, 6, 9, 11, 12, 6, 18, 9, 8, 9, 4, 8, 7, 11, 8, 21, 5, 11, 8, 7, 7, 4, 11, 7, 12, 11, 15, 9, 11, 7, 11, 16, 7, 10, 23, 7, 8, 8, 7, 9, 5, 9, 6, 53, 8, 5, 9, 6, 15, 9, 13, 10, 13, 12, 12, 10, 9, 14, 8, 10, 12, 9, 17, 12, 8, 20, 5, 66, 19, 8, 15, 8, 16, 9, 16, 9, 17, 15, 13, 6, 11, 37, 11, 11, 5, 41, 7, 20, 34, 8, 38, 11, 27, 18, 21, 8, 9, 11, 13, 60, 12, 15, 15, 7, 15, 10, 14, 9, 11, 14, 35, 9, 10, 8, 12, 7, 10, 18, 5, 57, 10, 12, 8, 14, 18, 24, 11, 3, 16, 12, 23, 10, 45, 15, 7, 32, 7, 12, 8, 15, 21, 14, 6, 11, 32, 12, 10, 9, 13, 12, 14, 9, 11, 10, 13, 9, 13, 13, 12, 14, 14, 33, 10, 15, 8, 12, 11, 15, 12, 12, 8, 15, 12, 11, 11, 11, 43, 6, 21, 11, 25, 57, 25, 7, 12, 12, 13, 10, 15, 10, 11, 14, 11, 15, 12, 16, 8, 10, 20, 3, 15, 11, 8, 14, 3, 3, 29, 15, 14, 27, 25, 12, 11, 12, 3, 18, 9, 51, 14, 15, 9, 13, 8, 15, 16, 4, 16, 33, 17, 6, 15, 7, 38, 11, 10, 23, 9, 134, 170
};

pass1=0;
pass2=0;



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



    for(int pourquelpiano9 = quelpiano9; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)130, (char)250);

     }

// fin  multiplie
   }
 
  fclose(fichierjo);

       }

// fin de la zone de travail de l'apprenant