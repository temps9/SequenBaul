#include "AdnForme47.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo47(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[2]; //son du n, la référence
    int mesdurerfront[2]; //son du n, la référence
    int mesvarampli[2]; //son du n, la référence
    int mesvardurer[2]; //son du n, la référence
    int madurer; //son du n, la référence
    int maforceh;
    int maforceb;
    int montremolo;

mesamplifront[0] = quelpiano2;//valeur3
mesamplifront[1] = quelpiano3;
mesdurerfront[0] = quelpiano4;
mesdurerfront[1] = quelpiano5;
mesvarampli[0] = quelpiano6;
mesvarampli[1] = quelpiano7;
mesvardurer[0] = quelpiano8;//valeur9
mesvardurer[1] = quelpiano9;
madurer = quelpiano10;//valeur11
maforceh = quelpiano11;
maforceb = quelpiano12;
montremolo = quelpiano13;


/**********************************************/
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

// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

mesamplifront[0] = quelpiano2;//valeur3
mesamplifront[1] = quelpiano3;
mesdurerfront[0] = quelpiano4;
mesdurerfront[1] = quelpiano5;
mesvarampli[0] = quelpiano6;
mesvarampli[1] = quelpiano7;
mesvardurer[0] = quelpiano8;//valeur9
mesvardurer[1] = quelpiano9;
maforceh = quelpiano11;
maforceb = quelpiano12;
montremolo = quelpiano13;

//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


       }
     }
//plateau

int basculeDe1 = montremolo * 2;
int basculeDe2 = basculeDe1 - 1;
int basculeDe3 = basculeDe1 * 2 - 1;
int basculeDe5 = 0;



    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {


//nous créons ici un trémolo de nbtremolo, comme c-est sur 8 fronts une bascule à nbtremolo*8 
//avec une vinaigrette l'amplitude et la durée varient à l'inverse
if(basculeDe5<basculeDe1)
{
mesdurerfront[i] += mesvardurer[i];
mesamplifront[i] -= mesvarampli[i];
}

if(basculeDe5>basculeDe2)
{
mesdurerfront[i] -= mesvardurer[i];
mesamplifront[i] += mesvarampli[i];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


       }
     }



//descend

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] += mesvarampli[i];
        else
         mesamplifront[i] -= mesvarampli[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);


       }
     }


    for(int pourquelpiano15 = quelpiano15; pourquelpiano15 > 0; pourquelpiano15--)
     {
        fprintf(fichierjo,  "%c%c",    (char)quelpiano14, (char)250);

        fprintf(fichierjo,  "%c%c",    (char)128, (char)250);


     }



// fin  multiplie
   }


 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
