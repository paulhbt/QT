#include "widget.h"
#include "ui_widget.h"

#include <QRandomGenerator>
#include <QDateTime>
#include <QTimer>
#include <QThread>
#include <QDebug>
#include <QProgressBar>
#include <QHBoxLayout>
#include <QLabel>


/*****************************************************************************/
void qtPause(int millisecondes)
{
    QTimer timer;
    timer.start(millisecondes);
    QEventLoop loop;
    QObject::connect(&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    loop.exec();
}
/*********************************************************************************/
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //Création du plateau et des boutons dynamiquement
    plateau = new QGridLayout();
    int i=0;

    //Boutons de jeux
    for(int ligne=0;ligne<NBLIGNES;ligne++)
    {
        for(int colonne=0;colonne<NBCOLONNES;colonne++)
        {
            QPushButton *boutonDeJeux;
            boutonDeJeux =new QPushButton();
            plateau->addWidget(boutonDeJeux,ligne,colonne);
            boutonDeJeux->setDisabled(true);
            boutonDeJeux->setText(" ");
            connect(boutonDeJeux,&QPushButton::clicked,this,&Widget::onQpushButton_clicked);
            i++;
        }
    }

    // Bouton Quitter
    QPushButton *boutonQuitter = new QPushButton();
    boutonQuitter->setText("Quitter");
    connect(boutonQuitter,&QPushButton::clicked,this,&Widget::close);

    // Label nombre de mines
    QLabel *labelNbMines = new QLabel;
    labelNbMines->setText("Nombre de mines");

    // Spin Box
    choixNbMines = new QSpinBox;
    choixNbMines->setValue(5);

    // Bouton jouer
    QPushButton *boutonJouer = new QPushButton();
    boutonJouer->setText("Jouer");
    connect(boutonJouer,&QPushButton::clicked,this,&Widget::on_pushButtonJouer_clicked);

    // Progress bar
    progressBar = new QProgressBar();
    progressBar->setValue(0);
    progressBar->setMinimum(0);
    progressBar->setMaximum(nbMines);

    //Alignement des boutons
  alignementBoutons = new QHBoxLayout();
    alignementBoutons->addWidget(boutonQuitter);
    alignementBoutons->addWidget(labelNbMines);
    alignementBoutons->addWidget(choixNbMines);
    alignementBoutons->addWidget(boutonJouer);
    alignementBoutons->addWidget(progressBar);
    plateau->addLayout(alignementBoutons,NBLIGNES,0,1,NBCOLONNES);

    this->setLayout(plateau);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::InitialiserGrille(int nbBombes)
{
    QRandomGenerator gen;

    quint32 ligne;
    quint32 colonne;
    nbMines=nbBombes;
    progressBar->setMaximum(nbMines);
    for(ligne=0;ligne<NBLIGNES;ligne++)
    {
        for(colonne=0; colonne<NBCOLONNES;colonne++)
        {
            grille[ligne][colonne]=VIDE;
        }
    }
    gen.seed(QDateTime::currentDateTime().toMSecsSinceEpoch());
    do
    {
        ligne=gen.bounded(0,NBLIGNES-1);
        qtPause(300);
        colonne=gen.bounded(0,NBCOLONNES-1);
        qtPause(300);
        if(grille[ligne][colonne]==VIDE)
        {
            grille[ligne][colonne]=BOMBE;
            nbBombes--;
            progressBar->setValue(nbMines-nbBombes);
            qApp->processEvents();
        }
    }while(nbBombes!=0);
    int index =0;
    for(ligne=0;ligne<NBLIGNES;ligne++)
    {
        for(colonne=0;colonne<NBCOLONNES;colonne++)
        {
            MajCaseVoisine(ligne,colonne);
            index++;
        }
    }
}

/*****************************************************************************************************************************/
bool Widget::VerifierVictoire()
{
    bool victoire=false;
    int nbCasesRestante=0;
    // listeBoutons contiendra la liste des tous les QPushButton de l'interface
    QList <QPushButton*>listeBoutons=findChildren<QPushButton*>();
    foreach(QPushButton *boutonJouer, listeBoutons)
    {
        // si l' bouton n'est pas flat (-> pas encore cliqué)
        if (!(boutonJouer->isFlat()))
        {   // si le bouton est bien une case de la grille de jeu
            // j'augmente mon compteur de cases restantes
            if (boutonJouer->text()!="Quitter" && boutonJouer->text()!="Jouer")
            {
                nbCasesRestante++;
            }
        }
    }
    qDebug()<<nbCasesRestante;
    if (nbCasesRestante==nbMines)
    {
        victoire=true;
    }
    return victoire;
}

/*******************************************************************************************************************************/
void Widget::onQpushButton_clicked()
{
    QPushButton *boutonDeJeux=qobject_cast<QPushButton*>(sender());
    int colonne;
    int ligne;
    int rs,cs;
    // colonne et ligne seront mis à jour avex les coordonnées du bouton dans le QGridLayout
    // ce qui correspond aux coordonnées dans la grille de données
    plateau->getItemPosition(plateau->indexOf(boutonDeJeux),&ligne,&colonne,&rs,&cs);

    if(grille[ligne][colonne]==-1)
    {
        PerduIhm();
        choixNbMines->setEnabled(true);

    }
    else {
        if(VerifierVictoire())
        {
            GagnerIhm();
            boutonDeJeux->setEnabled(false);
            boutonDeJeux->setEnabled(false);
        }
        else {
            boutonDeJeux->setFlat(true);
            boutonDeJeux->setEnabled(false);
            MajCaseVoisine(ligne,colonne);
            boutonDeJeux->setText(QString::number(grille[ligne][colonne]));
        }
    }
}


/*****************************************************************************************************************************/
void Widget::on_pushButtonJouer_clicked()
{
    choixNbMines->setEnabled(false);
    nbMines=choixNbMines->value();
    InitialiserGrille(nbMines);
    InitialiserGrilleIhm();
}


void Widget::MajCaseVoisine(int ligne, int colonne){

    int nombreMinesAlentour = 0;

    if ( ligne != 0 && colonne !=0 && ligne!=NBLIGNES*NBCOLONNES && colonne!=NBLIGNES*NBCOLONNES ){
        if ( grille[ligne][colonne-1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne][colonne+1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }
    }
    else if ( ligne == 0 && colonne != 0 && colonne !=NBLIGNES*NBCOLONNES ){
        if ( grille[ligne][colonne-1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne][colonne+1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }
    }
    else if ( ligne == NBLIGNES*NBCOLONNES && colonne !=0 && colonne !=NBLIGNES*NBCOLONNES ){
        if ( grille[ligne][colonne-1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne][colonne+1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }

    }
    else if ( colonne == 0 && ligne !=0 && ligne!=NBLIGNES*NBCOLONNES ){
        if ( grille[ligne][colonne+1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }

    }
    else if ( colonne == NBLIGNES*NBCOLONNES && ligne!=0 && ligne!=NBLIGNES*NBCOLONNES ){
        if ( grille[ligne][colonne-1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }
    }
    else if ( ligne ==0 && colonne == 0 ){
        if ( grille[ligne][colonne+1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }
    }
    else if ( ligne == 0 && colonne == NBLIGNES*NBCOLONNES ){
        if ( grille[ligne+1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne][colonne-1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne+1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }

    }
    else if ( ligne == NBLIGNES*NBCOLONNES && colonne == 0){
        if ( grille[ligne-1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne+1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne][colonne+1] == -1 )
        {
            nombreMinesAlentour++;
        }

    }
    else if ( ligne == NBLIGNES*NBCOLONNES && colonne == NBLIGNES*NBCOLONNES ){
        if ( grille[ligne-1][colonne-1] == -1)
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne][colonne-1] == -1 )
        {
            nombreMinesAlentour++;
        }
        if ( grille[ligne-1][colonne] == -1 )
        {
            nombreMinesAlentour++;
        }
    }

}
/***************************************************************************************************************************/
void Widget::InitialiserGrilleIhm()
{
    QList <QPushButton*>listeBoutons=findChildren<QPushButton*>();
    foreach(QPushButton *boutonJouer, listeBoutons)
    {
        if (!(boutonJouer->text()=="Quitter" || boutonJouer->text()=="Jouer"))
        {
            boutonJouer->setFlat(false);
            boutonJouer->setText(" ");
            boutonJouer->setStyleSheet("background-color : white");
            boutonJouer->setEnabled(true);
        }
    }
}
/*********************************************************************************************************************************/
void Widget::PerduIhm()
{
    QList <QPushButton*>listeBoutons=findChildren<QPushButton*>();
    foreach(QPushButton *boutonDeJeux, listeBoutons)
    {
        if (!(boutonDeJeux->text()=="Quitter" || boutonDeJeux->text()=="Jouer"))
        {
            boutonDeJeux->setEnabled(false);
            boutonDeJeux->setFlat(false);
            boutonDeJeux->setText(" ");
            boutonDeJeux->setStyleSheet("background-color : red");
        }
    }
}

/*********************************************************************************************************************************/
void Widget::GagnerIhm()
{
    QList <QPushButton*>listeBoutons=findChildren<QPushButton*>();
    foreach(QPushButton *boutonDeJeux, listeBoutons)
    {
        if (!(boutonDeJeux->text()=="Quitter" || boutonDeJeux->text()=="Jouer"))
        {
            boutonDeJeux->setEnabled(false);
            boutonDeJeux->setFlat(false);
            boutonDeJeux->setText(" ");
            boutonDeJeux->setStyleSheet("background-color : green");
        }
    }
}
