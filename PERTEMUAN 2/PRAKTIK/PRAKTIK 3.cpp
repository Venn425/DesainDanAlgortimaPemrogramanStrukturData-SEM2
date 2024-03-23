#include <iostream>
using namespace std;

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1); 

    for (int j = low; j < high; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}


int main()
{
    int arr[5], size = 5;
	
	cout << "\nMasukkan 5 elemen : ";
    for (int i = 0; i < 4; ++i)
    {
        cin >> arr[i];
        cout<<" ";
    }
    cout<<endl;
    
	cout<<"\nArray sebelum diurutkan: ";
    for(int j = 0; j<4 ; j++){
    	cout<<arr[j];
    	cout<<" ";
	}
	cout<<endl;
	
    quickSort(arr, 0,size);
    cout << "Array sesudah dirutkan: \n";
    show(arr, size);
    
}
