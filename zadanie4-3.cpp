#include <iostream>
using namespace std;

//ZADANIE 4.3

int main() {
    //Deklaracja tablicy dwuwymiarowej 10x10
    int tablica[10][10] = {0};

    //Wypełnianie tablicy
    for (int i = 0; i < 10; i++) {
        //Pierwsza kolumna
        tablica[i][0] = i;

        //Druga kolumna
        tablica[i][1] = i + i;

        //Trzecia kolumna
        tablica[i][2] = i * i;

        //Czwarta kolumna
        tablica[i][3] = i + 3;

        //Piąta kolumna
        tablica[i][4] = i - 4;
    }

    //Wyświetlanie tablicy
    cout << "Tablica 10x10:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}