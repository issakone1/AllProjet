#ifndef PLATEAU_H
#define PLATEAU_H
#include <iostream>
#include <fstream>
#include "Oueurj.h"
#include "Diams.h"
#include "Streumons.h"
#include "Geurchars.h"
#include "Reumus.h"
#include "Teupors.h"


class Plateau
{
    public:
        Plateau();
        Plateau(int w, int z);
        virtual ~Plateau();

        void dessin();
        bool is_side_board(int x, int y);
        void intPlateau();
        void affichePlateau();
        void ecrireDansLeFichier();
        void lireDansLeFichier();
        int getScore();
    protected:
    private:
        int  const tailleX = 17;
        int const tailleY = 17;
        int score = 0;
        char **map ;
      //  std::string nomFichier = "D:/BAGGO  L1TDSI/PROJETS/PROJET C++/ProjetTest2/scores.txt";
//std::ofstream  monFlux;
        Oueurj joueur;
        Diams diams;
        Streumons streumons;
        Geurchars geurchars;
        Reumus reumus;
        Teupors teupors;
};

#endif // PLATEAU_H
