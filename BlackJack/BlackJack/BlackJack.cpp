#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int controlPartida = 1;
int turno = 1;

int diamantes[13];
int treboles[13];
int corazones[13];
int picas[13];
int as;
int tipoCarta = 1;

int controlCartas = 1;
int tipo = 1;
int carta;
string tipon;
string cartav;

int playerScore;
int croupierScore;

string seguir;

int val() {
	
	for (size_t i = 0; i < 13; i++)
	{
		diamantes[i] = 1;
	}
	for (size_t i = 0; i < 13; i++)
	{
		treboles[i] = 1;
	}
	for (size_t i = 0; i < 13; i++)
	{
		corazones[i] = 1;
	}
	for (size_t i = 0; i < 13; i++)
	{
		picas[i] = 1;
	}
	return 0;
}


int selCarta() {
	while (controlCartas == 1)
	{
		srand(time(NULL));
		tipo = rand() % 4;
		srand(time(NULL));
		carta = rand() % 13;
		if (tipo == 0)
		{
			if (diamantes[carta] == 1)
			{
				controlCartas = 0;
				diamantes[carta] = 0;
			}
			
		}
		else if (tipo == 1)
		{
			if (treboles[carta] == 1)
			{
				controlCartas = 0;
				treboles[carta] = 0;
			}
		}
		else if (tipo == 2)
		{
			if (corazones[carta] == 1)
			{
				controlCartas = 0;
				corazones[carta] = 0;
			}
		}
		else if (tipo == 3)
		{
			if (picas[carta] == 1)
			{
				controlCartas = 0;
				picas[carta] = 0;
			}
		}
	}
	if (tipo == 0)
	{
		tipon = "diamantes";
	}
	else if (tipo == 1)
	{
		tipon = "treboles";
	}
	else if (tipo == 2)
	{
		tipon = "corazones";
	}
	else if (tipo == 3)
	{
		tipon = "picas";
	}
	carta = carta + 1;
	if (carta == 1)
	{
		cartav = "as";
	}
	else if (carta == 13)
		{
		cartav = "K";
		}
	else if (carta == 12)
	{
		cartav = "Q";
	}
	else if (carta == 11)
	{
		cartav = "J";
	}
	else
	{
		tipoCarta = 0;
	}
	if (carta > 10)
	{
		carta = 10;
	}
	if (turno == 1)
	{
		if (carta == 1)
		{
			cout << "Te ha tocado un as, que valor deseas que tenga? (1 o 11)";
			cin >> as;
			if (as == 1)
			{
				carta = 1;
			}
			else if (as == 11)
			{
				carta = 11;
			}
			else
			{
				carta = 1;
			}
		}
	}
	else
	{
		if (carta == 1)
		{
			if (croupierScore < 11)
			{
				carta = 11;
			}
			else
			{
				carta = 1;
			}
		}
	}
	controlCartas = 1;
	return 0;
}

int prueba;
int main()
{
	int valores = val();
	int seleccionDeCarta = selCarta();
	if (tipoCarta == 1)
	{
		cout << "Te ha salido el " << cartav << " de " << tipon << "\n";
		playerScore = playerScore + carta;
	}
	else
	{
		cout << "Te ha salido el " << carta << " de " << tipon << "\n";
		playerScore = playerScore + carta;
		tipoCarta = 1;
	}
	int seleccionDeCarta2 = selCarta();
	if (tipoCarta == 1)
	{
		cout << "Te ha salido el " << cartav << " de " << tipon << "\n";
		playerScore = playerScore + carta;
	}
	else
	{
		cout << "Te ha salido el " << carta << " de " << tipon << "\n";
		playerScore = playerScore + carta;
		tipoCarta = 1;
	}
	cout << "Tu puntuacion: " << playerScore << "\n";
	turno = 0;
	int seleccionDeCarta3 = selCarta();
	if (tipoCarta == 1)
	{
		cout << "Al croupier le ha tocado " << cartav << " de " << tipon << "\n";
		croupierScore = carta;
	}
	else
	{
		cout << "Al croupier le ha tocado " << carta << " de " << tipon << "\n";
		croupierScore = carta;
		tipoCarta = 1;
	}
	cout << "Puntuacion del croupier: " << croupierScore << "\n";
	turno = 1;
	
		while (controlPartida == 1)
		{
			if (playerScore == 21)
			{
				seguir = "N";
			}
			else
			{
				cout << "¿Quieres seguir? [S] [N]";
				cin >> seguir;
			}
			if (seguir == "S")
			{
				int seleccionDeCarta = selCarta();
				if (tipoCarta == 1)
				{
					cout << "Te ha salido el " << cartav << " de " << tipon << "\n";
					playerScore = playerScore + carta;
				}
				else
				{
					cout << "Te ha salido el " << carta << " de " << tipon << "\n";
					playerScore = playerScore + carta;
					tipoCarta = 1;
				}
				cout << "Tu puntuacion: " << playerScore << "\n";
				if (playerScore > 21)
				{
					controlPartida = 0;
				}
			}
			else if (seguir == "N")
			{
					turno = 0;
					while (controlPartida == 1)
					{
						if (croupierScore <= playerScore)
						{
							seleccionDeCarta = selCarta();
							if (tipoCarta == 1)
							{
								cout << "Al croupier le ha tocado " << cartav << " de " << tipon << "\n";
								croupierScore = croupierScore + carta;
							}
							else
							{
								cout << "Al croupier le ha tocado " << carta << " de " << tipon << "\n";
								croupierScore = croupierScore + carta;
								tipoCarta = 1;
							}
							cout << "Puntuacion del croupier: " << croupierScore << "\n";
							Sleep(1000);
							if (croupierScore > 21)
							{
								controlPartida = 0;
							}
							if (croupierScore == 21)
							{
								controlPartida = 0;
							}
						}
						else
						{
							controlPartida = 0;
						}
					}
				controlPartida = 0;
			}
		}
	
		if (playerScore > 21)
		{
			cout << "------------------\n     Perdiste\n------------------";
		}
		else if (croupierScore > 21)
		{
			cout << "------------------\n      Ganaste\n------------------";
		}
		else if (playerScore > croupierScore)
		{
			cout << "------------------\n      Ganaste\n------------------";
		}
		else if (playerScore < croupierScore)
		{
			cout << "------------------\n     Perdiste\n------------------";
		}
		else
		{
			cout << "------------------\n      Empate\n------------------";
		}

}