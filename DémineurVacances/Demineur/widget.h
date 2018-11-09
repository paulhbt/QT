#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QProgressBar>
#include <QSpinBox>

#define NBLIGNES 10
#define NBCOLONNES 6
#define BOMBE -1
#define VIDE 0

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void InitialiserGrilleIhm();
    void PerduIhm();
    void InitialiserGrille(int nbBombes);
    void MajCaseVoisine(int ligne, int colonne);
    bool VerifierVictoire();
    void GagnerIhm();

private slots:
    void onQpushButton_clicked();
    void on_pushButtonJouer_clicked();

private:
    Ui::Widget *ui;
    int grille[NBLIGNES][NBCOLONNES];
    int nbMines;
    QGridLayout *plateau;
    QHBoxLayout *alignementBoutons;
    QPushButton *tab[NBLIGNES*NBCOLONNES];
    QProgressBar *progressBar;
    QSpinBox *choixNbMines;
    int nombreMinesAutour;
};

#endif // WIDGET_H
