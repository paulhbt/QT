/**
    @file alveolesLibres.h
    @brief Déclaration de la classe alveolesLibres
    @author Paul HABERT
    @date 16/10/2018
*/

#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H

#include <vector>
using namespace std;

typedef vector<int> PileEntiers;

class AlveolesLibres : public PileEntiers
{
public:
    AlveolesLibres(const int _nbRangees=10, const int _nbColonnes=20);
    bool Reserver(int & _rangee, int & colonne);
    void Liberer(const int _rangee, const int _colonne);

private:
    int nbRangees;
    int nbColonnes;
};

#endif // ALVEOLESLIBRES_H
