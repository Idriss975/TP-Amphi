#include <iostream>
#include <string>
using namespace std;

struct Date
{
    int jour, mois,annee;
};
struct Adresse
{
    int numero, codepostal;
    string rue, ville; 
};
struct Employe
{
    string nom, prenom;
    Adresse residence;
    Date datenaissance;
};
Employe SaisirEmploye()
{
    string nom, prenom;
    Adresse resid;
    Date DN;
    string dated;
    cout << "Entrez les données de l'employe.\nLe nom> ";
    cin >> nom;
    cout << "Le prenom> ";
    cin >> prenom;

    cout << "Numero> ";
    cin >> resid.numero;
    cout << "Code postal > ";
    cin >> resid.codepostal;
    cout << "Ville > ";
    cin >> resid.ville;
    cout << "Rue (Adresse)> ";
    cin >> resid.rue;

    cout << "Date de naissance > ";
    cin >> dated;
    DN.jour = stoi(dated.substr(0,2));
    DN.mois = stoi(dated.substr(3,2));
    DN.annee = stoi(dated.substr(6,4));

    return Employe {nom, prenom, resid, DN};
}

bool AnneeNaissance(Employe emp, int annee)
{
    if (emp.datenaissance.annee < annee)
        return true;
    return false;
}

bool VilleResidence(Employe EMP, string ville)
{
    return EMP.residence.ville == ville;
}

int main()
{
    Employe Emp1 = SaisirEmploye();
    cout << "\n\nVerification de naissance\n Inserez l'année > ";
    int annee;
    cin >> annee;
    cout << AnneeNaissance(Emp1, annee);

    cout << "\n\nVerification de residence\n Inserez la ville > ";
    string ville;
    cin >> ville;
    cout << VilleResidence(Emp1, ville);
    return 0;
}