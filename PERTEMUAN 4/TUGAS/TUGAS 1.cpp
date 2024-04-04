#include <iostream>
#include <string>
using namespace std;

class Kontak {
	private:
    	string nama[14];
    	string nomor[14];
    	int n;

	public:
    	Kontak() : n(0) {
		}

    	void tambahKontak(string name, string numb) {
        	if (n < 14) {
            	nama[n] = name;
            	nomor[n] = numb;
            	cout << "Kontak berhasil ditambahkan."<<endl;
            	
				n++;
        	} 
    	}

    	int jumlahKontak() {
        	return n;
    	}

    	string getNama(int ar) {
        	return nama[ar];
    	}

    	string getNomor(int ar) {
        	return nomor[ar];
    	}
};

int main() {
    char jawab;
    string nama, nomor;
    
    Kontak kontak;
    
    cout<<"Masukkan kontak (Maksimal 14 kontak):"<<endl;

    do {
        cout<<"Masukkan nama kontak ke-"<<kontak.jumlahKontak() + 1<<": ";
        getline(cin, nama);
        cout<<"Masukkan nomor kontak ke-"<<kontak.jumlahKontak() + 1<<": ";
        getline(cin, nomor);

        kontak.tambahKontak(nama, nomor);

        cout<<"Tambahkan kontak lagi? (y/n): ";
        cin>>jawab;
        cin.ignore();
        
    } while ((jawab == 'y' || jawab == 'Y') && kontak.jumlahKontak() < 14);

    	cout << "\nDaftar Kontak:"<<endl;
    for (int i = 0; i < kontak.jumlahKontak(); i++) {
        cout<<"Nama Kontak ke-" << i + 1 << ": "<<kontak.getNama(i)<<endl;
        cout<<"Nomor Kontak ke-" << i + 1 << ": "<<kontak.getNomor(i)<<endl;
        cout<< "--------------------------------"<<endl;
    }

	return 0;
}
