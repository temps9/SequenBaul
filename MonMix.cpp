#include "MonMix.h"
#include <iostream>
#include <fstream>
#include <string>
#include <QObject>

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <stdio.h>

#include <dirent.h>

#include <QApplication>

int piste = 1;

MonMix::MonMix() : QWidget()
{
/*
    setFixedSize(1000, 800);
*/
    aa_bouton = new QPushButton("OFF", this);
    aa_bouton->setFont(QFont("Comic Sans MS", 10));
    aa_bouton->setGeometry(920, 2, 50, 20);
    
    ab_bouton = new QPushButton("RM", this);
    ab_bouton->setFont(QFont("Comic Sans MS", 10));
    ab_bouton->setGeometry(820, 2, 50, 20);

    ba_bouton = new QPushButton("Compose piste 1", this);
    ba_bouton->setFont(QFont("Comic Sans MS", 14));
    ba_bouton->setGeometry(50, 45, 300, 30);

    bb_bouton = new QPushButton("Compose piste 2", this);
    bb_bouton->setFont(QFont("Comic Sans MS", 14));
    bb_bouton->setGeometry(50, 90, 300, 30);

    bc_bouton = new QPushButton("Compose piste 3", this);
    bc_bouton->setFont(QFont("Comic Sans MS", 14));
    bc_bouton->setGeometry(50, 135, 300, 30);

    bd_bouton = new QPushButton("Compose piste 4", this);
    bd_bouton->setFont(QFont("Comic Sans MS", 14));
    bd_bouton->setGeometry(50, 180, 300, 30);

    be_bouton = new QPushButton("Compose piste 5", this);
    be_bouton->setFont(QFont("Comic Sans MS", 14));
    be_bouton->setGeometry(50, 225, 300, 30);

    bf_bouton = new QPushButton("Compose piste 6", this);
    bf_bouton->setFont(QFont("Comic Sans MS", 14));
    bf_bouton->setGeometry(50, 270, 300, 30);

    bg_bouton = new QPushButton("Compose piste 7", this);
    bg_bouton->setFont(QFont("Comic Sans MS", 14));
    bg_bouton->setGeometry(50, 315, 300, 30);

    bh_bouton = new QPushButton("Compose piste 8", this);
    bh_bouton->setFont(QFont("Comic Sans MS", 14));
    bh_bouton->setGeometry(50, 360, 300, 30);

    bi_bouton = new QPushButton("Compose piste 9", this);
    bi_bouton->setFont(QFont("Comic Sans MS", 14));
    bi_bouton->setGeometry(50, 405, 300, 30);

    bj_bouton = new QPushButton("Compose piste 10", this);
    bj_bouton->setFont(QFont("Comic Sans MS", 14));
    bj_bouton->setGeometry(50, 450, 300, 30);

    bk_bouton = new QPushButton("Compose piste 11", this);
    bk_bouton->setFont(QFont("Comic Sans MS", 14));
    bk_bouton->setGeometry(50, 495, 300, 30);

    bl_bouton = new QPushButton("Compose piste 12", this);
    bl_bouton->setFont(QFont("Comic Sans MS", 14));
    bl_bouton->setGeometry(50, 540, 300, 30);

    bm_bouton = new QPushButton("Compose piste 13", this);
    bm_bouton->setFont(QFont("Comic Sans MS", 14));
    bm_bouton->setGeometry(50, 585, 300, 30);

    bn_bouton = new QPushButton("Compose piste 14", this);
    bn_bouton->setFont(QFont("Comic Sans MS", 14));
    bn_bouton->setGeometry(50, 630, 300, 30);

    bo_bouton = new QPushButton("Compose piste 15", this);
    bo_bouton->setFont(QFont("Comic Sans MS", 14));
    bo_bouton->setGeometry(50, 675, 300, 30);

    bp_bouton = new QPushButton("Compose piste 16", this);
    bp_bouton->setFont(QFont("Comic Sans MS", 14));
    bp_bouton->setGeometry(50, 720, 300, 30);

    bq_bouton = new QPushButton("Lecture piste 1", this);
    bq_bouton->setFont(QFont("Comic Sans MS", 14));
    bq_bouton->setGeometry(500, 45, 300, 30);

    br_bouton = new QPushButton("Mix et lit 2 pistes", this);
    br_bouton->setFont(QFont("Comic Sans MS", 14));
    br_bouton->setGeometry(500, 90, 300, 30);

    bs_bouton = new QPushButton("Mix et lit 3 pistes", this);
    bs_bouton->setFont(QFont("Comic Sans MS", 14));
    bs_bouton->setGeometry(500, 135, 300, 30);

    bt_bouton = new QPushButton("Mix et lit 4 pistes", this);
    bt_bouton->setFont(QFont("Comic Sans MS", 14));
    bt_bouton->setGeometry(500, 180, 300, 30);

    bu_bouton = new QPushButton("Mix et lit 5 pistes", this);
    bu_bouton->setFont(QFont("Comic Sans MS", 14));
    bu_bouton->setGeometry(500, 225, 300, 30);

    bv_bouton = new QPushButton("Mix et lit 6 pistes", this);
    bv_bouton->setFont(QFont("Comic Sans MS", 14));
    bv_bouton->setGeometry(500, 270, 300, 30);

    bw_bouton = new QPushButton("Mix et lit 7 pistes", this);
    bw_bouton->setFont(QFont("Comic Sans MS", 14));
    bw_bouton->setGeometry(500, 315, 300, 30);

    bx_bouton = new QPushButton("Mix et lit 8 pistes", this);
    bx_bouton->setFont(QFont("Comic Sans MS", 14));
    bx_bouton->setGeometry(500, 360, 300, 30);

    by_bouton = new QPushButton("Mix et lit 9 pistes", this);
    by_bouton->setFont(QFont("Comic Sans MS", 14));
    by_bouton->setGeometry(500, 405, 300, 30);

    bz_bouton = new QPushButton("Mix et lit 10 pistes", this);
    bz_bouton->setFont(QFont("Comic Sans MS", 14));
    bz_bouton->setGeometry(500, 450, 300, 30);

    ca_bouton = new QPushButton("Mix et lit 11 pistes", this);
    ca_bouton->setFont(QFont("Comic Sans MS", 14));
    ca_bouton->setGeometry(500, 495, 300, 30);

    cb_bouton = new QPushButton("Mix et lit 12 pistes", this);
    cb_bouton->setFont(QFont("Comic Sans MS", 14));
    cb_bouton->setGeometry(500, 540, 300, 30);

    cc_bouton = new QPushButton("Mix et lit 13 pistes", this);
    cc_bouton->setFont(QFont("Comic Sans MS", 14));
    cc_bouton->setGeometry(500, 585, 300, 30);

    cd_bouton = new QPushButton("Mix et lit 14 pistes", this);
    cd_bouton->setFont(QFont("Comic Sans MS", 14));
    cd_bouton->setGeometry(500, 630, 300, 30);

    ce_bouton = new QPushButton("Mix et lit 15 pistes", this);
    ce_bouton->setFont(QFont("Comic Sans MS", 14));
    ce_bouton->setGeometry(500, 675, 300, 30);

    cf_bouton = new QPushButton("Mix et lit 16 pistes", this);
    cf_bouton->setFont(QFont("Comic Sans MS", 14));
    cf_bouton->setGeometry(500, 720, 300, 30);



    QObject::connect(ba_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose1()));
    QObject::connect(bb_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose2()));
    QObject::connect(bc_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose3()));
    QObject::connect(bd_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose4()));
    QObject::connect(be_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose5()));
    QObject::connect(bf_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose6()));
    QObject::connect(bg_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose7()));
    QObject::connect(bh_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose8()));
    QObject::connect(bi_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose9()));
    QObject::connect(bj_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose10()));
    QObject::connect(bk_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose11()));
    QObject::connect(bl_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose12()));
    QObject::connect(bm_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose13()));
    QObject::connect(bn_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose14()));
    QObject::connect(bo_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose15()));
    QObject::connect(bp_bouton, SIGNAL(clicked()), this, SLOT(ouvrirCompose16()));

    QObject::connect(bq_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix1()));
    QObject::connect(br_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix2()));
    QObject::connect(bs_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix3()));
    QObject::connect(bt_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix4()));
    QObject::connect(bu_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix5()));
    QObject::connect(bv_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix6()));
    QObject::connect(bw_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix7()));
    QObject::connect(bx_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix8()));
    QObject::connect(by_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix9()));
    QObject::connect(bz_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix10()));
    QObject::connect(ca_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix11()));
    QObject::connect(cb_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix12()));
    QObject::connect(cc_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix13()));
    QObject::connect(cd_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix14()));
    QObject::connect(ce_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix15()));
    QObject::connect(cf_bouton, SIGNAL(clicked()), this, SLOT(ouvrirMix16()));
    
    QObject::connect (aa_bouton, SIGNAL (clicked()), qApp, SLOT (quit ()));
    QObject::connect(ab_bouton, SIGNAL(clicked()), this, SLOT(effaceMix16()));


}



