#include <QCoreApplication>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector <int> tableau;
    cout << setfill('0');
    for(int indice = 0 ; indice <= 30 ; indice++)
    {
        tableau.push_back(indice);
        cout << "Nombre d'éléments : "
             << setw(2) << tableau.size();
        cout << " -- Capacité du tableau : "
             << setw(2) << tableau.capacity()
             << endl;
    }

   cout << endl;

   tableau.pop_back();
   cout << "Nombre d'éléments : "
        << setw(2) << tableau.size();
   cout << " -- Capacité du tableau : "
        << setw(2) << tableau.capacity()
        << endl;

    return a.exec();
}
