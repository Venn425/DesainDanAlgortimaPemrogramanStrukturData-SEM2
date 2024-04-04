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
	
	Mahasiswa mhs[5];
	
	for(int i=0 ; i<5 ; i++){
		string nama;
		int npm;
		
		cout<<"Masukkan nama mahasiswa: ";
		cin>>nama;
		cout<<"Masukkan NPM siswa: ";
		cin>>npm;
		
	mhs[i].setNama(nama);
	mhs[i].setnpm(npm);
	}
	cout<<endl;
		
	for (int j=0 ; j<5 ; j++){
		cout<<"Nama Mahasiswa: "<<mhs[j].getNama()<<endl;
		cout<<"Npm Mahasiswa: "<<mhs[j].getnpm()<<endl;
		cout<<endl;
	}
	
	return 0;
}
