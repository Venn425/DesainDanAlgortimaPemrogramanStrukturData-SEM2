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
            cout << i << " -> " << tabelHash[i] << endl;
        else
            cout << i << " -> " << "Kosong" << endl;
    }
}

bool cari(int kunci) {
    int indeks = hash1(kunci);
    int langkah = hash2(kunci);
    int i = 0;

    while (tabelHash[(indeks + i * langkah) % UKURAN_TABEL] != kunci) {
        if (tabelHash[(indeks + i * langkah) % UKURAN_TABEL] == -1) {
            return false;
        }
        i++;
        if (i == UKURAN_TABEL) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Masukkan ukuran tabel hash: ";
    cin >> UKURAN_TABEL;

    tabelHash = new int[UKURAN_TABEL];

    for (int i = 0; i < UKURAN_TABEL; i++) {
        tabelHash[i] = -1;
    }

    int n, kunci;
    cout << "Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> n;
    cout << "Masukkan " << n << " elemen:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> kunci;
        sisip(kunci);
    }

    cout << "Isi Tabel Hash:" << endl;
    tampil();

    cout << "Masukkan elemen yang ingin dicari dalam tabel hash: ";
    cin >> kunci;
    if (cari(kunci)) {
        cout << kunci << " Ditemukan dalam Tabel Hash" << endl;
    } else {
        cout << "Elemen " << kunci << " Tidak ditemukan dalam Tabel Hash" << endl;
    }

    delete[] tabelHash;

    return 0;
}

