//on souahite manipl=uler des etudiant avec des sctructur de donnee etudiant avec laquelle en creerun model etudiant
//chaque occurence de ce type est carac par un nom, un prenom, et 4 notes 
// developper la struct etudiant AINSI QUE les questio suivantes
// saisi etudiant - afficher etud -- get moy etud -- get max/min note etud 
//une fct estadmis renvoyant true or false indiquant si >10  true/false
// gerer un ens d etudiants avec un tab , dev fct addetudiant ds un tab -- rechercheetudiant -- deletedudiant   


//oussama belhaoudi
//abedlilah belhaj


#include <iostream>
#include<string>
#include"etud.h"
using namespace std;



void gerer(vector<etud> &tab ,int n){

    for (int  i = 0; i < n; i++)
    {
        etud obj;
        obj.saise();
        tab.push_back(obj);
}
    
}
void afficher(vector<etud> &tab ,int n){
    for (int i = 0; i < n; i++)
    {
        tab[i].affich();
        
    }
    
}
int rech(vector<etud> &tab,int n){
    string nomr,prenomr;
    cout << " nom :"<<endl;
    cin >> nomr;
    cout<< " prenom :"<<endl;
    cin >> prenomr;
    for (int i = 0; i < n; i++)
    {
        if (tab[i].getnom() == nomr && tab[i].getprenom()== prenomr)
        { 
            return i;
        }
                                
    }
      return -1; 
}

void add( vector<etud> &tab,int &n){
    
        etud obj ;
        obj.saise();
        tab.push_back(obj); 
        n++; 

}
void supp( vector<etud> &tab,int &n){
    
    int index=rech(tab,n);
    
    if (index > 0)
    {
        tab.erase(tab.begin()+(index-1));    
    }
    else if(index == 0)
    {
        tab.erase(tab.begin()); 
        
    }else
    {
        cout << " etud n'exist pas "<< endl;
    }
    
    
    n--;
    //delete tab;    

}



int main(){

    int n;
    cout << "donner le nombre des etudiants dans la class :"<<endl;
    cin >> n;
    //etud *tab = new etud[n] ;
    vector<etud> tab;
    gerer(tab,n);
    int choix;

    do
    {
        cout << "--------------------------------------------------------------------------------- "<< endl;
        cout << "Gestion des etudiants : "<< endl;       
        cout << "1- Afficher les etudiants"<<endl;
        cout << "2- recherche les etudiants"<<endl;
        cout << "3- ajouter les etudiants"<<endl;
        cout << "4- suprimer les etudiants"<<endl;
        cout << "0- quitter"<<endl;
        cout << "--------------------------------------------------------------------------------- "<< endl;
        cin >> choix;
        switch (choix)
        {
        case 1:
            afficher(tab,n);          
            break;
        case 2:
            if(rech(tab,n) == -1){
                cout<<"n'exist pas"<<endl;
            }else
            {
                cout<<"exist"<<endl;
            }
            break;
        case 3:             
            add(tab,n);                 
            break;
        case 4:
            supp(tab,n);
            break;       
        default:
            break;
        }
        
    } while (choix != 0);
    
  
    return 0;
}

