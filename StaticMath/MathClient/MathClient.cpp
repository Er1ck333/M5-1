// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib

#include <iostream>
#include "MathLibrary.h"
#include <vector>
using namespace std;

int x = 1;
string respuesta;
int main()
{
	while (x == 1)
	{
		cout << "1. Agregar producto\n2. Eliminar producto\n3. Visualizar lista\n";
		cin >> respuesta;
		if (respuesta == "1")
		{
			MathLibrary::Opciones::Opcion1();
		}
		else if (respuesta == "2")
		{
			MathLibrary::Opciones::Opcion2();
		}
		else if (respuesta == "3")
		{
			MathLibrary::Opciones::Opcion3();
		}
	}
}