#include <iostream>

using namespace std;

int* tabelHash;  
int UKURAN_TABEL;  

int hash1(int kunci) {
    return kunci % UKURAN_TABEL;
}

int hash2(int kunci) {
    int prima = UKURAN_TABEL - 2;  
    return prima - (kunci % prima);
}

void sisip(int kunci) {
    int indeks = hash1(kunci);
    int langkah = hash2(kunci);
    int i = 0;

    while (tabelHash[(indeks + i * langkah) % UKURAN_TABEL] != -1) {
        i++;
        if (i == UKURAN_TABEL) {
            cout << "Tabel hash penuh!" << endl;
            return;
        }
    }
    tabelHash[(indeks + i * langkah) % UKURAN_TABEL] = kunci;
}

void tampil() {
    for (int i = 0; i < UKURAN_TABEL; i++) {
        if (tabelHash[i] != -1)
            cout << "Indeks " << i << " -> " << tabelHash[i] << endl;
        else
            cout << "Indeks " << i << " -> " << "Kosong" << endl;
    }
}

int main() {
    cout << "Masukkan ukuran tabel: ";
    cin >> UKURAN_TABEL;

    tabelHash = new int[UKURAN_TABEL];

    for (int i = 0; i < UKURAN_TABEL; i++) {
        tabelHash[i] = -1;
    }

    int n, kunci;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    cout << "Masukkan " << n << " elemen:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> kunci;
        sisip(kunci);
    }

    cout << "Isi Tabel Hash:" << endl;
    tampil();

    delete[] tabelHash;

    return 0;
}

