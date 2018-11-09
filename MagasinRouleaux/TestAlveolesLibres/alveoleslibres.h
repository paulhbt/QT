/**
  @file alveolesLibres.h
  @brief Déclaration de la classe alveolesLibres
  @version 1.0
  @author Philippe CRUCHET
  @date 16/10/2018
  */

#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H

#include <vector>

using namespace std;

typedef vector<int> PileEntiers ;

class AlveolesLibres : public PileEntiers
{
public:
    AlveolesLibres(const int _nbRangees=10, const int _nbColonne=20);
    void Liberer(const int _rangee, const int _colonne);
    bool Reserver(int &_rangee, int &_colonne);

private:
    int nbAlveoles;
    int nbColonnes;

};

#endif // ALVEOLESLIBRES_H
