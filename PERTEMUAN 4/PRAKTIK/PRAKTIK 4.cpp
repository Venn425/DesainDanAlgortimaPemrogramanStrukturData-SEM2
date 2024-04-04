#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	public:
		Mahasiswa(string nama, int umur, string alamat)
		: nama_(nama), umur_(umur), alamat_(alamat){
			cout<<"Informasi Biodata Anda"<<endl;
		}
	
	~Mahasiswa(){
	}
	
	void TampilkanBiodata(){
		cout<<"Name: "<<nama_<<endl;
		cout<<"Age: "<<umur_<<endl;
		cout<<"Addres: "<<alamat_<<endl;
	}
	private:
		string nama_, alamat_;
		int umur_;
};

int main(){
	{
	int umur;
	string nama, alamat;
	cout<<"Masukkan nama anda: ";
	getline(cin, nama);
	cout<<"Masukkan usia anda: ";
	cin>>umur;
	
	cin.ignore();
		
	cout<<"Masukkan alamat anda: ";
	getline(cin, alamat);
	cout<<endl;	
		
	Mahasiswa mhs(nama, umur, alamat);
	mhs.TampilkanBiodata();	
	}
}