void MonMix::ouvrirCompose1()
{
system("xdg-open piste1.txt");
}
void MonMix::ouvrirCompose2()
{
system("xdg-open piste2.txt");
}
void MonMix::ouvrirCompose3()
{
system("xdg-open piste3.txt");
}
void MonMix::ouvrirCompose4()
{
system("xdg-open piste4.txt");
}
void MonMix::ouvrirCompose5()
{
system("xdg-open piste5.txt");
}
void MonMix::ouvrirCompose6()
{
system("xdg-open piste6.txt");
}
void MonMix::ouvrirCompose7()
{
system("xdg-open piste7.txt");
}
void MonMix::ouvrirCompose8()
{
system("xdg-open piste8.txt");
}
void MonMix::ouvrirCompose9()
{
system("xdg-open piste9.txt");
}
void MonMix::ouvrirCompose10()
{
system("xdg-open piste10.txt");
}
void MonMix::ouvrirCompose11()
{
system("xdg-open piste11.txt");
}
void MonMix::ouvrirCompose12()
{
system("xdg-open piste12.txt");
}
void MonMix::ouvrirCompose13()
{
system("xdg-open piste13.txt");
}
void MonMix::ouvrirCompose14()
{
system("xdg-open piste14.txt");
}
void MonMix::ouvrirCompose15()
{
system("xdg-open piste15.txt");
}
void MonMix::ouvrirCompose16()
{
system("xdg-open piste16.txt");
}

