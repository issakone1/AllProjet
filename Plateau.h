#ifndef PLATEAU_H
#define PLATEAU_H
#include "Teupors.h"

class Plateau
{
    public:
        Plateau();
        Plateau(int l, int h);
        virtual ~Plateau();

        void dessiner();
        int getLargeur() ;
       // void setLargeur(int l);
        int getHauteur();
        //void setHauteur(int h);
         void hauteurGauche();
         void hauteurDroite();
         void largeurHaut();
         void largeurBas();


    protected:
       // bool finDeJeu;
    private:
        int const largeur = 20;
        int const hauteur = 20;
        int score = 0;
        int diams = 0;
        int teleports = 0;
        Teupors teupors;
        //char mapping[hauteur][7];


};

#endif // PLATEAU_H
