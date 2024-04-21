#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class karyawan{
	private:
		double gaji;
		string nama;
		int umur;
	public:
		void setgaji(double x){
			gaji = x;
		}
		
		void setnama(string y){
			nama = y;
		}
		
		void setumur(int z){
			umur = z;
		}
		
		double getgaji(){
			return gaji;
		}
		
		string getnama(){
			return nama;
		}
		
		int getumur(){
			return umur;
		}
		
};

int main(){
	
	karyawan ky;
	
	int umur;
	double gaji;
	string nama;
	cout<<"Masukkan nama karyawan: ";
	getline(cin, nama);
	cout<<"Masukkan gaji karyawan: ";
	cin>>gaji;
	cin.ignore();
	cout<<"Masukkan usia karyawan: ";
	cin>>umur;
	cin.ignore();
	ky.setnama(nama);
	ky.setgaji(gaji);
	ky.setumur(umur);
	
	cout<<"Nama: "<<ky.getnama()<<endl;
	cout<<"gaji: "<<fixed<<setprecision(2)<<ky.getgaji()<<endl;
	cout<<"umur: "<<ky.getumur()<<endl;
	
	return 0;
	
}
