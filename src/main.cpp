#include <iostream>
using namespace std;

int main() { 
  int nbPlaces = 10;
  int choix;
  cout << "************* Evaluation 2 ************* \n";
  cout << "\n1 - Entrée dans le parking \n";
  cout << "2 - Nombre de places disponibles \n";
  cout << "3 - Sortie du parking \n";
  cout << "4 - Quitter \n";
  
    do{
      cin >> choix;
      switch(choix){
        case 1:
          nbPlaces--;
          cout << "Entrée";
          break;
        case 2:
          cout << "Il y a " + to_string(nbPlaces) +" places restantes";
          break;
        case 3:
          nbPlaces++;
          cout << "Sortie";
          break;
        case 4:
          cout << "Au revoir \n";
          break;
        default: cout << "Choisissez un chiffre entre 1 et 4";
        break;  
      }
    }while(choix != 4);
  return 0;
}