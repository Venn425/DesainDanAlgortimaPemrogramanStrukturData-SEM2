#include <iostream>
using namespace std;

class Hitungan{
	private:
		float tamb, kur, kal, bag;
	
	public:
	
	void settambah(float x, float y){
	tamb = x + y;	
	}
	
	void setkurang(float c, float d){
	kur = c-d;
	}
	
	void setkali(float e, float f){
	kal = e*f;
	}
	
	void setbagi(float g, float h){
	bag = g/h;
	}
	
	float gettambah(){
		return tamb;
	}
	
	float getkurang(){
		return kur;
	}
	
	float getkali(){
		return kal;
	}
	
	float getbagi(){
		return bag;
	}
		
};




int main(){
	float a, b;
	
	cout<<"Masukkan Angka Pertama: ";
	cin>>a;
	cout<<"Masukkan Angka Kedua: ";
	cin>>b;
	
	Hitungan hitung;
	
	hitung.settambah(a, b);
	hitung.setkurang(a, b);
	hitung.setkali(a, b);
	hitung.setbagi(a, b);
	
	cout<<"Hasil penambahan: "<<hitung.gettambah()<<endl;	
	cout<<"Hasil pengurangan: "<<hitung.getkurang()<<endl;
	cout<<"Hasil perkalian: "<<hitung.getkali()<<endl;
	if(b>0){
		cout<<"Hasil pembagian: "<<hitung.getbagi();
	}
	else{
		cout<<"ERROR!"<<endl;
		cout<<"Hasil Pembagian: ERROR: Pembagian dengan nol tidak dapat dilakukan.";
		cout<<endl;
		}
	
}
