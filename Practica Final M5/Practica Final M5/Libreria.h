#pragma once
#include <iostream>
using namespace std;

class personaje {
private:
	int ataque = 0;
	int vida = 0;
	string nombre = "";
	int posicionX = 0;
	int posicionY = 0;
public:
	int getAtaque();
	int setAtaque(int pAtaque);
	int getVida();
	int setVida(int pVida);
	string getNombre();
	string setNombre(string pNombre);
	int getPosicionX();
	int setPosicionX(int pX);
	int getPosicionY();
	int setPosicionY(int pY);

	personaje(int pataque, int pvida, string pnombre, int pposicionX, int pposicionY)
		: ataque(pataque), vida(pvida), nombre(pnombre), posicionX(pposicionX), posicionY(pposicionY)
	{}

};
class EnemigoFinal : public personaje {
private:
	int sacrificio = 0;
	int supercuracion = 0;
public:
	EnemigoFinal(int pataque, int pvida, string pnombre, int pposicionX, int pposicionY, int psacrificio, int psupercuracion)
		: personaje(pataque, pvida, pnombre, pposicionX, pposicionY), sacrificio(psacrificio), supercuracion(psupercuracion)
	{}

	int getSacrificio();
	void setSacrificio(int pSacrificio);
	int getSupercuracion();
	void setSupercuracion(int pSupercuracion);
};