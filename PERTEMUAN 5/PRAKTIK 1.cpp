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
	}
	cout<<endl;
}

int main(){
	int arr[5]={12, 11, 13, 5, 6}, i;
	cout<<"Array Sebelum Diurutkan: "<<endl;
	for(i=0 ; i<5 ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	inssort(arr, 5);
	
	cout<<"Array Setelah Diurutkan"<<endl;
	for(i=0 ; i<5 ; i++){			
	cout<<arr[i]<<" ";
	}	
}

