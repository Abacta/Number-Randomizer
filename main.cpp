#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <locale.h>

using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    srand(time(0));
    setlocale (LC_ALL, "English");
    
    double grupo[11];
    double tempo, b, x, y, counter, temporizador, ns;
    int i, a, ms;
    
    tempo = 0;
    counter = 0;
    temporizador = 0;
    i = 0;
    a = 0;
    b = 0;
    ns = 0;
    ms = 0;
    do {
        x = rand() % 100;
        y = rand() % 100 * -1;
        tempo = tempo + 1;
        grupo[i] = x + y;
        i = i + 1;
    } while (tempo != 11);
    cout << "=============" << endl;
    cout << "The numbers are:" << endl;
    do {
        cout << "-> " << grupo[a] << endl;
        counter = counter + 1;
        a = a + 1;
    } while (counter != 11);
    a = a - 1;
    cout << "=============" << endl;
    do {
        if (grupo[a] >= 0) {
            cout << "->  " << grupo[a] << " is positive" << endl;
            ns = ns + grupo[a];
        } else {
            cout << "-> " << grupo[a] << " is negative" << endl;
            ms = ms + 1;
        }
        temporizador = temporizador + 1;
        a = a - 1;
    } while (temporizador != 11);
    cout << "\n-> " << ms << " negative numbers" << endl;
    cout << "-> The sum of the positive numbers results in: " << ns  << endl;
    cout << "=============" << endl;
    cout << "Program ended" << endl;
    // system("pause");
    return 0;
}