#include <iostream>
#include <string>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

int main()
{
    srand(time(NULL));
    system("color 1");
    //menu vars
    string username;
    int gameMenu = 1;
    int gameMenur;
    int salidaConfig = 0;
    int respuestaConfig;

    int userHp = 100;
    string enemy1Name = "Enemigo1";
    int enemy1Hp = 100;
    int maxAtk1 = 15;
    int minAtk1 = 1;
    int enemy1Atk = minAtk1 + rand() % (maxAtk1 + 1 - minAtk1);
    string enemy2Name = "Enemigo2";
    int enemy2Hp = 100;
    int maxAtk2 = 15;
    int minAtk2 = 1;
    int enemy2Atk = minAtk2 + rand() % (maxAtk2 + 1 - minAtk2);

    string weapon1 = "Espada";
    int weapon1Uses = 5;
    int weapon1MaxAtk = 30;
    int weapon1MinAtk = 15;
    int weapon1Atk = weapon1MinAtk + rand() % (weapon1MaxAtk + 1 - weapon1MinAtk);
    string weapon2 = "Arco";
    int weapon2Uses = 20;
    int weapon2MaxAtk = 15;
    int weapon2MinAtk = 10;
    int weapon2Atk = weapon2MinAtk + rand() % (weapon2MaxAtk + 1 - weapon2MinAtk);
    string weapon3 = "Lanza";
    int weapon3Uses = 2;
    int weapon3MaxAtk = 40;
    int weapon3MinAtk = 20;
    int weapon3Atk = weapon3MinAtk + rand() % (weapon3MaxAtk + 1 - weapon3MinAtk);

    int round = 1;
    int chooseAnswer = 0;
    int chooseEnemy;
    int chooseWeapon;
    string enemyAtacked;
    string weaponUsed;

    int atk;

    cout << "Introduce tu nombre de usuario: \n";
    cin >> username;
    while (gameMenu == 1)
    {
        cout << "Responde con '1' o '2' \n";
        cout << "1. Iniciar juego\n";
        cout << "2. Cambiar configuracion\n";
        cin >> gameMenur;
        salidaConfig = 0;
        if (gameMenur == 1)
        {
            gameMenu = gameMenu + 1;
        }
        if (gameMenur == 2)
        {
            while (salidaConfig == 0)
            {
                cout << "-------------------\n";
                cout << "   CONFIGURACION\n";
                cout << "-------------------\n";
                cout << "Configuracion del usuario: \n";
                cout << "1. Nombre: " << username << "\n";
                cout << "2. Vida: " << userHp << "\n";
                cout << "-------------------\n";
                cout << "Configuracion del enemigo1: \n";
                cout << "3. Nombre: " << enemy1Name << "\n";
                cout << "4. Vida: " << enemy1Hp << "\n";
                cout << "5. Ataque maximo: " << maxAtk1 << "\n";
                cout << "6. Ataque minimo: " << minAtk1 << "\n";
                cout << "-------------------\n";
                cout << "Configuracion del enemigo2: \n";
                cout << "7. Nombre: " << enemy2Name << "\n";
                cout << "8. Vida: " << enemy2Hp << "\n";
                cout << "9. Ataque maximo: " << maxAtk2 << "\n";
                cout << "10. Ataque minimo: " << minAtk2 << "\n";
                cout << "-------------------\n";
                cout << "Configuracion de:" << weapon1 << "\n";
                cout << "11. Nombre: " << weapon1 << "\n";
                cout << "12. Usos: " << weapon1Uses << "\n";
                cout << "13. Ataque maximo: " << weapon1MaxAtk << "\n";
                cout << "14. Ataque minimo: " << weapon1MinAtk << "\n";
                cout << "-------------------\n";
                cout << "Configuracion de:" << weapon2 << "\n";
                cout << "15. Nombre: " << weapon2 << "\n";
                cout << "16. Usos: " << weapon2Uses << "\n";
                cout << "17. Ataque maximo: " << weapon2MaxAtk << "\n";
                cout << "18. Ataque minimo: " << weapon2MinAtk << "\n";
                cout << "-------------------\n";
                cout << "Configuracion de:" << weapon3 << "\n";
                cout << "19. Nombre: " << weapon3 << "\n";
                cout << "20. Usos: " << weapon3Uses << "\n";
                cout << "21. Ataque maximo: " << weapon3MaxAtk << "\n";
                cout << "22. Ataque minimo: " << weapon3MinAtk << "\n";
                cout << "Escribe el numero de lo que quieres cambiar o escribe '0' para salir:\n";
                cin >> respuestaConfig;
                if (respuestaConfig == 1)
                {
                    cout << "Escribe un nuevo nombre para el usuario: \n";
                    cin >> username;
                }
                else if (respuestaConfig == 2)
                {
                    cout << "Escribe un nuevo valor para la vida del usuario: \n";
                    cin >> userHp;
                }
                else if (respuestaConfig == 3)
                {
                    cout << "Escribe un nuevo nombre para " << enemy1Name << ":\n";
                    cin >> enemy1Name;
                }
                else if (respuestaConfig == 4)
                {
                    cout << "Escribe un nuevo valor para la vida de " << enemy1Name << ":\n";
                    cin >> enemy1Hp;
                }
                else if (respuestaConfig == 5)
                {
                    cout << "Escribe un nuevo valor para el ataque maximo de " << enemy1Name << ":\n";
                    cin >> maxAtk1;
                }
                else if (respuestaConfig == 6)
                {
                    cout << "Escribe un nuevo valor para el ataque minimo de " << enemy1Name << ":\n";
                    cin >> minAtk1;
                }
                else if (respuestaConfig == 7)
                {
                    cout << "Escribe un nuevo nombre para " << enemy2Name << ":\n";
                    cin >> enemy2Name;
                }
                else if (respuestaConfig == 8)
                {
                    cout << "Escribe un nuevo valor para la vida de " << enemy2Name << ":\n";
                    cin >> enemy2Hp;
                }
                else if (respuestaConfig == 9)
                {
                    cout << "Escribe un nuevo valor para el ataque maximo de " << enemy2Name << ":\n";
                    cin >> maxAtk2;
                }
                else if (respuestaConfig == 10)
                {
                    cout << "Escribe un nuevo valor para el ataque minimo de " << enemy2Name << ":\n";
                    cin >> minAtk2;
                }
                else if (respuestaConfig == 11)
                {
                    cout << "Escribe un nuevo nombre para " << weapon1 << ":\n";
                    cin >> weapon1;
                }
                else if (respuestaConfig == 12)
                {
                    cout << "Escribe un nuevo valor para los usos de " << weapon1 << ":\n";
                    cin >> weapon1Uses;
                }
                else if (respuestaConfig == 13)
                {
                    cout << "Escribe un nuevo valor para el ataque maximo de " << weapon1 << ":\n";
                    cin >> weapon1MaxAtk;
                }
                else if (respuestaConfig == 14)
                {
                    cout << "Escribe un nuevo valor para el ataque minimo de " << weapon1 << ":\n";
                    cin >> weapon1MinAtk;
                }
                else if (respuestaConfig == 15)
                {
                    cout << "Escribe un nuevo nombre para " << weapon2 << ":\n";
                    cin >> weapon2;
                }
                else if (respuestaConfig == 16)
                {
                    cout << "Escribe un nuevo valor para los usos de " << weapon2 << ":\n";
                    cin >> weapon2Uses;
                }
                else if (respuestaConfig == 17)
                {
                    cout << "Escribe un nuevo valor para el ataque maximo de " << weapon2 << ":\n";
                    cin >> weapon2MaxAtk;
                }
                else if (respuestaConfig == 18)
                {
                    cout << "Escribe un nuevo valor para el ataque minimo de " << weapon2 << ":\n";
                    cin >> weapon2MinAtk;
                }
                else if (respuestaConfig == 19)
                {
                    cout << "Escribe un nuevo nombre para " << weapon3 << ":\n";
                    cin >> weapon3;
                }
                else if (respuestaConfig == 20)
                {
                    cout << "Escribe un nuevo valor para los usos de " << weapon3 << ":\n";
                    cin >> weapon3Uses;
                }
                else if (respuestaConfig == 21)
                {
                    cout << "Escribe un nuevo valor para el ataque maximo de " << weapon3 << ":\n";
                    cin >> weapon3MaxAtk;
                }
                else if (respuestaConfig == 22)
                {
                    cout << "Escribe un nuevo valor para el ataque minimo de " << weapon3 << ":\n";
                    cin >> weapon3MinAtk;
                }
                else if (respuestaConfig == 0)
                {
                    salidaConfig = salidaConfig + 1;
                    cout << "CAMBIOS GUARDADOS CON EXITO!\n";
                }
            }
        }
    }
    cout << "Empezando partida...\n";
    cout << username << ": " << userHp << " Hp\n";
    cout << enemy1Name << ": " << enemy1Hp << " Hp\n";
    cout << enemy2Name << ": " << enemy2Hp << " Hp\n";
    PlaySound(TEXT("audio1.wav"), NULL, SND_FILENAME | SND_SYNC);
    while ((enemy1Hp > 0 || enemy2Hp > 0) && userHp > 0)
    {
        srand(time(NULL));
        enemy1Atk = minAtk1 + rand() % (maxAtk1 + 1 - minAtk1);
        enemy2Atk = minAtk2 + rand() % (maxAtk2 + 1 - minAtk2);

        weapon1Atk = weapon1MinAtk + rand() % (weapon1MaxAtk + 1 - weapon1MinAtk);
        weapon2Atk = weapon2MinAtk + rand() % (weapon2MaxAtk + 1 - weapon2MinAtk);
        weapon3Atk = weapon3MinAtk + rand() % (weapon3MaxAtk + 1 - weapon3MinAtk);

        cout << "-------------------\n";
        cout << "      RONDA " << round << "\n";
        cout << "-------------------\n";
        while (chooseAnswer == 0)
        {
            cout << "Elige a que enemigo quieres atacar escribiendo '1' o '2':\n";
            cout << "1. " << enemy1Name << "\n";
            cout << "2. " << enemy2Name << "\n";
            cin >> chooseEnemy;
            if (chooseEnemy == 1)
            {
                enemyAtacked = enemy1Name;
                if (enemy1Hp > 0)
                {
                    cout << "Indica el arma que deseas utlizar escribiendo '1', '2' o '3': \n";
                    cout << "1. " << weapon1 << " (" << weapon1Uses << ")\n";
                    cout << "2. " << weapon2 << " (" << weapon2Uses << ")\n";
                    cout << "3. " << weapon3 << " (" << weapon3Uses << ")\n";
                    cin >> chooseWeapon;
                    if (chooseWeapon == 1)
                    {
                        if (weapon1Uses > 0)
                        {
                            atk = weapon1Atk;
                            chooseAnswer = chooseAnswer + 1;
                            enemy1Hp = enemy1Hp - atk;
                            weapon1Uses = weapon1Uses - 1;
                            weaponUsed = weapon1;
                        }
                        else
                        {
                            cout << "No le quedan usos a esta arma! Selecciona otra.\n";
                        }
                    }
                    else if (chooseWeapon == 2)
                    {
                        if (weapon2Uses > 0)
                        {
                            atk = weapon2Atk;
                            chooseAnswer = chooseAnswer + 1;
                            enemy1Hp = enemy1Hp - atk;
                            weapon2Uses = weapon2Uses - 1;
                            weaponUsed = weapon2;
                        }
                        else
                        {
                            cout << "No le quedan usos a esta arma! Selecciona otra.\n";
                        }
                    }
                    else if (chooseWeapon == 3)
                    {
                        if (weapon3Uses > 0)
                        {
                            atk = weapon3Atk;
                            chooseAnswer = chooseAnswer + 1;
                            enemy1Hp = enemy1Hp - atk;
                            weapon3Uses = weapon3Uses - 1;
                            weaponUsed = weapon3;
                        }
                        else
                        {
                            cout << "No le quedan usos a esta arma! Selecciona otra.\n";
                        }
                    }
                    else
                    {
                        cout << "Escribe un valor valido! ('1', '2' o '3')";
                    }
                }
                else
                {
                    cout << "Este enemigo ya ha sido derrotado, selecciona otro: \n";
                }
            }
            else if (chooseEnemy == 2)
            {
                enemyAtacked = enemy2Name;
                if (enemy2Hp > 0)
                {
                    cout << "Indica el arma que deseas utlizar escribiendo '1', '2' o '3': \n";
                    cout << "1. " << weapon1 << " (" << weapon1Uses << ")\n";
                    cout << "2. " << weapon2 << " (" << weapon2Uses << ")\n";
                    cout << "3. " << weapon3 << " (" << weapon3Uses << ")\n";
                    cin >> chooseWeapon;
                    if (chooseWeapon == 1)
                    {
                        if (weapon1Uses > 0)
                        {
                            atk = weapon1Atk;
                            chooseAnswer = chooseAnswer + 1;
                            enemy2Hp = enemy2Hp - atk;
                            weapon1Uses = weapon1Uses - 1;
                            weaponUsed = weapon1;
                        }
                        else
                        {
                            cout << "No le quedan usos a esta arma! Selecciona otra.\n";
                        }
                    }
                    else if (chooseWeapon == 2)
                    {
                        if (weapon2Uses > 0)
                        {
                            atk = weapon2Atk;
                            chooseAnswer = chooseAnswer + 1;
                            enemy2Hp = enemy2Hp - atk;
                            weapon2Uses = weapon2Uses - 1;
                            weaponUsed = weapon2;
                        }
                        else
                        {
                            cout << "No le quedan usos a esta arma! Selecciona otra.\n";
                        }
                    }
                    else if (chooseWeapon == 3)
                    {
                        if (weapon3Uses > 0)
                        {
                            atk = weapon3Atk;
                            chooseAnswer = chooseAnswer + 1;
                            enemy2Hp = enemy2Hp - atk;
                            weapon3Uses = weapon3Uses - 1;
                            weaponUsed = weapon3;
                        }
                        else
                        {
                            cout << "No le quedan usos a esta arma! Selecciona otra.\n";
                        }
                    }
                    else
                    {
                        cout << "Escribe un valor valido! ('1', '2' o '3')";
                    }
                }
                else
                {
                    cout << "Este enemigo ya ha sido derrotado, selecciona otro: \n";
                }
            }
        }
        if (enemy1Hp < 0)
        {
            enemy1Hp = 0;
            if (enemy2Hp > 0)
            {
                PlaySound(TEXT("audio3.wav"), NULL, SND_FILENAME | SND_SYNC);
            }
        }
        if (enemy2Hp < 0)
        {
            if (enemy1Hp > 0)
            {
                PlaySound(TEXT("audio3.wav"), NULL, SND_FILENAME | SND_SYNC);
            }
            enemy2Hp = 0;
        }
        cout << username << " ha golpeado a " << enemyAtacked << " con " << weaponUsed << " quitandole " << atk << "Hp\n";
        cout << "Vida de los enemigos: \n" << enemy1Name << ": " << enemy1Hp << "Hp\n" << enemy2Name << ": " << enemy2Hp << "Hp\n";
        if (enemy1Hp > 0)
        {
            userHp = userHp - enemy1Atk;
            if (userHp < 0)
            {
                userHp = 0;
            }
            Sleep(1000);
            cout << enemy1Name << " ha atacado a " << username << " quitandole " << enemy1Atk << "Hp\n";
            cout << "Te queda " << userHp << "Hp\n";
        }
        if (userHp > 0)
        {
            if (enemy2Hp > 0)
            {
                userHp = userHp - enemy2Atk;
                if (userHp < 0)
                {
                    userHp = 0;
                }
                Sleep(1000);
                cout << enemy2Name << " ha atacado a " << username << " quitandole " << enemy2Atk << "Hp\n";
                cout << "Te queda " << userHp << "Hp\n";
            }
        }
        chooseAnswer = 0;
        round = round + 1;
    }
    if (userHp > 0)
    {
        cout << "-------------------\n";
        cout << "     VICTORIA\n";
        cout << "-------------------\n";
        cout << "Felicidades! Derrotaste a los enemigos";
        PlaySound(TEXT("audio2.wav"), NULL, SND_FILENAME | SND_SYNC);
    }
    else
    {
        cout << "-------------------\n";
        cout << "      DERROTA\n";
        cout << "-------------------\n";
        cout << "Perdiste! Los enemigos te derrotaron";
    }
}