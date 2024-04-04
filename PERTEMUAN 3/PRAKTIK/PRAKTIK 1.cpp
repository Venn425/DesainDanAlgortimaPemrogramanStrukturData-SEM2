#include <iostream>
using namespace std;

class Silsilah{
	protected:
	string orangtua = "Albert Wijaya dan Jenny Lim";
	string anakanak = "Agatha Wijaya dan Jonathan Wijaya";
	
	public:
	string cekSilsilah(){
		return "Ayah bernama Albert Wijaya dan Ibu bernama Jenny Lim";
	}
};

class cucu : public Silsilah{
	protected:
	string cucu = "Wilbert Tan dan Rayanza Wijaya";
	
	public:
	string cekAnak(){
		return "Anak pertama keluarga Wijaya adalah Agatha Wijaya dan anak kedua dari keluarga Wijaya adalah Jonathan Wijaya";
	}
};

class anak : public cucu{
	public:
		string lihatSilsilahnya(){
			return "Silsilah Keluarga Wijaya";
		}
		
		string cekCucu(){
			return "cucu pertama bernama Wilbert Tan dan cucu kedua bernama Rayanza Wijaya";
		}
};

int main(){
	anak silsilahwijaya;
	
	cout<<silsilahwijaya.lihatSilsilahnya()<<endl;
	cout<<silsilahwijaya.cekSilsilah()<<endl;
	cout<<silsilahwijaya.cekAnak()<<endl;
	cout<<silsilahwijaya.cekCucu()<<endl;
	
}