void MonMix::effaceMix16()
{
system("rm *.jo");
}

void MonMix::ouvrirMix1()
{
ab_bouton->setEnabled(false);
piste = 1;
monmixleger(piste); 
  if(!fork())
   {
//system("play 1.wav");
    execlp("sox", "sox", "1.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
ab_bouton->setEnabled(true);
}
void MonMix::ouvrirMix2()
{
      for(int i=1; i<3; i++)
       {
piste = i;
monmixleger(piste);
	}    
system("sox -m 1.wav 2.wav mixed.wav");

  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix3()
{
      for(int i=1; i<4; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}

void MonMix::ouvrirMix4()
{
      for(int i=1; i<5; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix5()
{
      for(int i=1; i<6; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix6()
{
      for(int i=1; i<7; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix7()
{
      for(int i=1; i<8; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix8()
{
      for(int i=1; i<9; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix9()
{
      for(int i=1; i<10; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix10()
{
      for(int i=1; i<11; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix11()
{
      for(int i=1; i<12; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix12()
{
      for(int i=1; i<13; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix13()
{
      for(int i=1; i<14; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix14()
{
      for(int i=1; i<15; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix15()
{
      for(int i=1; i<16; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav 15.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
void MonMix::ouvrirMix16()
{
      for(int i=1; i<17; i++)
       {
piste = i;
monmixleger(piste);
	}
system("sox -m 1.wav 2.wav 3.wav 4.wav 5.wav 6.wav 7.wav 8.wav 9.wav 10.wav 11.wav 12.wav 13.wav 14.wav 15.wav 16.wav mixed.wav");
  if(!fork())
   {
    execlp("sox", "sox", "mixed.wav", "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
