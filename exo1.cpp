#include <iostream>
using namespace std;

class Compte{
private:
    string nomBanque;
    string nomCompte;
    int numero;
    float solde;
public:
    bool debiter(float montant){
        if (montant>=solde){
            return true;
        }else{
            return false;
        }

    }
    void crediter(float montant){
        solde=+montant;
    }
    void afficherInfos(){
        cout<<"**** "<<nomBanque<<" ****"<<endl<<"- Compte : "<<nomCompte<<endl<<"- Numero : "<<numero<<endl<<"- Solde : "<<solde<<endl;
    }
};

int main(){
    Compte jojo;
    jojo.afficherInfos();
    jojo.debiter(500);
    jojo.crediter(500);
    jojo.afficherInfos();

    return 0;
}