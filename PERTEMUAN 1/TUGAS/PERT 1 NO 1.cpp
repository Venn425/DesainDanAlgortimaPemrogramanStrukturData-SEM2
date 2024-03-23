#include <iostream>
using namespace std;

void inssort(int arr[], int n){
	int i, j, k, tmp;
	for(i=1 ; i<n ; i++){
		tmp = arr[i];
		j = i-1;
		while(j>=0 && tmp<arr[j]){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = tmp;
		cout<<"Proses Sorting"<<endl;
		for(k=0 ; k<n ; k++){
			cout<<arr[k];
		}		
	cout<<endl;
	}
}

int main(){
	int arr[100], n, i;
	cout<<"Masukkan banyak array: ";
	cin>>n;
	for(i=0 ; i<n ; i++){
	cout<<"Masukkan angka ke "<<i<<" :";
	cin>>arr[i];
	cout<<endl;
	}
	inssort(arr, n);
	
	cout<<"Hasil Sorting"<<endl;
	for(i=0 ; i<n ; i++){			
	cout<<arr[i];
	}
		
}
