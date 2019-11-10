#include<iostream>
#include<string>
#include<vector>
using namespace std;


class etud{
    
    string nom,prenom;
    int notes[4] ;
    public :

    void saise();
    void affich();
    float moy();
    float maxi();
    float mini();
    bool admis();
    string getnom();
    string getprenom();
    /*~etud();
    etud(etud&);
    etud();*/

    


};