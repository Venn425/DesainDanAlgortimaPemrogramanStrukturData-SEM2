#include <iostream>
using namespace std;

void selsort(int arr[], int n){
	int i, j, k, tmp, min;
	for(i=0 ; i<n-1 ; i++){
		min = i;
		for(j=i+1 ; j<n ; j++){
			if(arr[j]<arr[min]){
			min = j;
			}
		}
	tmp = arr[i];
	arr[i] = arr[min];
	arr[min] = tmp;	
	
	cout<<"iterasi ke- "<<i+1<<" : ";
	for(k=0 ; k<n ; k++){
		cout<<arr[k];
		}
	cout<<endl;	
	}
}

int main(){
	int arr[100], n, i, j;
	cout<<"Jumlah elemen: ";
	cin>>n;
	
	cout<<"Masukkan nilai elemen: ";
	for(i=0 ; i<n ; i++){
	cin>>arr[i];
	}
	cout<<"Data sebelum sorting: ";
	for(j=0 ; j<n ; j++){
		cout<<arr[j];
	}
	cout<<endl;
	selsort(arr, n);
	
	cout<<"Data setelah sorting: ";
	for(i=0 ; i<n ; i++){			
	cout<<arr[i];
	}
		
}

