#pragma once
#include <iostream>
#include <vector>
// MathLibrary.h
#pragma once
using namespace std;

string producto;
vector <string> lista = { "" };
namespace MathLibrary
{
    class Opciones
    {
    public:

        static void Opcion1() {
			bool comp = false;
			cout << "Introduce el producto que deseas añadir: ";
			cin >> producto;
			for (size_t i = 0; i < lista.size(); i++)
			{
				if (producto == lista[i])
				{
					comp = true;
				}
			}
			if (comp == false)
			{
				lista.push_back(producto);
			}
			else
			{
				cout << "Este producto ya esta en la lista!\n";
			}
        }

		static void Opcion2() {
			cout << "Introduce el producto que deseas eliminar: ";
			cin >> producto;

			bool encontrado = false;
			for (size_t i = 0; i < lista.size(); i++) {
				if (producto == lista[i]) {
					lista.erase(lista.begin() + i);
					encontrado = true;
					cout << "Producto eliminado exitosamente.\n";
					break;
				}
			}

			if (!encontrado) {
				cout << "El producto no se encuentra en la lista.\n";
			}
		}

		static void Opcion3() {
			cout << "Lista:";
			for (size_t i = 0; i < lista.size(); i++)
			{
				cout << lista[i] << " ";
			}
			cout << "\n";
		}
    };
}