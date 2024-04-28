#include <iostream>
using namespace std;

int main(){
	int Nilai[20];
	int Posisi[20];
	int i, n, Bil, jmlh = 0;
	bool ketemu;
	
	cout<<"Masukkan julah deret bilangan = ";
	cin>>n;
	cout<<endl;
	
	for(i=0 ; i<n ; i++){
		cout<<"Nilai bilangan ke-"<<i<<" = ";
		cin>>Nilai[i];
	}
	
	cout<<"\n\Deret Bilangan = ";
	for(i=0 ; i<n ; i++)
	cout<<Nilai[i]<<" ";
	
	cout<<"\n\nMasukkan Bilangan yang akan dicari = ";
	cin>>Bil;
	
	for(i=0 ; i<n ; i++){
		if(Nilai[i]==Bil){
		ketemu = true;
		Posisi[jmlh] = i;
		jmlh++;
	}
}
	if(ketemu){
		cout<<"Bilangan "<<Bil<<" ditemukan sebanyak "<<jmlh;
		cout<<"\npada posisi ke = ";
		for(i=0 ; i<jmlh ; i++)
		cout<<Posisi[i];
	}
	else
		cout<<"Maaf, bilangan "<<Bil<<" tidak ditemukan";
		getchar();
	}
