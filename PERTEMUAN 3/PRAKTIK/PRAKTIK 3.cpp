#include <iostream>
#include<string>
using namespace std;

class Mahasiswa{
	private :
		string nama;
		int npm;
	
	public:
	void setNama (string n){
		nama = n;
	}
	
	void setnpm(int s){
		npm = s;
	}
	
	string getNama(){
		return nama;
	}
	
	int getnpm(){
		return npm;
	}
};

int main (){
	
	string nama;
	int npm;
	
	cout<<"Masukkan nama mahasiswa: ";
	getline(cin, nama);
	cout<<"Masukkan NPM siswa: ";
	cin>>npm;
	
	Mahasiswa mhs;
	mhs.setNama(nama);
	mhs.setnpm(npm);
	
	cout<<"Data Mahasiswa"<<endl;
	cout<<"Nama Mahasiswa: "<<mhs.getNama()<<endl;
	cout<<"Npm Mahasiswa: "<<mhs.getnpm()<<endl;
	return 0;
}
