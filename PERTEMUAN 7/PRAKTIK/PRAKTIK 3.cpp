#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100;
int nim[N];

int binarySearch(int x, int l, int r){
	if(r>=1){
		int mid = 1 + (r - 1) / 2;
		if(nim[mid] == x)
		return mid;
		if (nim[mid] > x)
			return binarySearch(x, l, mid - 1);
		return binarySearch(x, mid + 1, r);	
	}
	return -1;
}

int main(){
	int n;
	cout<<"Masukkan Jumlah Mahasiswa: ";
	cin>>n;
	
	cout<<"Masukkan NIM Mahasiswa: "<<endl;
	for(int i = 0 ; i < n ; i++){
		cin>>nim[i];
	}
	
	sort(nim, nim+n);
	int x;
	cout<<"Masukkan NIM yang dicari: ";
	cin>>x;
	
	int hasil = binarySearch(x, 0, n - 1);
	if(hasil == -1)
	cout<<"NIM tidak ditemukan"<<endl;
	else
	cout<<"NIM ditemukan pada indeks "<<hasil<<endl;
	
	return 0;
}
