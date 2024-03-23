////NO 1 DESCENDING
#include <iostream>
using namespace std;

void inssort(int arr[], int n){
	int i, j, k, tmp;
	for(i=1 ; i<n ; i++){
		tmp = arr[i];
		j = i-1;
		while(j>=0 && tmp>arr[j]){
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

//NO 2 DESCENDING
//#include <iostream>
//using namespace std;
//
//void selsort(int arr[], int n){
//	int i, j, k, tmp, min;
//	for(i=0 ; i<n-1 ; i++){
//		min = i;
//		for(j=i+1 ; j<n ; j++){
//			if(arr[j]>arr[min]){
//			min = j;
//			}
//		}
//	tmp = arr[i];
//	arr[i] = arr[min];
//	arr[min] = tmp;	
//	
//	cout<<"iterasi ke- "<<i+1<<" : ";
//	for(k=0 ; k<n ; k++){
//		cout<<arr[k];
//		}
//	cout<<endl;	
//	}
//}
//
//int main(){
//	int arr[100], n, i, j;
//	cout<<"Jumlah elemen: ";
//	cin>>n;
//	
//	cout<<"Masukkan nilai elemen: ";
//	for(i=0 ; i<n ; i++){
//	cin>>arr[i];
//	}
//	cout<<"Data sebelum sorting: ";
//	for(j=0 ; j<n ; j++){
//		cout<<arr[j];
//	}
//	cout<<endl;
//	selsort(arr, n);
//	
//	cout<<"Data setelah sorting: ";
//	for(i=0 ; i<n ; i++){			
//	cout<<arr[i];
//	}
//		
//}

