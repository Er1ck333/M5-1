#include <iostream>
#include "libreria.h"
#include<time.h>
#include<stdlib.h>
using namespace std;

int xHeroe = 2;
int yHeroe = 9;



int salida = 0;

string nombre = "";
personaje heroe {10, 200, "Nombre", 2, 9 };
personaje enemigo1 { 10, 100, "Guarida", 2, 9 };
personaje enemigo2 { 10, 100, "Guarida", 2, 9 };
personaje enemigo3 { 10, 100, "Guardia", 2, 9 };
personaje enemigo4 { 10, 100, "Guardia", 2, 9 };
EnemigoFinal boss{ 10, 150, "Jefe Final", 0, 0, 0, 0 };

void dibujo() {
	system("cls");
	int array[10][5];
	yHeroe = heroe.getPosicionY();
	xHeroe = heroe.getPosicionX();
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t x = 0; x < 5; x++)
		{
			array[i][x] = 0;
		}
	}
	array[yHeroe][xHeroe] = 1;
	array[0][salida] = 2;


	cout << "----------------------------------------------------------------------------------\n";
	for (size_t y = 0; y < 10; y++)
	{
		int comp = 0;
		int comp2 = 0;
		int comp3 = 0;
			for (size_t z = 0; z < 5; z++)
			{
				cout << "||";
				for (size_t e = 0; e < 5; e++)
				{
					if (array[y][e] == 1)
					{
						if (comp == 0)
						{
							cout << "  x   x   x   ||";
							comp = comp + 1;
						}
						else if (comp == 1)
						{
							cout << "  xx x x xx   ||";
							comp = comp + 1;
						}
						else if (comp == 2)
						{
							cout << "  x x   x x   ||";
							comp = comp + 1;
						}
						else if (comp == 3)
						{
							cout << "  x       x   ||";
							comp = comp + 1;
						}
						else if (comp == 4)
						{
							cout << "  xxxxxxxxx   ||";
							comp = comp + 1;
						}
					}
					else
					{
						cout << "		||";
					}
				}
				cout << "\n";
			}
			cout << "----------------------------------------------------------------------------------\n";
	}

}
int controlGuardias = 1;
void guardiasSet() {
	cout << "CARGANDO ENEMIGOS...\n";
	int array[10][5];
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t x = 0; x < 5; x++)
		{
			array[i][x] = 0;
		}
	}
	array[heroe.getPosicionY()][heroe.getPosicionX()] = 1;
	array[0][salida] = 2;
	
	int control = 0;
	bool en1 = false;
	bool en2 = false;
	bool en3 = false;
	bool en4 = false;
	while (controlGuardias == 1)
	{
		int numY = rand() % 10;
		int numX = rand() % 5;
		if (en1 == false)
		{
			enemigo1.setPosicionX(numX);
			enemigo1.setPosicionY(numY);
		}
		if (en2 == false)
		{
			enemigo2.setPosicionX(rand() % 5);
			enemigo2.setPosicionY(rand() % 10);
		}
		if (en3 == false)
		{
			enemigo3.setPosicionX(rand() % 5);
			enemigo3.setPosicionY(rand() % 10);
		}
		if (en4 == false)
		{
			enemigo4.setPosicionX(rand() % 5);
			enemigo4.setPosicionY(rand() % 10);
		}

		if (array[enemigo1.getPosicionY()][enemigo1.getPosicionX()] == 0)
		{
			array[enemigo1.getPosicionY()][enemigo1.getPosicionX()] = 4;
			control = control + 1;
			en1 = true;
			cout << "enemigo1\n";
		}
		if (array[enemigo2.getPosicionY()][enemigo2.getPosicionX()] == 0)
		{
			array[enemigo2.getPosicionY()][enemigo2.getPosicionX()] = 4;
			control = control + 1;
			en2 = true;
			cout << "enemigo2\n";
		}
		if (array[enemigo3.getPosicionY()][enemigo3.getPosicionX()] == 0)
		{
			array[enemigo3.getPosicionY()][enemigo3.getPosicionX()] = 4;
			control = control + 1;
			en3 = true;
			cout << "enemigo3\n";
		}
		if (array[enemigo4.getPosicionY()][enemigo4.getPosicionX()] == 0)
		{
			array[enemigo4.getPosicionY()][enemigo4.getPosicionX()] = 4;
			control = control + 1;
			en4 = true;
			cout << "enemigo4\n";
		}
		if (control == 4)
		{
			controlGuardias = 0;
		}
	}
}
int enEn = 1;
void combate() {
	cout << "COMBATE!\n";
	int enDaMax = 5;
	int controlCombate = 1;
	while (controlCombate == 1)
	{
		system("cls");
		int enVida = 0;
		string enNombre = "";
		int enAtaque = 0;
		string mov = "";
		int controlTurno = 1;
		int proc = 0;
		if (enEn == 1)
		{
			enVida = enemigo1.getVida();
			enNombre = enemigo1.getNombre();
			enAtaque = enemigo1.getAtaque();
		}
		else if (enEn == 2)
		{
			enVida = enemigo2.getVida();
			enNombre = enemigo2.getNombre();
			enAtaque = enemigo2.getAtaque();
		}
		else if (enEn == 3)
		{
			enVida = enemigo3.getVida();
			enNombre = enemigo3.getNombre();
			enAtaque = enemigo3.getAtaque();
		}
		else if (enEn == 4)
		{
			enVida = enemigo4.getVida();
			enNombre = enemigo4.getNombre();
			enAtaque = enemigo4.getAtaque();
		}
		heroe.setAtaque(rand() % 15 + 5);
		cout << heroe.getNombre() << "\n";
		cout << "Vida: " << heroe.getVida() << "\n";

		cout << enNombre << "\n";
		cout << "Vida: " << enVida << "\n";
		while (controlTurno == 1)
		{
			cout << "[A] Atacar [P] Protegerse\n";
			cin >> mov;
			if (mov == "A")
			{
				enVida = enVida - heroe.getAtaque();
				controlTurno = 0;
			}
			else if (mov == "P")
			{
				proc = 1;
				heroe.setVida(heroe.getVida() + rand() % 10 + 8);
				enDaMax = enDaMax + 5;
				controlTurno = 0;
			}
		}
		if (enVida > 0)
		{
			if (proc != 1)
			{
				heroe.setVida(heroe.getVida() - (enAtaque + rand() % enDaMax));
			}
		}
		else
		{
			controlCombate = 0;
		}
		if (heroe.getVida() < 1)
		{
			controlCombate = 0;
			heroe.setVida(0);
		}

		if (enEn == 1)
		{
			enemigo1.setVida(enVida);
		}
		else if (enEn == 2)
		{
			enemigo2.setVida(enVida);
		}
		else if (enEn == 3)
		{
			enemigo3.setVida(enVida);
		}
		else if (enEn == 4)
		{
			enemigo4.setVida(enVida);
		}

	}
}

