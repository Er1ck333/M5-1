#include "libreria.h"
using namespace std;

int lancha::getDistanciaRecorrida() {
	return distanciaRecorrida;
}
int lancha::setLancha(int pvelocidad, int pDistanciaRecorrida, int pnitro, string pnombre) {
	velocidad = pvelocidad; distanciaRecorrida = pDistanciaRecorrida;  nitro = pnitro; nombre = pnombre;
	return 0;
}
int lancha::setNitro(int pnitro) {
	nitro = pnitro;
	return nitro;
}
int lancha::getNitro() {
	return nitro;
}
int lancha::setDistanciaRecorrida(int pvelocidad) {
	distanciaRecorrida = distanciaRecorrida + pvelocidad * 100;
	return distanciaRecorrida;
}
int lancha::setVelocidad(int pvelocidad) {
	velocidad = velocidad + pvelocidad;
	return velocidad;
}
int lancha::setVelocidad2(int pvelocidad) {
	velocidad = pvelocidad;
	return velocidad;
}
int lancha::getVelocidad() {
	return velocidad;
}