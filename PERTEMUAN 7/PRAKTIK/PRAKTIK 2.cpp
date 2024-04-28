#include <iostream>
using namespace std;

struct Barang {
    string nama;
    int harga;
};

int Cari(Barang daftarBarang[], int size, string Benda) {
    for (int i = 0; i < size; ++i) {
        if (daftarBarang[i].nama == Benda) {
            return i;
        }
    }
    return -1;
}

int main() {
    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };

    string Benda;
    cout << "Masukkan nama barang yang ingin dicari: ";
    cin >> Benda;

    int Arr = Cari(daftarBarang, 5, Benda);

    if (Arr != -1) {
        cout << "Nama Barang: " << daftarBarang[Arr].nama<<endl;
		cout << "Harga: " << daftarBarang[Arr].harga << endl; 
    } else {
        cout << "Maaf, barang tidak ditemukan dalam daftar" << endl;
    }

    return 0;
}