void salidaFinal() {
	int controlFinal = 1;
	int enDaMax = 5;
	cout << "Has logrado encontrar la salida, pero hay un ultimo enemigo al que debes derrotar\n";
	while (controlFinal == 1)
	{
		system("cls");
		int controlTurno = 1;
		boss.setAtaque(rand() % 15 + 5);
		int proc = 0;
		heroe.setAtaque(rand() % 15 + 5);
		cout << heroe.getNombre() << "\n";
		cout << "Vida: " << heroe.getVida() << "\n";
		heroe.setAtaque(rand() % 15 + 5);
		cout << boss.getNombre() << "\n";
		cout << "Vida: " << boss.getVida() << "\n";
		while (controlTurno == 1)
		{
			string mov = "";
			cout << "[A] Atacar [P] Protegerse\n";
			cin >> mov;
			if (mov == "A")
			{
				boss.setVida(boss.getVida() - heroe.getAtaque());
				boss.setSacrificio(heroe.getAtaque() / 3 + boss.getSacrificio() + 5);
				controlTurno = 0;
			}
			else if (mov == "P")
			{
				proc = 1;
				heroe.setVida(heroe.getVida() + rand() % 10 + 8);
				enDaMax = enDaMax + 2;
				boss.setSupercuracion(boss.getSupercuracion() + 6);
				controlTurno = 0;
			}
		}
		if (boss.getVida() > 0)
		{
			if (proc != 1)
			{
				int super = rand() % 6;
				if (super == 0)
				{
					boss.setVida(boss.getVida() + boss.getSupercuracion() + 5 );
					cout << "El enemigo ha usado la Supercuracion, se ha curado " << boss.getSupercuracion() << " puntos de vida";
				}
				else if (super == 1)
				{
					boss.setAtaque(boss.getAtaque() + boss.getSacrificio());
					heroe.setVida(heroe.getVida() - boss.getAtaque());
					boss.setVida(boss.getVida() - boss.getSacrificio());
					cout << "El enemigo ha usado la Sacrificio, ha realizado un golpe mas potente, aunque tambien se ha dañado el\n";
				}
				else
				{
					heroe.setVida(heroe.getVida() - (boss.getAtaque() + rand() % enDaMax));
				}
			}
			system("pause");
		}
		else
		{
			controlFinal = 0;
		}
		if (heroe.getVida() < 0 )
		{
			controlFinal = 0;
		}
	}
}

