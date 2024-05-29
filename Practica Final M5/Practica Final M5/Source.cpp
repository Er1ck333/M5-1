#include "Libreria.h"
using namespace std;

int personaje::getAtaque() {
	return ataque;
}
int personaje::setAtaque(int pAtaque) {
	ataque = pAtaque;
	return ataque;
}
int personaje::getVida() {
	return vida;
}
int personaje::setVida(int pVida) {
	vida = pVida;
	return vida;
}
string personaje::getNombre() {
	return nombre;
}
string personaje::setNombre(string pNombre) {
	nombre = pNombre;
	return nombre;
}
int personaje::getPosicionX() {
	return posicionX;
}
int personaje::setPosicionX(int pX) {
	posicionX = pX;
	return posicionX;
}
int personaje::getPosicionY() {
	return posicionY;
}
int personaje::setPosicionY(int pY) {
	posicionY = pY;
	return posicionY;
}


int EnemigoFinal::getSacrificio() {
	return sacrificio;
}
int EnemigoFinal::getSupercuracion() {
	return supercuracion;
}
void EnemigoFinal::setSacrificio(int pSacrificio) {
	sacrificio = pSacrificio;
}
void EnemigoFinal::setSupercuracion(int pSupercuracion) {
	supercuracion = pSupercuracion;
}