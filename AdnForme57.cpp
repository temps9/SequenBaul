#include "AdnForme57.h"
#define combientaba 7024
#define combientabd 7024

// Génère les fichiers c.jo et c.joa
void genereFichierJo57(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{


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

//int position1;
int position2;

position2 = quelpiano7 + quelpiano8;
if(position2>280)
position2=280;

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

int pass1=0;
int pass2=0;
//multiplie

    for(int laforcebbase = quelpiano10; laforcebbase > 0; laforcebbase--)
     {


// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

// reprise du bruit entrer
  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(6));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(3));
}




// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

/******************************/



  int tabamplitude2[2000] =
    { 
128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 129, 126, 129, 81, 82, 80, 114, 106, 174, 145, 207, 183, 208, 172, 183, 163, 170, 134, 142, 98, 107, 65, 67, 64, 72, 63, 76, 65, 91, 86, 113, 104, 124, 121, 138, 132, 169, 168, 176, 175, 195, 183, 192, 182, 196, 162, 176, 150, 159, 130, 136, 110, 116, 87, 91, 74, 78, 75, 77, 72, 74, 68, 77, 76, 85, 82, 90, 89, 101, 96, 127, 125, 140, 139, 144, 143, 163, 162, 170, 169, 172, 171, 173, 171, 173, 168, 170, 165, 166, 159, 161, 154, 156, 151, 152, 148, 148, 139, 140, 133, 136, 122, 123, 110, 112, 97, 99, 90, 91, 88, 91, 85, 89, 87, 88, 86, 91, 89, 168, 165, 167, 166, 167, 164, 165, 91, 91, 88, 89, 88, 91, 90, 163, 162, 163, 160, 161, 148, 148, 96, 97, 95, 99, 98, 152, 151, 156, 155, 157, 100, 151, 150, 152, 151, 151, 107, 108, 105, 107, 106, 148, 147, 148, 146, 147, 108, 110, 109, 144, 143, 145, 144, 145, 112, 142, 114, 115, 114, 140, 139, 140, 138, 139, 116, 117, 116, 138, 137, 138, 118, 119, 118, 136, 135, 136, 132, 133, 119, 120, 119, 135, 120, 134, 133, 134, 122, 132, 132, 133, 132, 133, 122, 131, 131, 132, 123, 124, 123, 131, 124, 131, 130, 131, 130, 130, 126, 126, 124, 130, 129, 129, 126, 129, 124, 126, 125, 126, 125, 126, 123, 127, 126, 126, 125, 127, 123, 124, 123, 127, 126, 127, 125, 128, 126, 127, 125, 128, 126, 127, 127, 131, 130, 131, 127, 129, 128, 129, 127, 129, 128, 131, 127, 130, 129, 131, 130, 132, 130, 130, 128, 131, 128, 130, 129, 130, 128, 129, 128, 130, 129, 130, 128, 130, 130, 130, 127, 129, 128, 129, 128, 128, 127, 129, 126, 128, 127, 128, 127, 127, 127, 128, 126, 127, 125, 127, 126, 127, 124, 127, 125, 127, 125, 126, 125, 127, 126, 127, 125, 126, 125, 127, 126, 127, 126, 126, 125, 128, 127, 127, 126, 127, 126, 127, 127, 128, 127, 128, 126, 129, 128, 129, 127, 130, 129, 130, 129, 130, 129, 130, 128, 131, 130, 130, 128, 130, 128, 129, 128, 129, 128, 129, 127, 129, 126, 127, 126, 127, 125, 127, 125, 126, 125, 127, 126, 126, 124, 126, 125, 126, 125, 127, 125, 126, 125, 127, 126, 127, 126, 128, 126, 127, 126, 128, 127, 129, 127, 130, 129, 130, 128, 130, 129, 130, 128, 129, 128, 129, 127, 128, 127, 128, 126, 127, 126, 127, 126, 127, 126, 127, 126, 127, 126, 127, 126, 127, 126, 128, 127, 129, 128, 129, 128, 129, 127, 128, 127, 127, 126, 127, 126, 127, 126, 127, 126, 127, 127, 128, 128, 129, 128, 129, 128, 129, 128, 129, 127, 128, 127, 128, 126, 127, 126, 127, 126, 127, 126, 127, 127, 129, 128, 129, 128, 129, 128, 129, 128, 129, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 129, 128, 129, 127, 129, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 129, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 127, 128, 128
};




  int tabdurer2[2000] =
    { 
8, 7, 8, 7, 7, 8, 7, 8, 7, 8, 4, 8, 8, 38, 6, 4, 38, 7, 26, 12, 19, 21, 14, 17, 7, 10, 7, 25, 9, 32, 9, 21, 8, 8, 10, 19, 11, 11, 38, 7, 14, 9, 15, 7, 12, 9, 21, 5, 13, 9, 18, 10, 10, 11, 12, 35, 10, 26, 21, 39, 8, 21, 11, 32, 10, 24, 10, 9, 6, 11, 15, 10, 13, 16, 12, 5, 14, 7, 16, 8, 87, 6, 29, 7, 11, 5, 61, 2, 20, 8, 12, 5, 9, 13, 13, 24, 10, 21, 3, 12, 8, 17, 7, 12, 6, 14, 5, 32, 6, 14, 8, 38, 8, 26, 8, 43, 7, 25, 7, 8, 10, 16, 14, 7, 9, 10, 25, 10, 336, 10, 15, 6, 6, 10, 6, 318, 9, 31, 11, 23, 18, 4, 346, 24, 11, 25, 7, 95, 8, 228, 16, 29, 63, 7, 261, 6, 34, 10, 22, 409, 354, 18, 15, 33, 15, 321, 4, 33, 11, 26, 373, 10, 8, 28, 7, 343, 17, 7, 344, 9, 31, 22, 5, 413, 397, 391, 3, 20, 371, 19, 18, 21, 14, 350, 4, 21, 326, 18, 57, 330, 11, 69, 406, 6, 22, 70, 4, 264, 19, 16, 421, 338, 380, 3, 69, 442, 245, 46, 76, 8, 18, 338, 313, 33, 145, 295, 6, 68, 461, 392, 364, 8, 13, 3, 60, 136, 42, 106, 502, 3, 63, 98, 12, 46, 6, 4, 3, 2, 10, 11, 25, 3, 4, 20, 13, 21, 7, 12, 37, 2, 3, 19, 22, 11, 7, 11, 21, 12, 3, 7, 9, 10, 5, 10, 30, 3, 3, 9, 29, 4, 24, 9, 11, 5, 8, 2, 14, 6, 7, 7, 27, 20, 3, 3, 7, 19, 13, 4, 10, 2, 12, 8, 3, 5, 3, 9, 7, 3, 4, 2, 5, 10, 9, 11, 17, 12, 15, 3, 6, 6, 3, 8, 3, 13, 7, 13, 5, 15, 16, 7, 27, 29, 12, 8, 31, 2, 6, 9, 14, 11, 3, 3, 4, 7, 11, 5, 15, 2, 7, 5, 3, 11, 9, 10, 6, 5, 10, 5, 30, 11, 8, 13, 14, 2, 23, 38, 4, 28, 6, 6, 22, 5, 6, 18, 30, 18, 21, 11, 6, 11, 23, 23, 6, 61, 6, 13, 10, 13, 34, 32, 3, 2, 17, 3, 6, 10, 15, 2, 9, 9, 21, 10, 19, 4, 31, 11, 4, 10, 8, 16, 3, 2, 42, 17, 32, 16, 70, 80, 7, 16, 17, 2, 14, 25, 4, 12, 14, 22, 32, 12, 30, 47, 5, 18, 3, 2, 16, 77, 8, 36, 6, 41, 8, 7, 10, 20, 57, 6, 201, 4, 88, 32, 9, 72, 12, 25, 63, 12, 16, 11, 113, 30, 13, 2, 17, 93, 24, 85, 20, 15, 37, 5, 76, 9, 4, 129, 3, 16, 3, 112, 18, 37, 6, 26, 16, 3, 13, 153, 146, 19, 3, 4, 24, 11, 5, 39, 3, 553, 14, 12, 403, 390, 431, 387, 414, 396, 6, 4, 3, 31, 9, 16, 26, 17, 18, 37, 20, 13, 35, 12, 6, 3, 33, 4, 6, 3, 16, 8, 22, 2, 3, 18, 26, 40, 3, 14, 17, 92, 3, 128, 5, 55, 9, 24, 8, 18, 3, 24, 16, 2, 61, 7, 37, 63, 6, 2, 127, 27, 27, 11, 18, 3, 4, 3, 7, 13, 263, 2, 3, 37, 6, 2, 3, 4, 61, 9, 4, 6, 312, 3, 25, 8, 8, 35, 7, 286, 56, 3, 14, 4, 3, 19, 379, 3, 5, 6, 333, 40, 3, 3, 4, 2, 3, 4, 8, 372, 15, 3, 13, 23, 3, 351, 3, 4, 3, 3, 3, 2, 14, 358, 3, 6, 4, 9, 3, 445, 333, 6, 23, 3, 3, 12, 395, 3, 5, 3, 12, 338, 6, 10, 3, 3, 3, 5, 6, 30, 371, 8, 3, 12, 364, 3, 4, 3, 3, 10, 17, 389, 3, 3, 17, 381, 30, 35, 12, 31, 24, 17, 29, 29, 21, 28, 15, 27, 4, 18, 16, 12, 3, 11, 23, 39, 9, 8, 23, 8, 10, 2, 7, 9, 12, 19, 9, 6, 16, 22, 5, 10, 15, 3, 38, 8, 14, 37, 4, 2, 5, 15, 16, 17, 28, 2, 15, 12, 13, 32, 13, 7, 8, 26, 31, 16, 12, 47, 15, 20, 6, 5, 21, 2, 23, 5, 14, 36, 22, 10, 19, 2, 17, 5, 13, 10, 9, 3, 24, 2, 33, 6, 14, 13, 7, 6, 15, 10, 3, 22, 16, 7, 25, 4, 41, 8, 6, 9, 22, 37, 19, 26, 20, 10, 7, 11, 24, 22, 11, 14
};





