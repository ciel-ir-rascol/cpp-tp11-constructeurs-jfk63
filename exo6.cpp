#include <iostream>
using namespace std;

class Compte{
private:
    string nomBanque;
    string nomCompte;
    unsigned int numero;
    float solde;
public:
    Compte(string nomBanque="non defini",string nomCompte="non defini",int numero=0,float solde=0);
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
Compte::Compte(string newBanque,string newCompte,int newNumero,float newSolde)
    :nomBanque{newBanque},nomCompte{newCompte},numero{newNumero},solde{newSolde}{}

int main(){
    Compte LivertA("Bank of Evil","Livret A");
    Compte assuranceVie;
    Compte CompteCourant("Bank of Evil","Compte Courant",4256371860,5234.45);
    CompteCourant.afficherInfos();
    LivertA.afficherInfos();
    assuranceVie.afficherInfos();
    return 0;
}