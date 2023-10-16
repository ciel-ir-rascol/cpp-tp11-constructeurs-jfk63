#include <iostream>
using namespace std;

class Compte{
private:
    string nomBanque;
    string nomCompte;
    int numero;
    float solde;
public:
    bool debiter(float montant);
    void crediter(float montant);
    void afficherInfos(); 
};

int main(){

    // Codez ici votre programme principal !

    return 0;
}