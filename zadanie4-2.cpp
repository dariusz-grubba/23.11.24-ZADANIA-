#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//ZADANIE.4.2

int main() {
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tablica musi zawierac przynajmniej jeden element!" << endl;
        return 1;
    }

    vector<int> tablica(n);
    cout << "Podaj " << n << " liczb:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tablica[i];
    }

    //Czy wszystkie elementy są identyczne
    bool wszystkieTakieSame = true;
    for (int i = 1; i < n; i++) {
        if (tablica[i] != tablica[0]) {
            wszystkieTakieSame = false;
            break;
        }
    }

    if (wszystkieTakieSame) {
        cout << "Wszystkie elementy tablicy sa takie same: " << tablica[0] << endl;
        return 0;
    }

    //Liczenie wystąpień elementów
    unordered_map<int, int> licznik;
    for (int liczba : tablica) {
        licznik[liczba]++;
    }

    //Sprawdzanie czy każdy element występuje tylko raz
    bool kazdyRaz = true;
    for (auto &para : licznik) {
        if (para.second > 1) {
            kazdyRaz = false;
            break;
        }
    }

    if (kazdyRaz) {
        cout << "Kazdy element w tablicy wystepuje tylko raz." << endl;
        return 0;
    }

    //Znalezienie najczęściej występującego elementu
    int najczestszy = tablica[0];
    int maxWystapien = 0;

    for (auto &para : licznik) {
        if (para.second > maxWystapien) {
            maxWystapien = para.second;
            najczestszy = para.first;
        }
    }

    cout << "Najczesciej wystepujacy element to: " << najczestszy
         << " (wystapil " << maxWystapien << " razy)" << endl;

    return 0;
}