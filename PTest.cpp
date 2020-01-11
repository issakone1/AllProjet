#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <time.h>

/*#include "Plateau.h"

#include "fPosition.h"

#include "sPosition.h"

#include "mPosition.h"

using namespace std;

Plateau::Plateau(){}
Plateau::~Plateau(){}


void Plateau::dessin(){

 srand (time(NULL));

	char recommencer('Y'), continuer('Y');

	int nmbrEssaiR(5);

	int score(0);

	do{
		do{
			cout << endl << endl;

			int const tailleX(21);
			int const tailleY(21);
			char map[tailleX] [tailleY];
 /////////////////////////////////////////////////////////////////
			int positionX(0), positionY(0);

			positionX = fPositionX();
			positionY = fPositionY();
/////////////////////////////////////////////////////////////////
			int sortieX(0), sortieY(0);

			sortieX = sPositionX();
			sortieY = sPositionY();
///////////////////////////////////////////////////////////////////
			int monstreX1(0), monstreY1(0), monstreX2(0), monstreY2(0), monstreX3(0), monstreY3(0), monstreX4(0), monstreY4(0);

			monstreX1 = mPositionX();
			monstreY1 = mPositionY();

			monstreX2 = mPositionX();
			monstreY2 = mPositionY();

			monstreX3 = mPositionX();
			monstreY3 = mPositionY();

			monstreX4 = mPositionX();
			monstreY4 = mPositionY();
/////////////////////////////////////////////////////////////////////////
			char toucheUtilisateur('f');

			bool finJeu(true);

			bool sortie(false);

			while(finJeu)
			{
				for(int i(0); i < tailleY; i++)
				{
					for(int o(0); o < tailleX; o++)
					{
						map[i][o] = '-';
					}
				}

				map[0] [0] = 'O';
				map[0] [tailleY - 1] = 'O';
				map[tailleX - 1] [0] = 'O';
				map[tailleX - 1] [tailleY - 1] = 'O';
				map[positionX] [positionY] = '*';
				map[sortieX] [sortieY] = '#';
				map[monstreX1] [monstreY1] = '$';
				map[monstreX2] [monstreY2] = '$';
				map[monstreX3] [monstreY3] = '$';
				map[monstreX4] [monstreY4] = '$';

				cout << "			   * : ton personnage ; # : la sortie ; $ : les monstres" << endl;
				cout << "					Il te reste " << nmbrEssaiR << " pouvoir ." << endl;
				cout << "				   Ton score est de : " << score << " point(s) ." << endl;

				for(int i(0); i < tailleY; i++)
				{
					cout << "				" ;
					for(int o(0); o < tailleX; o++)
					{
						cout << " ";
						cout << map[i][o] ;
					}

					cout << endl;
				}

				cout << endl;
				cout << "		  		  Z \\|/ , Q <- , S/|\\ , D -> , R pouvoir ?" << endl;
				toucheUtilisateur = getch();
            //////////////////////////////////////////////////////////////////
				if(toucheUtilisateur == 'z') //FAIT BOUGER LE * EN HAUT
				{
					positionX -- ;
					if(positionX <= 0)
					{
						positionX = 0;
					}
				}
				////////////////////////////////////////////////////////
				if(toucheUtilisateur == 's') //FAIT BOUGER LE * EN BAS
				{
					positionX ++ ;
					if(positionX >= tailleX)
					{
						positionX = tailleX - 1;
					}
				}
				///////////////////////////////////////////////////////
				if(toucheUtilisateur == 'q') //FAIT BOUGER LE * A GAUCHE
				{
					positionY -- ;
					if(positionY <= 0)
					{
						positionY = 0;
					}
				}
				//////////////////////////////////////////////////////////////
				if(toucheUtilisateur == 'd') //FAIT BOUGER LE * A DROITE
				{
					positionY ++ ;
					if(positionY >= tailleY)
					{
						positionY = tailleY - 1;
					}
				}
				////////////////////////////////////////////////////////////////
				if(toucheUtilisateur == 'r' && nmbrEssaiR > 0) //PLACE LES 3 MONSTRES AUX COINS DE LA MAP
				{
					nmbrEssaiR --;
					score -= 10;

					monstreX1 = 0;
					monstreY1 = 0;

					monstreX2 = 0;
					monstreY2 = tailleY - 1;

					monstreX3 = tailleX - 1;
					monstreY3 = tailleY - 1;

					monstreX4 = tailleX - 1;
					monstreY4 = 0;
				}
                /////////////////////////////////////////////////////////////////////
				if(toucheUtilisateur == 'z' && monstreX1 > positionX && monstreX1 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 1
				{
					monstreX1 -- ;
				}else if(toucheUtilisateur == 'z' && monstreX1 < positionX && monstreX1 < tailleX - 1)
				{
					monstreX1 ++ ;
				}

				if(toucheUtilisateur == 's' && monstreX1 < positionX && positionX < tailleX)
				{
					monstreX1 ++ ;
				}else if(toucheUtilisateur == 's' && monstreX1 > positionX && positionX > 0)
				{
					monstreX1 -- ;
				}

				if(toucheUtilisateur == 'q' && monstreY1 > positionY && monstreY1 > 0)
				{
					monstreY1 -- ;
				}else if(toucheUtilisateur == 'q' && monstreY1 < positionY && monstreY1 < tailleY - 1)
				{
					monstreY1 ++ ;
				}

				if(toucheUtilisateur == 'd' && monstreY1 < positionY && positionY < tailleY)
				{
					monstreY1 ++ ;
				}else if(toucheUtilisateur == 'd' && monstreY1 > positionY && positionY > 0)
				{
					monstreY1 -- ;
				}

				if(toucheUtilisateur == 'z' && monstreX2 > positionX && monstreX2 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 2
				{
					monstreX2 -- ;
				}else if(toucheUtilisateur == 'z' && monstreX2 < positionX && monstreX2 < tailleX - 1)
				{
					monstreX2 ++ ;
				}

				if(toucheUtilisateur == 's' && monstreX2 < positionX && positionX < tailleX)
				{
					monstreX2 ++ ;
				}else if(toucheUtilisateur == 's' && monstreX2 > positionX && positionX > 0)
				{
					monstreX2 -- ;
				}

				if(toucheUtilisateur == 'q' && monstreY2 > positionY && monstreX2 > 0)
				{
					monstreY2 -- ;
				}else if(toucheUtilisateur == 'q' && monstreY2 < positionY && monstreX2 < tailleY - 1)
				{
					monstreY2 ++ ;
				}

				if(toucheUtilisateur == 'd' && monstreY2 < positionY && positionY < tailleY)
				{
					monstreY2 ++ ;
				}else if(toucheUtilisateur == 'd' && monstreY2 > positionY && positionY > 0)
				{
					monstreY2 -- ;
				}

				if(toucheUtilisateur == 'z' && monstreX3 > positionX && monstreX3 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 3
				{
					monstreX3 -- ;
				}else if(toucheUtilisateur == 'z' && monstreX3 < positionX && monstreX3 < tailleX - 1)
				{
					monstreX3 ++ ;
				}

				if(toucheUtilisateur == 's' && monstreX3 < positionX && positionX < tailleX)
				{
					monstreX3 ++ ;
				}else if(toucheUtilisateur == 's' && monstreX3 > positionX && positionX > 0)
				{
					monstreX3 -- ;
				}

				if(toucheUtilisateur == 'q' && monstreY3 > positionY && monstreX3 > 0)
				{
					monstreY3 -- ;
				}else if(toucheUtilisateur == 'q' && monstreY3 < positionY && monstreX3 < tailleY - 1)
				{
					monstreY3 ++ ;
				}

				if(toucheUtilisateur == 'd' && monstreY3 < positionY && positionY < tailleY )
				{
					monstreY3 ++ ;
				}else if(toucheUtilisateur == 'd' && monstreY3 > positionY && positionY > 0)
				{
					monstreY3 --;
				}

				if(toucheUtilisateur == 'z' && monstreX4 > positionX && monstreX4 > 0) //PERMET DE FAIRE BOUGER LE MONSTRE 4
				{
					monstreX4 -- ;
				}else if(toucheUtilisateur == 'z' && monstreX4 < positionX && monstreX4 < tailleX - 1)
				{
					monstreX4 ++ ;
				}

				if(toucheUtilisateur == 's' && monstreX4 < positionX && positionX < tailleX)
				{
					monstreX4 ++ ;
				}else if(toucheUtilisateur == 's' && monstreX4 > positionX && positionX > 0)
				{
					monstreX4 -- ;
				}

				if(toucheUtilisateur == 'q' && monstreY4 > positionY && monstreY4 > 0)
				{
					monstreY4 -- ;
				}else if(toucheUtilisateur == 'q' && monstreY4 < positionY && monstreY4 < tailleY - 1)
				{
					monstreY4 ++ ;
				}

				if(toucheUtilisateur == 'd' && monstreY4 < positionY && positionY < tailleY)
				{
					monstreY4 ++ ;
				}else if(toucheUtilisateur == 'd' && monstreY4 > positionY && positionY > 0)
				{
					monstreY4 -- ;
				}
              //////////////////////////////////////////////////////////////////////////////////
				if(positionX == sortieX && positionY == sortieY)
				{
					finJeu = false;

					score += 50;

					sortie = true;
				}
				//////////////////////////////////////////////////////////
				if(positionX == monstreX1 && positionY == monstreY1)
				{
					finJeu = false;

					score -= 40;

					sortie = false;
				}
				if(positionX == monstreX2 && positionY == monstreY2)
				{
					finJeu = false;

					score -= 40;

					sortie = false;
				}
				if(positionX == monstreX3 && positionY == monstreY3)
				{
					finJeu = false;

					score -= 40;

					sortie = false;
				}

				system("CLS");
				cout << endl << endl;
			}

			system("CLS");

			if(sortie)
			{
				cout << "Vous avez atteint la sortie !" << endl;
			}else{
				cout << "Vous avez etait touche par un monstre !" << endl;
			}

			cout << "\nContinuer ? Y/N" << endl;
			cin >> continuer;

			system("CLS");

		}while(continuer == 'y' || continuer == 'y');

		system("CLS");

		cout << "\nRecommencer ? Y/N" << endl;
		cin >> recommencer;

		system("CLS");

	}while(recommencer == 'y' || recommencer == 'Y');

	cout << "Votre SCORE est de : " << score << " points !" << endl;


}*/
