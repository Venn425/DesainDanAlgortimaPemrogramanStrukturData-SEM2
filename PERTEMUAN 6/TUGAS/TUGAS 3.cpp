#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
	public:
		virtual void Status(){
			cout<<"Status Mahasiswa"<<endl;
		}
};

class Aktif : public Mahasiswa{
	private:
	    string nama, jurusan, fakultas;
	    int umur;
    
	public:
		Aktif(string nama, int umur, string jurusan, string fakultas)
			: nama(nama), umur(umur), jurusan(jurusan), fakultas(fakultas){}
		void Status(){
			cout<<"Status Mahasiswa: Aktif"<<endl;
			cout<<"Nama: "<<nama<<endl;
			cout<<"Umur: "<<umur<<endl;
			cout<<"Jurusan: "<<jurusan<<endl;
			cout<<"Fakultas: "<<fakultas<<endl<<endl;
		}
};

class Alumni : public Mahasiswa{
	private:
	    string nama, jurusan, fakultas;
	    int umur;
	
	public:
		Alumni(string nama, int umur, string jurusan, string fakultas)
			: nama(nama), umur(umur), jurusan(jurusan), fakultas(fakultas){}
		void Status(){
			cout<<"Status Mahasiswa: Alumni"<<endl;
			cout<<"Nama: "<<nama<<endl;
			cout<<"Umur: "<<umur<<endl;
			cout<<"Jurusan: "<<jurusan<<endl;
			cout<<"Fakultas: "<<fakultas<<endl<<endl;
		}
};

int main(){
	int banyak, umur;
	string nama, jurusan, fakultas;
	
	cout<<"Masukkan Banyak Data: ";
	cin>>banyak;
	
	Mahasiswa* mhs[banyak];
	
	for (int i = 0; i < banyak; i++) {
        int pilihan;
        
        cout<<"Masukkan pilihan:"<<endl;
        cout<<"1. Aktif"<<endl;
        cout<<"2. Alumni"<<endl;
        cout<<"Pilihan: ";
        cin>>pilihan;
        
        	cout<<"Masukkan Nama: ";
        	cin>>nama;
        	cout<<"Masukkan Umur: ";
        	cin>>umur;
        	cout<<"Masukkan Jurusan: ";
        	cin>>jurusan;
        	cout<<"Masukkan Fakultas: ";
        	cin>>fakultas;
        	cout<<endl;

        if (pilihan == 1) {
            mhs[i] = new Aktif(nama, umur, jurusan, fakultas);
        } else if (pilihan == 2) {
            mhs[i] = new Alumni(nama, umur, jurusan, fakultas);
        }
   }

	for (int i = 0; i < banyak; i++) {
        mhs[i]->Status();
    }	
    
    for (int i = 0; i < banyak; i++) {
        delete mhs[i];
    }
	
	return 0;
}