/******************************/
  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(6));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(3));
}

// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(6));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(3));
}

// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

  for(int positiontab = 0; positiontab<775; positiontab++)
   {

        if(positiontab%2)
                {
	pass1 = tabamplitude2[positiontab] - int(tabamplitude2[positiontab] * 0.01 * quelpiano2);
	pass2 = int(tabdurer2[positiontab] * 0.01 * quelpiano3);

	}
        else
                {
	pass1 = tabamplitude2[positiontab] + int(tabamplitude2[positiontab] * 0.01 * quelpiano4);
	pass2 = int(tabdurer2[positiontab] * 0.01 * quelpiano5);
	}

	if(pass1<16)
	pass1=16;

	if(pass2<2)
	pass2=2;

	if(pass1 >239)
	pass1=239;

	if(pass2>250)
	pass2=250;

        fprintf(fichierjo,  "%c%c",    (char)(pass1), (char)(pass2));

}

/******************************/
  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(6));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(3));
}

// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(6));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(3));
}

// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

  for(int positiontab = 0; positiontab<775; positiontab++)
   {

        if(positiontab%2)
                {
	pass1 = tabamplitude2[positiontab] - int(tabamplitude2[positiontab] * 0.01 * quelpiano2);
	pass2 = int(tabdurer2[positiontab] * 0.01 * quelpiano3);

	}
        else
                {
	pass1 = tabamplitude2[positiontab] + int(tabamplitude2[positiontab] * 0.01 * quelpiano4);
	pass2 = int(tabdurer2[positiontab] * 0.01 * quelpiano5);
	}

	if(pass1<16)
	pass1=16;

	if(pass2<2)
	pass2=2;

	if(pass1 >239)
	pass1=239;

	if(pass2>250)
	pass2=250;

        fprintf(fichierjo,  "%c%c",    (char)(pass1), (char)(pass2));

}
/******************************/
  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(6));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(3));
}

// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

  for(int duree = quelpiano11; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(6));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(3));
}

// blanc acoustique



    for(int pourquelpiano9 = 100; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)129, (char)250);

     }

  for(int positiontab = 0; positiontab<775; positiontab++)
   {

        if(positiontab%2)
                {
	pass1 = tabamplitude2[positiontab] - int(tabamplitude2[positiontab] * 0.01 * quelpiano2);
	pass2 = int(tabdurer2[positiontab] * 0.01 * quelpiano3);

	}
        else
                {
	pass1 = tabamplitude2[positiontab] + int(tabamplitude2[positiontab] * 0.01 * quelpiano4);
	pass2 = int(tabdurer2[positiontab] * 0.01 * quelpiano5);
	}

	if(pass1<16)
	pass1=16;

	if(pass2<2)
	pass2=2;

	if(pass1 >239)
	pass1=239;

	if(pass2>250)
	pass2=250;

        fprintf(fichierjo,  "%c%c",    (char)(pass1), (char)(pass2));

}



  for(int duree = quelpiano9; duree>0; duree--)
   {

        fprintf(fichierjo,  "%c%c",    (char)(quelpiano12), (char)(quelpiano13));
        fprintf(fichierjo,  "%c%c",    (char)(quelpiano14), (char)(quelpiano15));
}


// fin  multiplie
   }
 
  fclose(fichierjo);

       }

// fin de la zone de travail de l'apprenant
