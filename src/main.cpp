#include <iostream>
using namespace std;
int main() {
  std::cout << "**********   Menu véhicule   ************" << endl << endl;
  std::cout << "  1 - Multimédia" << endl;
  std::cout << "  2 - Téléphone" << endl;
  std::cout << "  3 - Connexions " << endl;
  std::cout << "  4 - Personnalisation - Configuration" << endl << endl;
  std::cout << "*****************************************" << endl << endl;
  int choix;
  cin >> choix;
  switch (choix) {
    case 1:
      std::cout << "Vous avez choisi le Multimédia" << endl;  
      break;
    case 2:
      std::cout << "Vous avez choisi le Téléphone" << endl;
      break;
    case 3:
      std::cout << "Vous avez choisi les Connexions" << endl;
      break;
    case 4:
        std::cout << "**********   Menu Personnalisation   **********" << endl << endl;
        std::cout << "  1 - Définir les paramètres véhicule" << endl;
        std::cout << "  2 - Choix de la langue" << endl;
        std::cout << "  3 - Configuration afficheur" << endl << endl;
        std::cout << "*****************************************" << endl << endl; 
        cin >> choix;
        switch (choix) {
          case 1:
            std::cout << "Vous avez choisi de définir les paramètres véhicule" << endl;
            break;
          case 2:
            std::cout << "Vous avez choisi de choisir la langue" << endl;
            break;
          case 3:
            std::cout << "Vous avez choisi de configurer l'afficheur" << endl;
            break;
          default:
            std::cout << "Choix invalide" << endl;
            break;  
        }  
      break;
    default:
      std::cout << "Vous n'avez pas choisi un nombre entre 1 et 4" << endl;
  }
}