#include <iostream>
#include<string>
#include"etud.h"

/* void saise();
    void affich();
    float moy();
    float maxi();
    float mini();
    bool admis();*/

void etud::saise(){
    cout << "entrer le nom :" << endl;
    cin >>nom;
    cout << "entrer le prenom :" << endl;
    cin >>prenom;
    for (int i = 0; i < 4; i++)
    {
        cout << "entrer la note de la matier "<< i<<endl;
        cin >> notes[i];
    }
    

}
void etud::affich(){
    cout << "Nom Prenom "<< nom <<  " " <<prenom<< endl;
    for (int i = 0; i < 4; i++)
    {
        cout << " la note de la matier "<< i<<" est "<< notes[i]<<endl;
    
    }   

    cout << "moyenne est "<< moy()<<endl;
    if (admis())
    {
        cout << "Admis"<<endl;
    }else
    {
        cout << "Non Admis"<<endl;
    }
    
    
    
}
float  etud::maxi(){
    float maxi;
    for (int i = 0; i < 4; i++)
    {
       if (maxi<notes[i])
       {
           maxi = notes[i];
           
       }
              
    }
    return maxi;
}
float  etud::mini(){
    float mini;
    for (int i = 0; i < 4; i++)
    {
       if (mini>notes[i])
       {
           mini = notes[i];
           
       }
              
    }
    return mini;
}
float etud::moy(){
    float sm=0;
    for (int i = 0; i < 4; i++)
    {
        sm += notes[i];
    }
    

    return sm/4;
}
bool etud::admis(){
    if (etud::moy()>=10)
    {
        return true;
    }
    return false;
    
}

    string etud::getnom(){
        return nom;
    }
    string etud::getprenom(){
        return prenom;
    }
    /*etud::~etud(){
        cout << "hi"<<endl;
    }
    etud::etud(etud &old_etud){
        nom = old_etud.nom;
        prenom = old_etud.prenom;
        for (int i = 0; i < 4; i++)
        {
            notes[i]=old_etud.notes[i];
        }
        cout << "copy";
        
    }
    etud::etud(){

    }*/