#include <iostream>
#include <vector>
using namespace std;

//ZADANIE 4.1

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

    int maxElement = tablica[0];
    for (int i = 1; i < n; i++) {
        if (tablica[i] > maxElement) {
            maxElement = tablica[i];
        }
    }

    cout << "Najwiekszy element tablicy to: " << maxElement << endl;
    return 0;
}