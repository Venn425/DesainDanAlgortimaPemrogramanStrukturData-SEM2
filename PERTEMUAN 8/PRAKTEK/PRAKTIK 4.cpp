#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

class queue{
	private :
		int front, rear, count;
		int arr[MAX];
		
	public :
		queue(){
			front = 0;
			rear = MAX - 1;
			count = 0;
		}
	
	void enqueue(int x){
		if(count >= MAX){
			cout<<"Antrian penuh."<<endl;
			return;
		}
		rear = (rear + 1) % MAX;
		arr[rear] = x;
		count++;
	}
	
	int dequeue(){
		if (count <= 0){
			cout<<"Antrian Kosong."<<endl;
			return -1;
		}
		int x = arr[front];
		front = (front + 1) % MAX;
		count--;
		return x;
	}
	
	int peek(){
		if (count <= 0){
			cout<<"Antrian Kosong."<<endl;
			return -1;
		}
		return arr[front];
	}
	
	int size(){
		return count;
	}
	
	bool isEmpty(){
		return count == 0;
	}
	
	bool isFull(){
		return count == MAX;
	}
};

int main(){
	int n, m;
	
	cout<<"Masuan Jumlah Angka Yang Ingin Dimasukkan Kedalam Queue: ";
	cin>>n;
	cout<<"Masukkan Angka: ";
	
	queue q[n];
	
	for(int i=0 ; i<n ; i++){
		cin>>m;
	
	q[i].enqueue(m);	
	}
	
	cout<<"Menampilkan Angka Dari Queue: "<<endl;
	
	for(int j=0 ; j<n ; j++){
		cout<<q[j].peek()<<" ";	
	}

	return 0;
}