int main() {
	srand(time(NULL));
	bool victoria = true;
	int posInicialHeroe = rand() % 5;
	salida = rand() % 5;
	heroe.setPosicionX(posInicialHeroe);
	guardiasSet();
	system("cls");
	cout << "Nombre: ";
	cin >> nombre;
	heroe.setNombre(nombre); 
	int controlPartida = 1;
	while (controlPartida == 1)
	{
		dibujo();
		int controlMov = 1;
		while (controlMov == 1)
		{
			string mov = "";
			cout << enemigo1.getPosicionY();
			cout << enemigo1.getPosicionX();
			cout << enemigo2.getPosicionY();
			cout << enemigo2.getPosicionX();
			cout << enemigo3.getPosicionY();
			cout << enemigo3.getPosicionX();
			cout << enemigo4.getPosicionY();
			cout << enemigo4.getPosicionX();
			cout << "WASD + INTRO para moverse: ";
			cin >> mov;
			if (mov == "W")
			{
				if (heroe.getPosicionY() != 0)
				{
					controlMov = 0;
					heroe.setPosicionY(heroe.getPosicionY() - 1);
				}
			}
			else if (mov == "S")
			{
					if (heroe.getPosicionY() != 9)
					{
						controlMov = 0;
						heroe.setPosicionY(heroe.getPosicionY() + 1);
					}
			}
			else if (mov == "A")
			{
				if (heroe.getPosicionX() != 0)
				{
					controlMov = 0;
					heroe.setPosicionX(heroe.getPosicionX() - 1);
				}
			}
			else if (mov == "D")
			{
				if (heroe.getPosicionX() != 4)
				{
					controlMov = 0;
					heroe.setPosicionX(heroe.getPosicionX() + 1);
				}
			}
		}
		if (enemigo1.getPosicionY() == heroe.getPosicionY() && enemigo1.getPosicionX() == heroe.getPosicionX())
		{
			cout << "ENEMIGO1 ENCONTRADO";
			enEn = 1;
			combate();
			system("pause");
		}
		if (enemigo2.getPosicionY() == heroe.getPosicionY() && enemigo2.getPosicionX() == heroe.getPosicionX())
		{
			cout << "ENEMIGO2 ENCONTRADO";
			enEn = 2;
			combate();
			system("pause");
		}
		if (enemigo3.getPosicionY() == heroe.getPosicionY() && enemigo3.getPosicionX() == heroe.getPosicionX())
		{
			cout << "ENEMIGO3 ENCONTRADO";
			enEn = 3;
			combate();
			system("pause");
		}
		if (enemigo4.getPosicionY() == heroe.getPosicionY() && enemigo4.getPosicionX() == heroe.getPosicionX())
		{
			cout << "ENEMIGO4 ENCONTRADO";
			enEn = 4;
			combate();
			system("pause");
		}
		if (0 == heroe.getPosicionY() && heroe.getPosicionX() == salida)
		{
			salidaFinal();
		}
		if (heroe.getVida() < 1)
		{
			controlPartida = 0;
			victoria = false;
		}
		else if (boss.getVida() < 1)
		{
			controlPartida = 0;
		}
	}
	system("cls");
	if (victoria)
	{
		cout << "ENHORABUENA, HAS GANADO!";
	}
	else
	{
		cout << "DERROTA...";
	}
}
//
//----------------------------
//||			x	x   x
//||			xx x x xx
//||			x x   x x
//||			x       x
//||			xxxxxxxxx
//||
//------------------------------