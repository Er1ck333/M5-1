// HelloWorldC.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdlib.h>
#include<time.h>

int main()
{
    using namespace std;

    //variables
    /*int num1;
    int num2;
    bool isActive = false;
    string nameAndSurn = "Erick Pauchet Garcia";
    string name_surn = "";*/

   // cout << "Hello " + nameAndSurn;
    //cout << "Inserta el primer numero a sumar\n";
    //cin >> num1;
    //cout << "El numero a insertado es: " + num1;

    //if (isActive) {
      //  cout << "Esta activo";
    //}
    //else
    //{
    //    cout << "Esta desactivado";
   // }

    //int n1;
    //cout << "Introduce un numero: ";
    //cin >> n1;

    //if (n1 < 20) {
    //    cout << "\nEl numero introducido es menor a 20";
    //}
    //else if (n1 > 20) {
    //    cout << "\nEl numero introducido es mayor a 20";
    //}
    //else {
    //    cout << "\nEl numero introducido es 20";
    //}

    srand(time(NULL));



    //Personaje
    int characterHp = 100;
    int characterAtk = 10+ rand()%46;
    string characterName;

    //Enemigos
    int bossHp = 200;
    int bossAtk = rand() %61;
    string bossName = "Alex Salla";
    int bossHp2 = 200;
    int bossAtk2 = rand() % 61;
    


    //Game
    cout << "Name: \n";
    cin >> characterName;


    while (bossHp > 1 && characterHp > 1)
    {
        //Attack
        bossHp = bossHp - characterAtk;
        if (bossHp <= 0)
        {
            bossHp = 0;
        }
        cout << "Has atacado a " + bossName << ", le has causado " << characterAtk << " de daño, le queda " << bossHp << "Hp\n";
        if (characterAtk > 40)
        {
            cout << "Critical hit!\n";
        }
        if (bossHp < 1) {
            cout << "Has matado a " << bossName << "\n";
        }
        else
        {
            characterHp = characterHp - bossAtk;
            if (characterHp <= 0)
            {
                characterHp = 0;
            }
            cout << bossName << " te ha atacado con " << bossAtk << " te queda " << characterHp << "Hp\n";
            if (bossAtk > 30)
            {
                cout << "Critical Hit!\n";
            }
        }

        if (characterHp < 1) {
 
            cout << "Gamer Over";
        }
        char criticalCharacterAtk = rand() % 100;
        char criticalBossAtk = rand() % 100;
        if (criticalCharacterAtk < 70)
        {
            characterAtk = rand() % 41;
        }
        else
        {
            characterAtk = 30 + rand() % 61;
        }
        if (criticalBossAtk <90)
        {
            bossAtk = rand() % 31;
        }
        else
        {
            bossAtk = 30 + rand() % 51;
        }
    }
  
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
