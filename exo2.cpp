#include <iostream>
using namespace std;

class Compte{
private:
    string nomBanque;
    string nomCompte;
    int numero;
    float solde;
public:
    Compte();
    Compte(string newBanque,string newCompte,int newNumero,float newSolde);
    bool debiter(float montant){
        if (solde>=montant){
            solde=solde-montant;
            return true;

        }else{
            return false;
        }

    }
    void crediter(float montant){
        solde=solde+montant;
    }
    void afficherInfos(){
        cout<<"**** "<<nomBanque<<" ****"<<endl<<"- Compte : "<<nomCompte<<endl<<"- Numero : "<<numero<<endl<<"- Solde : "<<solde<<endl;
    }
};
Compte::Compte(){
    nomBanque="non defini";
    nomCompte="non defini";
    numero=0;
    solde=0;
}
Compte::Compte(string newBanque,string newCompte,int newNumero,float newSolde){
    nomBanque=newBanque;
    nomCompte=newCompte;
    numero=newNumero;
    solde=newSolde;
}
int main(){
   Compte CompteCourant;
   CompteCourant.afficherInfos();
    return 0;
}