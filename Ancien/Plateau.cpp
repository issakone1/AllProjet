#include <iostream>
#include<conio.h>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include "Plateau.h"
#include "Teupors.h"

using namespace std;

Plateau::Plateau(){}
Plateau::Plateau(int l,int h):largeur{l}, hauteur{h} {}
Plateau::~Plateau(){}


int Plateau::getLargeur(){
    return largeur;
}

 int Plateau::getHauteur(){
    return hauteur;
}

 void Plateau::hauteurGauche(){
   // system("cls");
     char mapping[Plateau::getHauteur()][Plateau::getLargeur()];

   for(int i = 0 ; i < Plateau::getHauteur(); i++){
        for(int  j= 0 ; j < Plateau::getLargeur(); j++){
            if(j == 0)
               mapping[i][j] = 'X';
            if(j == Plateau::getLargeur() - 1)
                 mapping[i][j] = 'X';

            if(i == 0)
               mapping[i][j] = 'X';
            if(i == Plateau::getHauteur() - 1)
                 mapping[i][j] = 'X';

           if((5 < i && i < 10 ) &&(5 < j && j < 10)){
                mapping[i][j] = 'X';
            }

        }
   }
  for(int i = 0 ; i < Plateau::getHauteur(); i++){
        cout << "         ";
        for(int  j= 0 ; j < Plateau::getLargeur(); j++){
            //cout << " ";
           if (j == 0){
            cout << mapping[i][j] ;
           }
          if(j == Plateau::getLargeur() - 1){
             cout << mapping[i][j];
           }

          /* if((5 < i && i < 10 ) &&(5 < j && j < 10)){
                cout << mapping[i][j] ;
            }*/

            if (i == 0){
             cout << mapping[i][j] ;
           }
            if(i == Plateau::getHauteur() - 1){
             cout << mapping[i][j];
           }

        }
      cout << endl;
    }

}
/*void Plateau::hauteurDroite(){
   // system("cls");
     char mapping[Plateau::getHauteur()][Plateau::getLargeur()];

   for(int i = 0 ; i < Plateau::getHauteur(); i++){
        for(int  j= 0 ; j < Plateau::getLargeur(); j++){
            if(j == Plateau::getLargeur()-1)
               mapping[i][j] = 'X';
        }
   }
  for(int i = 0 ; i < Plateau::getHauteur(); i++){
        cout << "         ";
        for(int  j= 0 ; j < Plateau::getLargeur(); j++){
            cout << " ";
      if (j == Plateau::getLargeur()-1)
             cout << mapping[i][j] ;
        }
      cout << endl;
    }

}*/

void Plateau::dessiner(){
  system("cls");
   char continuer = 'y';
  do{
    Plateau::hauteurGauche();
    //Plateau::hauteurDroite();

   cout << "Voulez vous continuer ? Y/N" << endl;
   cin >> continuer;
}while(continuer == 'y');

   /* for(int i = 0 ; i < Plateau::getLargeur()+1; i++){
        cout << "X";
    }
 cout << endl;


    for(int i = 0 ; i < Plateau::getHauteur(); i++){
         for(int j = 0 ; j < Plateau::getLargeur(); j++){
          ////////////////////////////////////////////////////////////////
            if(j == 0){
               //cout << "X";

               if(i == teupors.getTeuporsY() +5 || i == teupors.getTeuporsY()+7){
                    if(i == teupors.getTeuporsY() ){
                        cout << "+";
                    }
                    if(i == teupors.getTeuporsY()){
                         cout << "-";
                    }
               }else{
                   cout << "X";
               }


           }
               /////////////////////////////////////////////////////////////////

               ////////////////////////////////BLOC 1//////////////////////////////
           if(i == Plateau::getHauteur()- 19 && j == Plateau::getLargeur() - 39){
                for(int i = 0 ; i < Plateau::getLargeur()- 35; i++){
                         cout << "X";
                 }

                for(int i = 0 ; i < Plateau::getHauteur() - 15; i++){
                   for(int j = 0 ; j < Plateau::getLargeur() - 35; j++){
                        if(j == 0){
                            cout << "X";
                        }else{
                            cout << " ";
                        }

                   }
                    cout << endl;
               }
           }

          // else if (i == fluitY && j == fluitX)
              //   cout << "F";


           else{
               /* bool print = false;
                for(int k = 0; k < ntail; k++){
                    if(tailX[k] == j && tailY[k] == i){
                        cout << "+";
                    }*/
               // }
               // if(!print)
             /*   cout << " ";

           }

            //}


            if(j==Plateau::getLargeur() -1){
                 //cout << "X";
                 ////////////////////////////////////////////////////////////////
                 if(i == Plateau::getHauteur()-5 || i == Plateau::getHauteur()-15){
                    if(i == Plateau::getHauteur()-5 ){
                        cout << "+";
                    }
                    if(i == Plateau::getHauteur()-15){
                         cout << "-";
                    }
               }else{
                   cout << "X";
               }
               /////////////////////////////////////////////////////////////////
            }

         }
         cout << endl;
    }
   // cout << endl;

    for(int i = 0 ; i < Plateau::getLargeur()+1; i++){
        cout << "X";
    }
    cout << endl;*/

    cout << "Teleports: " << Plateau::teleports << endl;
   cout << "Score: " << Plateau::score << endl;
   cout << "Diams: " << Plateau::diams << endl;
}
