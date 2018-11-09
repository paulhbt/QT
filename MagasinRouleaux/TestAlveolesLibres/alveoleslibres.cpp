/**
  @file alveolesLibres.cpp
  @brief Implémentation de la classe alveolesLibres
  @version 1.0
  @author Philippe CRUCHET
  @date 16/10/2018
  */

#include "alveoleslibres.h"

/**
 * @brief AlveolesLibres::AlveolesLibres
 * @param _nbRangees
 * @param _nbColonne
 */
AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonnes) :
nbAlveoles(_nbRangees * _nbColonnes),
nbColonnes(_nbColonnes)
{

    for(int indice = 1 ; indice <= nbAlveoles ; indice++ )
        push_back(indice);
}

/**
 * @brief AlveolesLibres::Liberer
 * @param _rangee  n° de la rangée ou se trouvait le rouleau
 * @param _colonne n° de la colonne ou se trouvait le rouleau
 * @details Ajoute l’alvéole dont les coordonnées sont passées
 *          en paramètre à l'ensemble des alvéoles libres.
 */
void AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    int alveole =  nbColonnes * (_rangee -1) + _colonne;
    push_back(alveole);
}

/**
 * @brief AlveolesLibres::Resever
 * @param _rangee
 * @param _colonne
 * @return
 */
bool AlveolesLibres::Reserver(int &_rangee,int &_colonne)
{
    bool retour = false;
    if(!empty())
    {
        int alveole = back();
        pop_back();
        _rangee = ((alveole - 1) / nbColonnes )+ 1;
        _colonne = ((alveole - 1) % nbColonnes )+ 1 ;
        retour = true;
    }

    return retour;
}
