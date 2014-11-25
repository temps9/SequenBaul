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

MonMix::MonMix() : QWidget()
{
/*
    setFixedSize(1000, 800);
*/
    aa_bouton = new QPushButton("ON OFF", this);
    aa_bouton->setFont(QFont("Comic Sans MS", 10));
    aa_bouton->setGeometry(920, 2, 80, 20);

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


}



void MonMix::ouvrirCompose1()
{
system("xdg-open piste.txt");
}
void MonMix::ouvrirCompose2()
{
system("xdg-open piste1.txt");
}
void MonMix::ouvrirCompose3()
{
system("xdg-open piste2.txt");
}
void MonMix::ouvrirCompose4()
{
system("xdg-open piste3.txt");
}
void MonMix::ouvrirCompose5()
{
system("xdg-open piste4.txt");
}
void MonMix::ouvrirCompose6()
{
system("xdg-open piste5.txt");
}
void MonMix::ouvrirCompose7()
{
system("xdg-open piste6.txt");
}
void MonMix::ouvrirCompose8()
{
system("xdg-open piste7.txt");
}
void MonMix::ouvrirCompose9()
{
system("xdg-open piste8.txt");
}
void MonMix::ouvrirCompose10()
{
system("xdg-open piste9.txt");
}
void MonMix::ouvrirCompose11()
{
system("xdg-open piste10.txt");
}
void MonMix::ouvrirCompose12()
{
system("xdg-open piste11.txt");
}
void MonMix::ouvrirCompose13()
{
system("xdg-open piste12.txt");
}
void MonMix::ouvrirCompose14()
{
system("xdg-open piste13.txt");
}
void MonMix::ouvrirCompose15()
{
system("xdg-open piste14.txt");
}
void MonMix::ouvrirCompose16()
{
system("xdg-open piste15.txt");
}


void MonMix::ouvrirMix1()
{
system("./synthe piste.txt");
}
void MonMix::ouvrirMix2()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && sox -m joris1.wav joris2.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix3()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && sox -m joris1.wav joris2.wav joris3.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix4()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav mixed.wav && play mixed.wav");
}
void MonMix::ouvrirMix5()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix6()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix7()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix8()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix9()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix10()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && ./synthemix10 piste9.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav joris10.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix11()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && ./synthemix10 piste9.txt && ./synthemix11 piste10.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav joris10.wav joris11.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix12()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && ./synthemix10 piste9.txt && ./synthemix11 piste10.txt && ./synthemix12 piste11.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav joris10.wav joris11.wav joris12.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix13()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && ./synthemix10 piste9.txt && ./synthemix11 piste10.txt && ./synthemix12 piste11.txt && ./synthemix13 piste12.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav joris10.wav joris11.wav joris12.wav joris13.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix14()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && ./synthemix10 piste9.txt && ./synthemix11 piste10.txt && ./synthemix12 piste11.txt && ./synthemix13 piste12.txt && ./synthemix14 piste13.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav joris10.wav joris11.wav joris12.wav joris13.wav joris14.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix15()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && ./synthemix10 piste9.txt && ./synthemix11 piste10.txt && ./synthemix12 piste11.txt && ./synthemix13 piste12.txt && ./synthemix14 piste13.txt && ./synthemix15 piste14.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav joris10.wav joris11.wav joris12.wav joris13.wav joris14.wav joris15.wav mixed.wav  && play mixed.wav");
}
void MonMix::ouvrirMix16()
{
system("./synthemix1 piste.txt && ./synthemix2 piste1.txt && ./synthemix3 piste2.txt && ./synthemix4 piste3.txt && ./synthemix5 piste4.txt && ./synthemix6 piste5.txt && ./synthemix7 piste6.txt && ./synthemix8 piste7.txt && ./synthemix9 piste8.txt && ./synthemix10 piste9.txt && ./synthemix11 piste10.txt && ./synthemix12 piste11.txt && ./synthemix13 piste12.txt && ./synthemix14 piste13.txt && ./synthemix15 piste14.txt && ./synthemix16 piste15.txt && sox -m joris1.wav joris2.wav joris3.wav joris4.wav joris5.wav joris6.wav joris7.wav joris8.wav joris9.wav joris10.wav joris11.wav joris12.wav joris13.wav joris14.wav joris15.wav joris16.wav mixed.wav  && play mixed.wav");
}
