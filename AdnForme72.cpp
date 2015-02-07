#include "AdnForme72.h"


// Génère les fichiers c.jo son "A" api 
void genereFichierJo72(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
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


// son "i" api 
  int tabamplitude[10] =
    { 
127, quelpiano6, 127, 167, 147, 187, 127, quelpiano7, 127, 47
};





  int tabdurer[10] =
    { 
5, quelpiano8, 5, 20, 20, 20, 5, quelpiano8, 5, 5
};





    for(int laforcebbase = quelpiano10; laforcebbase > 0; laforcebbase--)
     {

int pass1=0;
int pass2=0;



if(quelpiano9>2)

   {
  for(int positiontab = 0; positiontab<10; positiontab++)
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

	if(pass2<3)
	pass2=3;

	if(pass1 >239)
	pass1=239;

	if(pass2>250)
	pass2=250;

        fprintf(fichierjo,  "%c%c",    (char)(pass1), (char)(pass2));

}//fin boucle for

    for(int pourquelpiano9 = quelpiano9; pourquelpiano9 > 0; pourquelpiano9--)
     {
        fprintf(fichierjo,  "%c%c",    (char)127, (char)250);
     }

}
else
   {
  for(int positiontab = 0; positiontab<10; positiontab++)
   {

        if(positiontab%2)
                {
	pass1 = tabamplitude[positiontab] - int(tabamplitude[positiontab] * 0.01 * quelpiano2);
	pass2 = int(tabdurer[positiontab] + (tabdurer[positiontab]* 0.01 * quelpiano3));

	}
        else
                {
	pass1 = tabamplitude[positiontab] + int(tabamplitude[positiontab] * 0.01 * quelpiano4);
	pass2 = int(tabdurer[positiontab] + (tabdurer[positiontab] * 0.01 * quelpiano5));
	}

	if(pass1<16)
	pass1=16;

	if(pass2<3)
	pass2=3;

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
