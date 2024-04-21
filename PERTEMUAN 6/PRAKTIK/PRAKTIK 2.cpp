#include <iostream>
using namespace std;

class Mahasiswa{
	private:
		int usia;
		float ipk;
		string nama;
		
	public:
		void setNama(string a){
			nama = a;
		}
		void setUsia(int b){
			usia = b;
		}
		void setIPK(float c){
			ipk = c;
		}
		string getNama(){
			return nama;
		}
		int getUsia(){
			return usia;
		}
		float getIPK(){
			return ipk;
		}	
};

int main(){
	int nilai;
			
	cout << "masukan jumlah data : ";
	cin>>nilai;
	
	Mahasiswa ms[nilai];
	
	string nama;
	int usia;
	float ipk;
	
	for (int i=0; i<nilai; i++){
		cout <<"nama : ";
		cin >> nama;
		
		cout <<"usia : ";
		cin >> usia;
		
		cout <<"ipk : ";
		cin >> ipk;
		
		cout<<endl;
		
	ms[i].setNama(nama);
	ms[i].setUsia(usia);
	ms[i].setIPK(ipk);
	}
	
	
	for(int i = 0; i<nilai; i++) {
	cout<<"nama mahasiswa: "<<ms[i].getNama()<<endl;
	cout<<"umur: "<<ms[i].getUsia()<<endl;
	cout<<"ipk: "<<ms[i].getIPK()<<endl<<endl;
	}
}
