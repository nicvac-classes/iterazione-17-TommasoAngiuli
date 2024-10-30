#include <iostream>
using namespace std;
int main() 
{
    int n, i, max, min, negativi, somma;
    double media;
    cout << "inserisci un numero" << endl;
    cin >> n;
    max = n;
    min = n;
    i = 0;
    somma = 0;
    negativi = 0;
    while (n != 0) 
    {
        if (n > 0) {
            i = i + 1;
            somma = somma + n;
        } else {
            negativi = negativi + 1;
        }
        if (min < n) {
        } else {
            min = n;
        }
        if (max < n) {
            max = n;
        }
        cout << "inserisci un numero" << endl;
        cin >> n;
    }
    media = (double) somma / i;
    cout << "il valore massimo è " << max << ", il valore minimo è " << min << ", la media dei valori positivi è " << media << ", i valori negativi inseriti sono " << negativi << endl;
}