#include <iostream>
using namespace std;

class BangunDatar{
	protected :
		int lebar, tinggi;
		
	public :
	void setValue(int a, int b){
		lebar = a;
		tinggi = b;
	}	
};

class PersegiPanjang: public BangunDatar{
	public :
		int getValue(){
			return (lebar*tinggi);
		}
};

class Segitiga: public BangunDatar{
	public:
		int getValue(){
			return (lebar*tinggi/2);
		}
};

class Persegi: public BangunDatar{
	public:
		int getValue(){
			return (lebar*4);
		}
};

int main(){
	PersegiPanjang persegi_panjang;
	Segitiga segitiga;
	Persegi persegi;
	
	int a, b, c, d, e;
	
	cout<<"Masukkan Panjang Persegi Panjang: ";
	cin>>a;
	cout<<"Masukkan Lebar Persegi Panjang: ";
	cin>>b;
	cout<<endl;
	cout<<"Masukkan Alas Segitiga: ";
	cin>>c;
	cout<<"Masukkan Tinggi Segitiga: ";
	cin>>d;
	cout<<endl;
	cout<<"Masukkan Panjang Sisi Persegi: ";
	cin>>e;
	cout<<endl;
	
	persegi_panjang.setValue(a,b);
	segitiga.setValue(c,d);
	persegi.setValue(e,0);
	
	cout<<"Luas Bangun Datar: "<<endl;
	cout<<"Luas Persegi Panjang: "<<persegi_panjang.getValue()<<endl;
	cout<<"Luas Segitiga: "<<segitiga.getValue()<<endl;
	cout<<"Luas Persegi: "<<persegi.getValue()<<endl;
	
	return 0;
}
