#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <fstream>

#include "Plateau.h"



using namespace std;

int main(int argc, char** argv)
{
	system("Color 0A");
	/*cout << endl;
    cout << "                          Chargement..." << endl;
    cout << endl;
    for(int i = 1; i < 80; i++){
        cout << '%';
        Sleep(70);
    }*/
     Plateau plateau(17,17);

    string const nomFichier("D:/BAGGO  L1TDSI/PROJETS/PROJET C++/ProjetTest2/scores.txt");
    ofstream monFlux(nomFichier.c_str(), ios::app);

    if(monFlux){

        int age(23);
        monFlux << "J'ai " << age << " ans." << endl;
        //Plateau plateau;
        //monFlux << plateau.getScore();
    }
    else{
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;

    }


 system("cls");


	plateau.dessin();

	system("PAUSE");
	return 0;
}


