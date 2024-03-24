#include <iostream>
using namespace std;

void swap(int arr[], int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(arr[i] < pivot){
			i++;
		}
		else{
			swap(arr, i, j);
			i++;
			j++;
		}
	}
	cout <<"[";
	for(int i = 0; i < 10; i++){
		if (i <9){
		cout<<arr[i]<<", ";
		}
		else{
		cout<<arr[i];
		}
	}
		cout<<"]"<<endl;
	return j-1;
}

void quicksort(int arr[], int low, int high){
	if(low < high){
		int pivot = arr[high];
		int pos = partition(arr, low, high, pivot);
		
		quicksort(arr, low, pos-1);
		quicksort(arr, pos+1, high);
		
	}
}

int main(){
	int arr[10] = {67, 91, 87, 33, 49, 10, 16, 43, 65, 3};
		cout<<"Data yang akan disort : [";
	for(int i = 0; i < 10; i++){
		if (i <9){
		cout<<arr[i]<<", ";
		}
		else{
		cout<<arr[i];
		}
	}
		cout<<"]"<<endl;
	
	cout<<"Quick Sort : "<<endl;
	quicksort(arr, 0, 10-1);
	
}
