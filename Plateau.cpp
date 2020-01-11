#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <fstream>

#include "Plateau.h"
#include "Oueurj.h"
#include "Diams.h"
#include "Streumons.h"
#include "Geurchars.h"
#include "Reumus.h"
#include "Teupors.h"

using namespace std;

Plateau::Plateau(){}
 Plateau::Plateau(int w, int h): tailleX(w), tailleY(h){
    map= new char*[w];
    for(int x=0; x<w; x++){
        map[x]= new char[h];
    }
}
Plateau::~Plateau(){
 for(int x=0; x<tailleX; x++)
        delete[] map[x];
        delete[] map;
}
/////////////////////////////////////////////////////////

void Plateau::dessin(){

 srand (time(NULL));

	char recommencer('Y'), continuer('Y');

	int nmbrEssaiR(5);

	int teleporter(5);

	//int score(0);

	do{
		do{
			cout << endl << endl;

			/*int const tailleX(17);
			int const tailleY(17);
			char map[tailleX] [tailleY];*/
 /////////////////////////////////////////////////////////////////
			int joueurX(1), joueurY(1);

			joueurX =  joueur.getOueurjX();
			joueurY =  joueur.getOueurjY();
/////////////////////////////////////////////////////////////////
			int diamsX1(1), diamsY1(1);

			diamsX1 = diams.getDiamsX();
			diamsY1 = diams.getDiamsY();
//////////////////////////////////////////////////////////////////
            int geurcharsX(1), geurcharsY(1);
            geurcharsX = geurchars.getGeurcharsX();
            geurcharsY = geurchars.getGeurcharsY();
//////////////////////////////////////////////////////////////////
            int reumusX1(5), reumusY1(5), reumusX2(5), reumusY2(6), reumusX3(5), reumusY3(7);
            int reumusX4(4), reumusY4(7), reumusX5(3), reumusY5(7); //reumusX3(5), reumusY3(7);
            //reumusX1 = reumus.getReumusX();
            //reumusY1 = reumus.getReumusY();
/////////////////////////////////////////////////////////////////
            int teuporsX1(1), teuporsY1(1), teuporsX2(1), teuporsY2(1), teuporsX3(1), teuporsY3(1);
            teuporsX1 = teupors.getTeuporsX();
            teuporsY1 = teupors.getTeuporsY();
            teuporsX2 = teupors.getTeuporsX();
            teuporsY2 = teupors.getTeuporsY();
            teuporsX3 = teupors.getTeuporsX();
            teuporsY3 = teupors.getTeuporsY();

///////////////////////////////////////////////////////////////////
			int streumonsX1(1), streumonsY1(1),streumonsX2(1), streumonsY2(1);
			int streumonsX3(1), streumonsY3(1); //streumonsX4(1),streumonsY4(1);

			streumonsX1 = streumons.getStreumonsX();
			streumonsY1 = streumons.getStreumonsY();

			streumonsX2 = streumons.getStreumonsX();
			streumonsY2 = streumons.getStreumonsY();

			streumonsX3 = streumons.getStreumonsX();
			streumonsY3 = streumons.getStreumonsY();

			//streumonsX4 = streumons.getStreumonsX();
			//streumonsY4 = streumons.getStreumonsY();
/////////////////////////////////////////////////////////////////////////
			char toucheUtilisateur('f');

			bool finJeu(true);

			bool alert(true);

			while(finJeu)
			{


              Plateau::intPlateau();

				map[joueurX] [joueurY] = 'J';

				map[diamsX1] [diamsY1] = '$';

				map[geurcharsX] [geurcharsY] = '*';

				map[reumusX1] [reumusY1] = 'X';
				map[reumusX2] [reumusY2] = 'X';
				map[reumusX3] [reumusY3] = 'X';
				map[reumusX4] [reumusY4] = 'X';
				map[reumusX5] [reumusY5] = 'X';
				//map[reumusX6] [reumusY6] = 'X';

				map[0] [teuporsY1] = '-';
				map[teuporsX2] [0] = '-';
				map[tailleX - 1] [teuporsY3] = '-';

				map[streumonsX1] [streumonsY1] = 's';
				map[streumonsX2] [streumonsY2] = 's';
				map[streumonsX3] [streumonsY3] = 's';
				//map[streumonsX4] [streumonsY4] = 's';
             ////////////////////////////////////////////////////////
				cout << "			   J : ton personnage ; $ : la cible ; s : les menances" << endl;
				cout << endl;
				cout << "					Il te reste " << nmbrEssaiR << " pouvoir ." << endl;
				cout << endl;
				cout << "				   Ton score est de : " << score << " point(s) ." << endl;
				cout << endl;
				cout << "				   Il reste : " << teleporter << " tentative(s) de teleportation." << endl;
				cout << endl; cout << endl;

               Plateau::affichePlateau();

				cout << endl;
				cout << endl;
				cout << "		     >>>> z : haut , q : <- , s : bas , d : -> " << endl;
				cout << endl;
				cout << "                     >>>> p : pouvoir , t : teleporter" << endl;

				toucheUtilisateur = getch();
            //////////////////////////////////////////////////////////////////
				if(toucheUtilisateur == 'z') //FAIT BOUGER LE J EN HAUT
				{

                    if(joueurX - 1 == reumusX1 && joueurY == reumusY1){

                        joueurX = joueurX + 1;
                    }
                    if(joueurX - 1 == reumusX2 && joueurY == reumusY2){

                        joueurX = joueurX + 1;
                    }
                    if(joueurX - 1 == reumusX3 && joueurY == reumusY3){

                        joueurX = joueurX + 1;
                    }

					joueurX -- ;
					if(joueurX <= 0)
					{
						joueurX = 1;
					}
				}
				////////////////////////////////////////////////////////
				if(toucheUtilisateur == 's') //FAIT BOUGER LE J EN BAS
				{
				    if(joueurX + 1 == reumusX1 && joueurY == reumusY1){

                        joueurX = joueurX - 1;
                    }
                    if(joueurX + 1 == reumusX2 && joueurY == reumusY2){

                        joueurX = joueurX - 1;
                    }
				    if(joueurX + 1 == reumusX5 && joueurY == reumusY5){

                        joueurX = joueurX - 1;
                    }
					joueurX ++ ;
					if(joueurX >= tailleX-1)
					{
						joueurX = tailleX - 2;
					}
				}
				///////////////////////////////////////////////////////
				if(toucheUtilisateur == 'q') //FAIT BOUGER LE J A GAUCHE
				{

				    if(joueurX == reumusX1 && joueurY - 1 == reumusY1){

                        joueurY = joueurY + 1;
                    }
                    if(joueurX == reumusX3 && joueurY - 1 == reumusY3){

                        joueurY = joueurY + 1;
                    }
				    if(joueurX == reumusX4 && joueurY - 1 == reumusY4){

                        joueurY = joueurY + 1;
                    }
                    if(joueurX == reumusX5 && joueurY - 1 == reumusY5){

                        joueurY = joueurY + 1;
                    }


					joueurY -- ;
					if(joueurY <= 0)
					{
						joueurY = 1;
					}
				}
				//////////////////////////////////////////////////////////////
				if(toucheUtilisateur == 'd') //FAIT BOUGER LE J A DROITE
				{
				    if(joueurX == reumusX1 && joueurY + 1 == reumusY1){

                        joueurY = joueurY - 1;
                    }
				    if(joueurX == reumusX4 && joueurY + 1 == reumusY4){

                        joueurY = joueurY - 1;
                    }
                    if(joueurX == reumusX5 && joueurY + 1 == reumusY5){

                        joueurY = joueurY - 1;
                    }

					joueurY ++ ;
					if(joueurY >= tailleY-1)
					{
						joueurY = tailleY - 2;
					}
				}


				if(toucheUtilisateur == 't' && teleporter > 0){//Télépprter

                    joueurX =  joueur.getOueurjX();
			        joueurY =  joueur.getOueurjY();
			        map[joueurX] [joueurY] = 'J';

			        teleporter -- ;
				}
				if(joueurX == geurcharsX && joueurY == geurcharsY){//Téléporter

			        teleporter ++ ;

			        geurcharsX = geurchars.getGeurcharsX();
			        geurcharsY = geurchars.getGeurcharsY();
			        map[geurcharsX][geurcharsY] = '*';


				}


				////////////////////////////////////////////////////////////////
				if(toucheUtilisateur == 'p' && nmbrEssaiR > 0) //PLACE LES  Streumons AUX COINS DE LA MAP
				{
					nmbrEssaiR --;
					score -= 3;

					streumonsX1 = 1;
					streumonsY1 = 1;

					streumonsX2 = 1;
					streumonsY2 = tailleY - 2;

					streumonsX3 = tailleX - 2;
					streumonsY3 = tailleY - 2;

					//streumonsX4 = tailleX - 2;
					//streumonsY4 = 1;
				}
////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////// Streumons 1 //////////////////////////////////////////////////
				if(toucheUtilisateur == 'z' && streumonsX1 > joueurX && streumonsX1 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 1
				{
				     if(streumonsX1 - 1 == reumusX1 && streumonsY1 == reumusY1){

                        streumonsX1 = streumonsX1 + 1;
                    }
                    if(streumonsX1 - 1 == reumusX2 && streumonsY1 == reumusY2){

                        streumonsX1 = streumonsX1 + 1;
                    }
                    if(streumonsX1 - 1 == reumusX3 && streumonsY1 == reumusY3){

                        streumonsX1 = streumonsX1 + 1;
                    }
					streumonsX1 -- ;
				}else if(toucheUtilisateur == 'z' && streumonsX1 < joueurX && streumonsX1 < tailleX - 1)
				{
				     if(streumonsX1 + 1 == reumusX1 && streumonsY1 == reumusY1){

                        streumonsX1 = streumonsX1 - 1;
                    }
                    if(streumonsX1 + 1 == reumusX2 && streumonsY1 == reumusY2){

                        streumonsX1 = streumonsX1 - 1;
                    }
                    if(streumonsX1 + 1 == reumusX3 && streumonsY1 == reumusY3){

                        streumonsX1 = streumonsX1 - 1;
                    }
					streumonsX1 ++ ;
				}

				if(toucheUtilisateur == 's' && streumonsX1 < joueurX && joueurX < tailleX)
				{
				     if(streumonsX1 + 1 == reumusX1 && streumonsY1 == reumusY1){

                        streumonsX1 = streumonsX1 - 1;
                    }
                    if(streumonsX1 + 1 == reumusX2 && streumonsY1 == reumusY2){

                        streumonsX1 = streumonsX1 - 1;
                    }
				    if(streumonsX1 + 1 == reumusX5 && streumonsY1 == reumusY5){

                        streumonsX1 = streumonsX1 - 1;
                    }
					streumonsX1 ++ ;
				}else if(toucheUtilisateur == 's' && streumonsX1 > joueurX && joueurX > 0)
				{
				     if(streumonsX1 - 1 == reumusX1 && streumonsY1 == reumusY1){

                        streumonsX1 = streumonsX1 + 1;
                    }
                    if(streumonsX1 - 1 == reumusX2 && streumonsY1 == reumusY2){

                        streumonsX1 = streumonsX1 + 1;
                    }
				    if(streumonsX1 - 1 == reumusX5 && streumonsY1 == reumusY5){

                        streumonsX1 = streumonsX1 + 1;
                    }
					streumonsX1 -- ;
				}

				if(toucheUtilisateur == 'q' && streumonsY1 > joueurY && streumonsY1 > 0)
				{
				    if(streumonsX1 == reumusX1 && streumonsY1 - 1 == reumusY1){

                        streumonsY1 = streumonsY1 + 1;
                    }
                    if(streumonsX1 == reumusX3 && streumonsY1 - 1 == reumusY3){

                        streumonsY1 = streumonsY1 + 1;
                    }
				    if(streumonsX1 == reumusX4 && streumonsY1 - 1 == reumusY4){

                        streumonsY1 = streumonsY1 + 1;
                    }
                    if(streumonsX1 == reumusX5 && streumonsY1 - 1 == reumusY5){

                        streumonsY1 = streumonsY1 + 1;
                    }
					streumonsY1 -- ;
				}else if(toucheUtilisateur == 'q' && streumonsY1 < joueurY && streumonsY1 < tailleY - 1)
				{
				    if(streumonsX1 == reumusX1 && streumonsY1 + 1 == reumusY1){

                        streumonsY1 = streumonsY1 - 1;
                    }
                    if(streumonsX1 == reumusX3 && streumonsY1 + 1 == reumusY3){

                        streumonsY1 = streumonsY1 - 1;
                    }
				    if(streumonsX1 == reumusX4 && streumonsY1 + 1 == reumusY4){

                        streumonsY1 = streumonsY1 - 1;
                    }
                    if(streumonsX1 == reumusX5 && streumonsY1 + 1 == reumusY5){

                        streumonsY1 = streumonsY1 - 1;
                    }
					streumonsY1 ++ ;
				}

				if(toucheUtilisateur == 'd' && streumonsY1 < joueurY && joueurY < tailleY)
				{
				    if(streumonsX1 == reumusX1 && streumonsY1 + 1 == reumusY1){

                        streumonsY1 = streumonsY1 - 1;
                    }
				    if(streumonsX1 == reumusX4 && streumonsY1 + 1 == reumusY4){

                        streumonsY1 = streumonsY1 - 1;
                    }
                    if(streumonsX1 == reumusX5 && streumonsY1 + 1 == reumusY5){

                        streumonsY1 = streumonsY1 - 1;
                    }

					streumonsY1 ++ ;
				}else if(toucheUtilisateur == 'd' && streumonsY1 > joueurY && joueurY > 0)
				{
				    if(streumonsX1 == reumusX1 && streumonsY1 - 1 == reumusY1){

                        streumonsY1 = streumonsY1 + 1;
                    }
				    if(streumonsX1 == reumusX4 && streumonsY1 - 1 == reumusY4){

                        streumonsY1 = streumonsY1 + 1;
                    }
                    if(streumonsX1 == reumusX5 && streumonsY1 - 1 == reumusY5){

                        streumonsY1 = streumonsY1 + 1;
                    }

					streumonsY1 -- ;
				}
////////////////////////// Streumons 2 /////////////////////////////////////
				if(toucheUtilisateur == 'z' && streumonsX2 > joueurX && streumonsX2 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 2
				{
				    if(streumonsX2 - 1 == reumusX1 && streumonsY2 == reumusY1){

                        streumonsX2 = streumonsX2 + 1;
                    }
                    if(streumonsX2 - 1 == reumusX2 && streumonsY2 == reumusY2){

                        streumonsX2 = streumonsX2 + 1;
                    }
                    if(streumonsX2 - 1 == reumusX3 && streumonsY2 == reumusY3){

                        streumonsX2 = streumonsX2 + 1;
                    }
					streumonsX2 -- ;
				}else if(toucheUtilisateur == 'z' && streumonsX2 < joueurX && streumonsX2 < tailleX - 1)
				{
				    if(streumonsX2 + 1 == reumusX1 && streumonsY2 == reumusY1){

                        streumonsX2 = streumonsX2 - 1;
                    }
                    if(streumonsX2 + 1 == reumusX2 && streumonsY2 == reumusY2){

                        streumonsX2 = streumonsX2 - 1;
                    }
                    if(streumonsX2 + 1 == reumusX3 && streumonsY2 == reumusY3){

                        streumonsX2 = streumonsX2 - 1;
                    }
					streumonsX2 ++ ;
				}

				if(toucheUtilisateur == 's' && streumonsX2 < joueurX && joueurX < tailleX)
				{
				     if(streumonsX2 + 1 == reumusX1 && streumonsY2 == reumusY1){

                        streumonsX2 = streumonsX2 - 1;
                    }
                    if(streumonsX2 + 1 == reumusX2 && streumonsY2 == reumusY2){

                        streumonsX2 = streumonsX2 - 1;
                    }
				    if(streumonsX2 + 1 == reumusX5 && streumonsY2 == reumusY5){

                        streumonsX2 = streumonsX2 - 1;
                    }
					streumonsX2 ++ ;
				}else if(toucheUtilisateur == 's' && streumonsX2 > joueurX && joueurX > 0)
				{
				     if(streumonsX2 - 1 == reumusX1 && streumonsY2 == reumusY1){

                        streumonsX2 = streumonsX2 + 1;
                    }
                    if(streumonsX2 - 1 == reumusX2 && streumonsY2 == reumusY2){

                        streumonsX2 = streumonsX2 + 1;
                    }
				    if(streumonsX2 - 1 == reumusX5 && streumonsY2 == reumusY5){

                        streumonsX2 = streumonsX2 + 1;
                    }
					streumonsX2 -- ;
				}

				if(toucheUtilisateur == 'q' && streumonsY2 > joueurY && streumonsY2 > 0)
				{
				   if(streumonsX2 == reumusX1 && streumonsY2 - 1 == reumusY1){

                        streumonsY2 = streumonsY2 + 1;
                    }
                    if(streumonsX2 == reumusX3 && streumonsY2 - 1 == reumusY3){

                        streumonsY2 = streumonsY2 + 1;
                    }
				    if(streumonsX2 == reumusX4 && streumonsY2 - 1 == reumusY4){

                        streumonsY2 = streumonsY2 + 1;
                    }
                    if(streumonsX2 == reumusX5 && streumonsY2 - 1 == reumusY5){

                        streumonsY2 = streumonsY2 + 1;
                    }
					streumonsY2 -- ;
				}else if(toucheUtilisateur == 'q' && streumonsY2 < joueurY && streumonsY2 < tailleY - 1)
				{
                    if(streumonsX2 == reumusX1 && streumonsY2 + 1 == reumusY1){

                        streumonsY2 = streumonsY2 - 1;
                    }
                    if(streumonsX2 == reumusX3 && streumonsY2 + 1 == reumusY3){

                        streumonsY2 = streumonsY2 - 1;
                    }
				    if(streumonsX2 == reumusX4 && streumonsY2 + 1 == reumusY4){

                        streumonsY2 = streumonsY2 - 1;
                    }
                    if(streumonsX2 == reumusX5 && streumonsY2 + 1 == reumusY5){

                        streumonsY2 = streumonsY2 - 1;
                    }
					streumonsY2 ++ ;
				}

				if(toucheUtilisateur == 'd' && streumonsY2 < joueurY && joueurY < tailleY)
				{
				    if(streumonsX2 == reumusX1 && streumonsY2 + 1 == reumusY1){

                        streumonsY2 = streumonsY2 - 1;
                    }
				    if(streumonsX2 == reumusX4 && streumonsY2 + 1 == reumusY4){

                        streumonsY2 = streumonsY2 - 1;
                    }
                    if(streumonsX2 == reumusX5 && streumonsY2 + 1 == reumusY5){

                        streumonsY2 = streumonsY2 - 1;
                    }

					streumonsY2 ++ ;
				}else if(toucheUtilisateur == 'd' && streumonsY2 > joueurY && joueurY > 0)
				{
				    if(streumonsX2 == reumusX1 && streumonsY2 - 1 == reumusY1){

                        streumonsY2 = streumonsY2 + 1;
                    }
				    if(streumonsX2 == reumusX4 && streumonsY2 - 1 == reumusY4){

                        streumonsY2 = streumonsY2 + 1;
                    }
                    if(streumonsX2 == reumusX5 && streumonsY2 - 1 == reumusY5){

                        streumonsY2 = streumonsY2 + 1;
                    }


					streumonsY2 -- ;
				}
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////// Streumons 3 //////////////////////////////
				if(toucheUtilisateur == 'z' && streumonsX3 > joueurX && streumonsX3 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 3
				{
				    if(streumonsX3 - 1 == reumusX1 && streumonsY3 == reumusY1){

                        streumonsX3 = streumonsX3 + 1;
                    }
                    if(streumonsX3 - 1 == reumusX2 && streumonsY3 == reumusY2){

                        streumonsX3 = streumonsX3 + 1;
                    }
                    if(streumonsX3 - 1 == reumusX3 && streumonsY3 == reumusY3){

                        streumonsX3 = streumonsX3 + 1;
                    }
					streumonsX3 -- ;
				}else if(toucheUtilisateur == 'z' && streumonsX3 < joueurX && streumonsX3 < tailleX - 1)
				{
				    if(streumonsX3 + 1 == reumusX1 && streumonsY3 == reumusY1){

                        streumonsX3 = streumonsX3 - 1;
                    }
                    if(streumonsX3 + 1 == reumusX2 && streumonsY3 == reumusY2){

                        streumonsX3 = streumonsX3 - 1;
                    }
                    if(streumonsX3 + 1 == reumusX3 && streumonsY3 == reumusY3){

                        streumonsX3 = streumonsX3 - 1;
                    }
					streumonsX3 ++ ;
				}

				if(toucheUtilisateur == 's' && streumonsX3 < joueurX && joueurX < tailleX)
				{
                    if(streumonsX3 + 1 == reumusX1 && streumonsY3 == reumusY1){

                        streumonsX3 = streumonsX3 - 1;
                    }
                    if(streumonsX3 + 1 == reumusX2 && streumonsY3 == reumusY2){

                        streumonsX3 = streumonsX3 - 1;
                    }
				    if(streumonsX3 + 1 == reumusX5 && streumonsY3 == reumusY5){

                        streumonsX3 = streumonsX3 - 1;
                    }
					streumonsX3 ++ ;
				}else if(toucheUtilisateur == 's' && streumonsX3 > joueurX && joueurX > 0)
				{
                    if(streumonsX3 - 1 == reumusX1 && streumonsY3 == reumusY1){

                        streumonsX3 = streumonsX3 + 1;
                    }
                    if(streumonsX3 - 1 == reumusX2 && streumonsY3 == reumusY2){

                        streumonsX3 = streumonsX3 + 1;
                    }
				    if(streumonsX3 - 1 == reumusX5 && streumonsY3 == reumusY5){

                        streumonsX3 = streumonsX3 + 1;
                    }
					streumonsX3 -- ;
				}

				if(toucheUtilisateur == 'q' && streumonsY3 > joueurY && streumonsY3 > 0)
				{
				    if(streumonsX3 == reumusX1 && streumonsY3 - 1 == reumusY1){

                        streumonsY3 = streumonsY3 + 1;
                    }
                    if(streumonsX3 == reumusX3 && streumonsY3 - 1 == reumusY3){

                        streumonsY3 = streumonsY3 + 1;
                    }
				    if(streumonsX3 == reumusX4 && streumonsY3 - 1 == reumusY4){

                        streumonsY3 = streumonsY3 + 1;
                    }
                    if(streumonsX3 == reumusX5 && streumonsY3 - 1 == reumusY5){

                        streumonsY3 = streumonsY3 + 1;
                    }
					streumonsY3 -- ;
				}else if(toucheUtilisateur == 'q' && streumonsY3 < joueurY && streumonsY3 < tailleY - 1)
				{
				    if(streumonsX3 == reumusX1 && streumonsY3 + 1 == reumusY1){

                        streumonsY3 = streumonsY3 - 1;
                    }
                    if(streumonsX3 == reumusX3 && streumonsY3 + 1 == reumusY3){

                        streumonsY3 = streumonsY3 - 1;
                    }
				    if(streumonsX3 == reumusX4 && streumonsY3 + 1 == reumusY4){

                        streumonsY3 = streumonsY3 - 1;
                    }
                    if(streumonsX3 == reumusX5 && streumonsY3 + 1 == reumusY5){

                        streumonsY3 = streumonsY3 - 1;
                    }
					streumonsY3 ++ ;
				}

				if(toucheUtilisateur == 'd' && streumonsY3 < joueurY && joueurY < tailleY )
				{
				    if(streumonsX3 == reumusX1 && streumonsY3 + 1 == reumusY1){

                        streumonsY3 = streumonsY3 - 1;
                    }
				    if(streumonsX3 == reumusX4 && streumonsY3 + 1 == reumusY4){

                        streumonsY3 = streumonsY3 - 1;
                    }
                    if(streumonsX3 == reumusX5 && streumonsY3 + 1 == reumusY5){

                        streumonsY3 = streumonsY3 - 1;
                    }

					streumonsY3 ++ ;
				}else if(toucheUtilisateur == 'd' && streumonsY3 > joueurY && joueurY > 0)
				{
				    if(streumonsX3 == reumusX1 && streumonsY3 - 1 == reumusY1){

                        streumonsY3 = streumonsY3 + 1;
                    }
				    if(streumonsX3 == reumusX4 && streumonsY3 - 1 == reumusY4){

                        streumonsY3 = streumonsY3 + 1;
                    }
                    if(streumonsX3 == reumusX5 && streumonsY3 - 1 == reumusY5){

                        streumonsY3 = streumonsY3 + 1;
                    }


					streumonsY3 --;
				}
//////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////// Streumns 4 //////////////////////////////////////////
				/*if(toucheUtilisateur == 'z' && streumonsX4 > joueurX && streumonsX4 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 4
				{
					streumonsX4 -- ;
				}else if(toucheUtilisateur == 'z' && streumonsX4 < joueurX && streumonsX4 < tailleX - 1)
				{
					streumonsX4 ++ ;
				}

				if(toucheUtilisateur == 's' && streumonsX4 < joueurX && joueurX < tailleX)
				{
					streumonsX4 ++ ;
				}else if(toucheUtilisateur == 's' && streumonsX4 > joueurX && joueurX > 0)
				{
					streumonsX4 -- ;
				}

				if(toucheUtilisateur == 'q' && streumonsY4 > joueurY && streumonsY4 > 0)
				{
					streumonsY4 -- ;
				}else if(toucheUtilisateur == 'q' && streumonsY4 < joueurY && streumonsY4 < tailleY - 1)
				{
					streumonsY4 ++ ;
				}

				if(toucheUtilisateur == 'd' && streumonsY4 < joueurY && joueurY < tailleY)
				{
					streumonsY4 ++ ;
				}else if(toucheUtilisateur == 'd' && streumonsY4 > joueurY && joueurY > 0)
				{
					streumonsY4 -- ;
				}*/
///////////////////////////////////////////////////////////////////////////////////
				/*if(toucheUtilisateur == 's' && streumonsX1 + 1 == streumonsX2 && streumonsY1 == streumonsY2){
                    streumonsX2 ++;

				}

				if(toucheUtilisateur == 'z' && streumonsX1 - 1 == streumonsX2 && streumonsY1 == streumonsY2){
                    streumonsX2 --;

				}

				if(toucheUtilisateur == 's' && streumonsX1 + 1 == streumonsX3 && streumonsY1 == streumonsY3){
                    streumonsX3 ++;

				}

				if(toucheUtilisateur == 'z' && streumonsX1 - 1 == streumonsX3 && streumonsY1 == streumonsY3){
                    streumonsX3 --;

				}
				////////////////////////////////////////////////////

				if(toucheUtilisateur == 'd' && streumonsX1 == streumonsX2 && streumonsY1 + 1 == streumonsY2){
                    streumonsY2 ++;

				}

				if(toucheUtilisateur == 'q' && streumonsX1 == streumonsX2 && streumonsY1 - 1 == streumonsY2){
                    streumonsY2 --;

				}

				if(toucheUtilisateur == 'd' && streumonsX1 == streumonsX3 && streumonsY1 + 1 == streumonsY3){
                    streumonsY3 ++;

				}

				if(toucheUtilisateur == 'q' && streumonsX1 == streumonsX3 && streumonsY1 - 1 == streumonsY3){
                    streumonsY3 --;

				}*/




                /*if(streumonsX1 + 1 == streumonsX4 && streumonsY1 + 1 == streumonsY2){
                    streumonsX2 ++;
                    streumonsY2 ++;
				}

				if(streumonsX1 - 1 == streumonsX2 && streumonsY1 - 1 == streumonsY2){
                    streumonsX2 --;
                    streumonsY2 --;
				}*/


              //////////////////////////////////////////////////////////////////////////////////
				if(joueurX == diamsX1 && joueurY == diamsY1)
				{
					//finJeu = false;
					diamsX1 = diams.getDiamsX();
			        diamsY1 = diams.getDiamsY();
			        map[diamsX1] [diamsY1] = '$';

                    teuporsY1 = teupors.getTeuporsY();
                    teuporsX2 = teupors.getTeuporsX();

                    teuporsY3 = teupors.getTeuporsY();

                     /*if(map[0] [teuporsY1] = '-'){map[0] [teuporsY1] = '+';}
                     if(map[teuporsX2] [0] = '-'){map[teuporsX2] [0] = '+';}
                     if(map[tailleX - 1] [teuporsY3] = '+'){map[tailleX - 1] [teuporsY3] = '+';}*/

					score += 1;

					//alert = true;
				}
				//////////////////////////////////////////////////////////
				if(joueurX == streumonsX1 && joueurY == streumonsY1)
				{
					finJeu = false;

					//score -= 40;

					alert = false;
				}
				if(joueurX == streumonsX2 && joueurY == streumonsY2)
				{
					finJeu = false;

					//score -= 40;

					alert = false;
				}
				if(joueurX == streumonsX3 && joueurY == streumonsY3)
				{
					finJeu = false;

					//score -= 40;

					alert = false;
				}
				/*if(joueurX == streumonsX4 && joueurY == streumonsY4)
				{
					finJeu = false;

					//score -= 40;

					alert = false;
				}*/

				system("CLS");
				cout << endl << endl;
			}

			system("CLS");

			if(alert)
			{
				cout << "Vous avez atteint la sortie !" << endl;
			}else{
				cout << "Vous avez etait touche par un Streumons !" << endl;
			}

			cout << "\nContinuer ? Y/N" << endl;
			cin >> continuer;

			system("CLS");


		}while(continuer == 'y' );

		system("CLS");

		cout << "\nRecommencer ? Y/N" << endl;
		cin >> recommencer;

		system("CLS");

	}while(recommencer == 'y');

	cout << "Votre SCORE est de : " << score << " points !" << endl;

     ////////////////// Enrigistrement du Score dans le fichier /////////////////////

        // Sleep(100);
}


bool Plateau::is_side_board(int x,int y){
        return (
        x == 0 || x== tailleX-1 ||
        y==0 || y== tailleY-1 );
}

     void Plateau::intPlateau(){
                 for(int y=0; y< tailleY; y++){
                       for(int x=0; x<tailleX; x++){
                            if(is_side_board(x, y))
                                map[y][x]= 'X';
                            else
                                map[y][x]= ' ';
                       }
              }
         }

  void Plateau::affichePlateau(){
             for(int i(0); i < tailleY; i++)
				{
					cout << "				" ;
					for(int j(0); j < tailleX; j++)
					{
						cout << " ";

						cout << map[i][j];

					}

					cout << endl;
				}
}

/*int Plateau::getScore(){
    return score;
*/

