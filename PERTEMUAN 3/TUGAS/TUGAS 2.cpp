#include <iostream>
#include<string>
using namespace std;

class Mahasiswa{
	private :
		string nama, buku, bln;
		int npm, pnj;
	
	public:
	void setNama (string n){
		nama = n;
	}
	
	void setnpm(int s){
		npm = s;
	}

	void setbuku(string x){
		buku = x;
	}
	
	void setpinjam(int y){
		pnj = y;
	}
	
	void setbulan(string z){
		bln = z;
	}
	
	string getNama(){
		return nama;
	}
	
	string getbuku(){
		return buku;
	}
	
	string getbulan(){
		return bln;
	}
	
	int getnpm(){
		return npm;
	}
	
	int getpinjam(){
		return pnj;
	}
};

int main (){
	
	string nama, buku, bln;
	int npm, pnj;
	
	
	cout<<"Masukkan nama mahasiswa: ";
	getline(cin, nama);
	cout<<"Masukkan NPM siswa: ";
	cin>>npm;
	cout<<"Masukkan Judul Buku: ";
	cin>>buku;
	cout<<"Buku dipinjam pada tanggal: ";
	cin>>pnj;
	cout<<"Bulan: ";
	cin>>bln;
	cout<<endl;
	
	Mahasiswa mhs;
	mhs.setNama(nama);
	mhs.setnpm(npm);
	mhs.setbuku(buku);
	mhs.setpinjam(pnj);
	mhs.setbulan(bln);
	
	cout<<"Data Mahasiswa"<<endl;
	cout<<"Nama Mahasiswa: "<<mhs.getNama()<<endl;
	cout<<"Npm Mahasiswa: "<<mhs.getnpm()<<endl;
	cout<<"Judul buku: "<<mhs.getbuku()<<endl;
	cout<<"Buku dipinjam pada tanggal: "<<mhs.getpinjam()<<" "<<mhs.getbulan() <<endl;
	cout<<"Buku wajib dikembalikan pada tanggal: "<<mhs.getpinjam() + 5<<" "<<mhs.getbulan()<<endl;
	
	return 0;
}
