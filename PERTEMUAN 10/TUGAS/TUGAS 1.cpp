#include<iostream>
using namespace std;

int biaya[4][4], selesai[4], jumlahKota, totalBiaya = 0;

void InputCost() {
    int i, j;
    cout << "Masukkan Jumlah Kota : ";
    cin >> jumlahKota;  
    cout << "\nNilai Cost Matriks:\n";
    for (i = 0; i < jumlahKota; i++) {
        cout << "Cost Elemen Baris ke-" << i + 1 << ":\n";
        for (j = 0; j < jumlahKota; j++)
            cin >> biaya[i][j];  
        selesai[i] = 0;  
    }
    cout << "\n\nDaftar Biaya :";
    for (i = 0; i < jumlahKota; i++) {
        cout << "\n";
        for (j = 0; j < jumlahKota; j++)
            cout << biaya[i][j] << "\t";  
    }
}

int terkecil(int c) {
    int i, nc = 100, min = 100, kmin;
    
    for (i = 0; i < jumlahKota; i++) {
        if (biaya[c][i] + biaya[i][c] < min && !selesai[i]) {
            min = biaya[c][i] + biaya[i][c];
            kmin = biaya[c][i];
            nc = i;  
        }
    }
    if (min != 100)
        totalBiaya += kmin;  
    return nc;  
}

void biayaMin(int kota) {
    int i, kotaBerikutnya;
    selesai[kota] = 1;  
    cout << kota + 1 << "--->";
    kotaBerikutnya = terkecil(kota);  
    if (kotaBerikutnya == 100) {  
        kotaBerikutnya = 0;  
        cout << kotaBerikutnya + 1;
        totalBiaya += biaya[kota][kotaBerikutnya];  
        return;
    }
    biayaMin(kotaBerikutnya);  
}

int main() {
    InputCost();  
    cout << "\n\nJalur Terpendek :\n";
    biayaMin(0);  
    cout << "\n\nBiaya Minimum: " << totalBiaya << endl;
    return 0;
}

