#include <iostream>
using namespace std;

int main() { 
  int nbPlaces = 10;
  char choix;
  cout << "************* Evaluation 2 ************* \n";
  cout << "\n1 - Entrée dans le parking \n";
  cout << "2 - Nombre de places disponibles \n";
  cout << "3 - Sortie du parking \n";
  cout << "4 - Quitter \n";
  
    do{
      cin >> choix;
      switch(choix){
        case '1':
          if (nbPlaces > 0){
          nbPlaces--;
          cout << "Entrée";     
          }else{
            cout << "Entrée impossible parking plein";
          }         
          break;
        case '2':
          cout << "Il y a " + to_string(nbPlaces) +" place(s) restante(s)";
          break;
        case '3':
          if(nbPlaces < 10){
            nbPlaces++;
            cout << "Sortie";
          }else {  
            cout << "Parking vide";
          }
          break;
        case '4':
          cout << "Au revoir \n";
          break;
        default: cout << "Choisissez un chiffre entre 1 et 4";
        break;  
      }
    }while(choix != '4');
  return 0;
}