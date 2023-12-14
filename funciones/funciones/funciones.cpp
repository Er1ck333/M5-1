#include <iostream>
using namespace std;

void ShowParams(int& p1, int& p2) {
    p1 = p1 - 1;
    p2 = p2 + 1;


    cout << "P1: " << p1 << "\n";
    cout << "P2: " << p2 << "\n";
}
int main()
{
    int num1 = 0;
    int num2 = 5;
    ShowParams(num1, num2);

    cout << "Num 1: " << num1 << "\n";
    cout << "Num 2: " << num2 << "\n";

    int num3 = 7;
    int num4 = 9;
    ShowParams(num3, num4);
    cout << "Num 1: " << num3 << "\n";
    cout << "Num 2: " << num4 << "\n";
}
