#include <iostream>
#include<stdlib.h>
#include<time.h>




int main() {
	using namespace std;
	srand(time(NULL));

	//Hero stats
		//Hero 1
	int heroHp1 = 100;
	int heroAtk1 = 10;
		//Hero 2
	int heroHp2 = 100;
	int heroArk2 = 10;
		//bool
	bool heroAlive = true;


	//Enemies stats

	int enemyHp1 = 0;
	int enemyAtk1 = 0;
	int enemyHp2 = 0;
	int enemyAtk2 = 0;


	//menu
	int heroSelected = 0;
	int heroValue = 0;

	//in-game
	int turn = 1;
	int typeOfAtk;
	int atkremaining1 = 5;
	int atkremaining2 = 10;

	////bosses
	//int witchId = 0;
	//int zombieId = 1;
	//int flyingdemonId = 2;
	//string b1 = " ";
	//string b2 = " ";

	//int bossselected1 = 0;
	//int bossselected2 = 0;
	//bossselected1 = 0 + rand() % 3;
	//bossselected2 = bossselected2 + rand() % 2;

	//if (bossselected1 == 0)
	//{
	//	b1 = "witch";
	//}
	//else if (bossselected1 == 1)
	//{
	//	b1 = "zombie";
	//}
	//else if (bossselected1 == 2)
	//{
	//	b1 = "flyingdemon";
	//}

	//if (bossselected2 == 0)
	//{
	//	b2 = "witch";
	//}
	//else if (bossselected2 == 1)
	//{
	//	b2 = "zombie";
	//}
	//else if (bossselected2 == 2)
	//{
	//	b2 = "flyingdemon";

	//	cout << "enemigo 1 = " << bossselected1 << b1;
	//	cout << "enemigo 2 = " << bossselected2 << b2;
	int prueba = 1;


		while (heroSelected == 0)
		{
			cout << "Elige un heroe escribiendo '1' o '2'\n 1. Heroe 1\n 2. Heroe 2\n";
			cin >> heroValue;
			if (heroValue == 1 || heroValue == 2)
			{
				heroSelected = heroSelected + 1;

			}
			else
			{
				cout << "Error, introduzca '1' o '2'\n";
			}
		}
		cout << "heroe elegido\n";

		if (heroSelected = prueba)
		{
			while ((enemyHp1 > 0 || enemyHp2 > 0) && heroHp1 > 0)
			{
				cout << "-------------\n";
				cout << "   TURNO " << turn << "\n";
				cout << "-------------\n";

				cout << "¿Que tipo de ataque quieres realizar? responde con '1' o '2'\n";
				cout << "1. Hechizo explosivo (" << atkremaining1 << ")" << "   2. Magia intensa (" << atkremaining2 << ")\n";
				cin >> typeOfAtk;
				if (typeOfAtk == 1)
				{

				}
			}
		}
		else
		{

		}
	}