#include<iostream>
using namespace std;

int main() {
    int i, j, n, p;
    string arr[100], tampung;
    cout<<"Masukkan Banyak Judul Buku: ";
    cin>>n;
    
    cout<<"Masukkan nama judul buku: ";
    for (i = 0; i < n; i++) {
    	cin >> arr[i];
	}
    cout << endl;
    cout<<"Pilih Urutan"<<endl<<"1. A-Z"<<endl<<"2. Z-A"<<endl;
    cout<<endl<<"Pilihan: ";
    cin>>p;
    
    switch (p){
    	case 1 :
		for(i = 0; i < n ; i++) {
        for(j = 0; j < n ; j++) {
            if(arr[j] > arr[j + 1]) {
                tampung = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tampung;
            	}
        	}
    }
    cout << endl;
    cout << "Hasil Pengurutan Z-A: "<<endl;
    for(j = 0; j < n+1; j++) {
        	cout << arr[j] <<endl;
		}
	break;	

		case 2:
		for(i = 0; i < n ; i++) {
        for(j = 0; j < n ; j++) {
            if(arr[j] < arr[j + 1]) {
                tampung = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tampung;
            	}
        	}
    }
    cout << endl;
    cout << "Hasil Pengurutan Z-A: "<<endl;
    for(j = 0; j < n+1; j++) {
        	cout << arr[j] <<endl;
		} 
	break;
	}
    
    
    return 0;
}

