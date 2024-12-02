#include <iostream>

using namespace std;

int main() {
    bool posti[15];
    int cont_persone_vicine = 0;
    
    for (int i = 0; i < 15; i++) {
        cin >> posti[i];
    }

    for (int i = 0; i < 14; i++) {
        if (posti[i] == true && posti[i + 1] == true) {
            cont_persone_vicine++;
        }
    }

    cout << "Persone vicine: " << cont_persone_vicine << endl;

    return 0;
}
