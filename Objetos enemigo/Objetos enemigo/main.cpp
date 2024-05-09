#include <iostream>
#include "libreria.h"
#include<time.h>
#include<stdlib.h>
#include <thread>
#include <chrono>
#include <conio.h>
using namespace std;
string userName;
string enemyName[3] = { "Roberto", "Javier", "Ramon" };

int ronda = 1;
int nitro = 1;
int control = 1;
string sel;
int turno = 1;
int vel;
int vel3;
int numEnemigo() {
	while (true)
	{
		int en = rand() % 3;
		if (enemyName[en] != userName)
		{
			return en;
		}
	}
}
int dado() {
	int dado = rand() % 6+1;
	return dado;
}
int dado2() {
	int dado = rand() % 6 + 1;
	return dado;
}
int calcNitro() {
	int nVal = rand() % 2;
	return nVal;
}

string menuInicio() {

	cout << "\n\n\n		 ******     *******       **     **********       *******       **       ******  ********\n";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "		/*////**   **/////**     ****   /////**///       /**////**     ****     **////**/**///// \n";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "		/*   /**  **     //**   **//**      /**          /**   /**    **//**   **    // /**   \n";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "		/******  /**      /**  **  //**     /**          /*******    **  //** /**       /******* \n";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "		/*//// **/**      /** **********    /**          /**///**   **********/**       /**////\n";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "		/*    /**//**     ** /**//////**    /**          /**  //** /**//////**//**    **/**      \n";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "		/*******  //*******  /**     /**    /**          /**   //**/**     /** //****** /********\n";
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << "		///////    ///////   //      //     //           //     // //      //   //////  //////// \n\n\n\n\n\n\n";
	system("pause");
	string n = "h";
	return n;
}





int main() {
	menuInicio();
	system("cls");
	srand(time(NULL));
	cout << "Nombre: ";
	cin >> userName;
	lancha lancha1;
	lancha lancha2;
	lancha1.setLancha(0, 0, 1, userName);
	int nEnemigo = numEnemigo();
	lancha2.setLancha(0, 0, 1, enemyName[nEnemigo]);
	while (ronda < 6)
	{
		if (turno == 1)
		{
			while (control == 1)
			{
				cout << userName << "\n";
				cout << "Ronda: " << ronda;
				cout << "\n[D] Dado ";
				if (nitro == 1)
				{
					cout << "	[N] Nitro";
				}
				cout << "\n";
				cin >> sel;
				if (sel == "N")
				{
					if (nitro == 1)
					{
						nitro = 2;
						control = 0;
					}
				}
				if (sel == "D")
				{
					control = 0;
				}
			}
			int valDado = dado();
			cout << "Resultado dado: " << valDado << "\n";
			lancha1.setVelocidad(valDado);
			if (nitro == 2)
			{
				int resNitro = calcNitro();
				cout << "nitro:" << resNitro << "\n";
				lancha1.setNitro(0);
				if (resNitro == 0)
				{
					vel = lancha1.getVelocidad();
					vel = vel / 2;
					lancha1.setVelocidad2(vel);
				}
				else if (resNitro == 1)
				{
					vel = lancha1.getVelocidad();
					vel = vel * 2;
					lancha1.setVelocidad2(vel);
				}
				nitro = 3;
			}
			control = 1;
			int vel2 = lancha1.getVelocidad();
			lancha1.setDistanciaRecorrida(vel2);
			cout << "Velocidad: " << vel2 << "\n";
			cout << "Distancia Recorrida: " << lancha1.getDistanciaRecorrida() << "\n";
			turno = 2;
			cout << "\n\n\n\n";
		}
		else if (turno == 2)
		{
			int valDado2 = rand() % 6 + 1;
			lancha2.setVelocidad(valDado2);
			int diferencia = lancha1.getDistanciaRecorrida() - lancha2.getDistanciaRecorrida();
			if (ronda == 3 && diferencia > 600)
			{
				int resNitro = calcNitro();
				lancha2.setNitro(0);
				if (resNitro == 0)
				{
					vel3 = lancha2.getVelocidad();
					vel3 = vel3 / 2;
					lancha2.setVelocidad2(vel3);
				}
				else if (resNitro == 1)
				{
					vel3 = lancha2.getVelocidad();
					vel3 = vel3 * 2;
					lancha2.setVelocidad2(vel3);
				}
				cout << "El enemigo ha usado el nitro\n";
			}
			int vel4 = lancha2.getVelocidad();
			lancha2.setDistanciaRecorrida(vel4);
			cout << "Resultado dado: " << valDado2 << "\n";
			cout << "Velocidad: " << vel4 << "\n";
			cout << "Distancia Recorrida: " << lancha2.getDistanciaRecorrida() << "\n";
			turno = 1;
			cout << "\n\n\n\n";
			ronda = ronda + 1;
		}
	}
	system("cls");
	int playerScore = lancha1.getDistanciaRecorrida();
	int enemyScore = lancha2.getDistanciaRecorrida();
	if (playerScore > enemyScore)
	{
		cout << "VICTORIA";
	}
	else
	{
		cout << "DERROTA";
	}
}