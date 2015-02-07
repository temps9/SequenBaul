#include <QApplication>
#include "MonMix.h"
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <QThread>
#include <QObject>
#include <QDesktopWidget>


/* Imaginer et creer par Abadie joris*/
/* en utilisant un concept de Andre pierre jocelyn*/
/*Cette oeuvre est protégée et n'est divulguée et réservé que pour utilisation sous linux dans les conditions Creative common ci-dessous*/
/* Cette oeuvre est mise à disposition selon les termes de la Licence Creative Commons Paternité - Pas d'Utilisation Commerciale - Partage des Conditions Initiales à l'Identique 2.0 France. */
/*Aucune garantie n'est donner sur les effets de cet executable*/

#include <iostream>
using namespace std;
/**dépendance sox */
#include <string.h>
#include <dirent.h>
#include "math.h"

int main(int argc, char *argv[])
{

    char donne[15];
    char donne1[15];
      for(int i=1; i<17; i++)
       {
  snprintf(donne, 15,"fichier%d",  i);
    snprintf(donne1, 15,"piste%d.txt",  i);
   FILE* donne = NULL;
   donne = fopen (donne1, "w+");
    if (donne != NULL)
    {
          fprintf(donne, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d \n%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 65, 1, 1, 100, 1, 100, 1, 200, 10, 1, 1, 0, 0, 100, 100, 128, 65, 1, 1, 100, 1, 100, 1, 200, 10, 1, 1, 0, 0, 100, 100, 128);
        fclose(donne);
    }
        }

    QApplication app(argc, argv);
    MonMix fenetre;
    fenetre.show();

    return app.exec();

}
