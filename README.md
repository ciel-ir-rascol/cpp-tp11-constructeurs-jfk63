# TP11 - Constructeurs
**STS 1CIEL** - Premier TP d'une suite sur le thème de la banque. Dans un premier temps vous devrez créer et implémenter des constructeurs pour votre classe.

Ce repository est un projet CLion dans lequel vous trouverez un certain nombre de fichiers `.cpp` qui vont vous permettre de coder chaque exercice demandé. Une fois terminé il suffira de faire un commit, puis un push vers GitHub afin de rendre votre travail.

<img src="assets/bankOfEvil.png" width="700">

## Exo1 - Implémentation des méthodes
Nous donnons la classe suivante, permettant la gestion d'un compte en banque :

```cpp
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
```
Dans le fichier `exo1.cpp`, implémentez les 3 méthodes, en dehors de la déclaration de la classe (mais pas dans des fichiers séparés) :
- `debiter()` : Permet de débiter un `montant` sur le compte, renvoie `true` si le solde est suffisant (**le découvert n'est pas autorisé pour ce compte !**), et débite le montant souhaité sur `solde`. Renvoie `false` si le solde est insuffisant.
- `crediter()` : Permet de créditer un `montant` sur le compte, ajoute ce montant au `solde` du compte.
- `afficherInfos()` : Afficher les informations du compte en banque sous cette forme :
```cpp
**** nomBanque ****
- Compte : nomCompte
- Numero : numero
- Solde : solde
```

## Exo2 - Constructeur par défaut
Copiez le contenu de `exo1.cpp` dans `exo2.cpp` , déclarez et implémentez un **constructeur par défaut** (sans paramètres) qui initialisera les attributs :
- Vous utiliserez la **méthode classique** (voir diapo [*Implémentation d'un constructeur par défaut*](https://ciel-ir-rascol.github.io/cpp/12-constructeursDestructeurs/slides-constructeursDestructeurs.html#11) du cours)
- Comme dans le cours, vous implémenterez le constructeur **dans le même fichier** `exo1.cpp` mais **hors de la déclaration de la  classe**.
- Le constructeur par défaut initialisera les attributs aux valeurs suivantes :
  - nomBanque : `non defini`
  - nomCompte : `nom defini`
  - numero : `0`
  - solde : `0`

Dans le programme principal, instanciez la classe `Compte` en créant un objet `compteCourant`. Vous vérifierez le bon fonctionnement en appelant la méthode `afficherInfos()`.

## Exo3 - Overloaded constructors
Copiez le contenu de `exo2.cpp` dans `exo3.cpp` puis modifiez votre classe afin d'ajouter des constructeurs *overloaded*. Vous conserverez le constructeur par défaut précédent.
- Déclarez et implémentez un constructeur permettant l'initialisation des attributs, `nomBanque` et `nomCompte` seulement, les attributs `numero` et `solde` seront initialisés à 0.
- Déclarez et implémentez un constructeur qui permettre d'initialiser tous les attributs de la classe.
- Vous utiliserez dans les 2 cas la méthode classique vu en cours : [*Implémentation d'un constructeur par défaut*](https://ciel-ir-rascol.github.io/cpp/12-constructeursDestructeurs/slides-constructeursDestructeurs.html#11)

Dans le programme principal utilisez un constructeur pour initialiser l'objet `compteCourant` créé précédemment, vous donnerez les valeurs suivantes aux attributs :
- `nomBanque : "Bank of Evil"`
- `nomCompte : "Compte Courant"`
- `numero : 4256371860`
- `solde : 5234.45`

Toujours dans le programme principal, créez un autre compte en banque `livretA` dans lequel vous initialiserez seulement les attributs suivant :
- `nomBanque : "Bank of Evil"`
- `nomCompte : "Livret  A"`

Pour terminer instancier une dernière fois la classe `Compte`, en créant l'objet `assuranceVie` sans initialiser ses attributs.

Vous vérifierez le bon fonctionnement en appelant la méthode `afficherInfos()`, pour les 3 comptes créés.

## Exo4 - Constructor Initialization List
Copiez le contenu de `exo3.cpp` dans `exo4.cpp`. Modifiez l'implémentation de vos constructeurs afin d'utiliser la [liste d'initialisation de constructeur](https://ciel-ir-rascol.github.io/cpp/12-constructeursDestructeurs/slides-constructeursDestructeurs.html#19) vue en cours.

Vous vérifierez le bon fonctionnement en appelant la méthode `afficherInfos()`, pour les 3 comptes créés.

## Exo5 - Délégation de constructeurs
Copiez le contenu de `exo4.cpp` dans `exo5.cpp`. Vous modifierez à nouveau la classe `Compte` afin d'utiliser la [délégation de constructeurs](https://ciel-ir-rascol.github.io/cpp/12-constructeursDestructeurs/slides-constructeursDestructeurs.html#22).
- Conservez le constructeur qui initialise tous les attributs, supprimez les autres.
- Par délégation créez un constructeur par défaut.
- Toujours par délégation créez un constructeur initialisant seulement `nomBanque` et `nomCompte`, les attributs `numero` et `solde` seront initialisés à 0.

Vous vérifierez le bon fonctionnement en appelant la méthode `afficherInfos()`, pour les 3 comptes créés.

## Exo6 - Valeurs par défaut du constructeur
Copiez le contenu de `exo5.cpp` dans `exo6.cpp`. À nouveau modifiez la classe `Compte` afin de donner des [valeurs par défaut au constructeur](https://ciel-ir-rascol.github.io/cpp/12-constructeursDestructeurs/slides-constructeursDestructeurs.html#25).

Supprimez tous les constructeurs, sauf celui initialisant tous les attributs. Dans la déclaration, vous initialiserez les attributs aux valeurs données à l'Exo2.

Vous vérifierez le bon fonctionnement en appelant la méthode `afficherInfos()`, pour les 3 comptes créés.