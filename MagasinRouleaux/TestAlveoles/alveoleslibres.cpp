/**
    @file alveolesLibres.cpp
    @brief Implémentation de la classe alveolesLibres
    @author Paul HABERT
    @date 16/10/2018
*/

#include "alveoleslibres.h"

/**
 * @brief AlveolesLibres::AlveolesLibres
 * @param _nbRangees
 * @param _nbColonnes
 * @details Constructeur de la classe alveolesLibres, initialise le nombre de rangées et de colonnes disponibles.
 */

AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonnes)
{
    for(int i = 1; i<=(_nbColonnes * _nbRangees); i++)
    {
        push_back(i);
    }

    nbRangees = _nbRangees;
    nbColonnes = _nbColonnes;
}

/**
 * @brief AlveolesLibres::Reserver
 * @param _rangee
 * @param colonne
 * @return vrai si une alvéole libre, faux si aucune alvéole n’est disponible
 * @details Fournit la localisation de l'alvéole (sa rangée et sa colonne). Elle la supprime également des alvéoles libres.
 */

bool AlveolesLibres::Reserver(int &_rangee, int &_colonne)
{
    bool retour = false;
    if(!empty())
    {
        retour = true;
        int _alveole=back();
        pop_back();
        _rangee = (_alveole-1) / nbColonnes + 1;
        _colonne = (_alveole-1) % nbColonnes + 1;
    }
    return retour;
}

/**
 * @brief AlveolesLibres::Liberer
 * @param _rangee n° de la rangée de l'alvéole à libérer
 * @param _colonne n° de la colonne de l'alvéole à libérer
 * @details Ajoute l’alvéole dont les coordonnées sont passées en paramètre à l'ensemble des alvéoles libres.
 */

void AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    push_back(nbColonnes*(_rangee-1)+_colonne);
}
