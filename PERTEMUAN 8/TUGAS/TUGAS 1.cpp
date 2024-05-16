#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

class queue{
	private :
		int front, rear, count;
		string arr[MAX];
		
	public :
		queue(){
			front = 0;
			rear = MAX - 1;
			count = 0;
		}
	
	void enqueue(string x){
		if(count >= MAX){
			cout<<"Antrian penuh."<<endl;
			return;
		}
		rear = (rear + 1) % MAX;
		arr[rear] = x;
		count++;
	}
	
	string dequeue(){
		if (count <= 0){
			cout<<"Antrian Kosong."<<endl;
			return " ";
		}
		string x = arr[front];
		front = (front + 1) % MAX;
		count--;
		return x;
	}
	
	string peek(){
		if (count <= 0){
			cout<<"Antrian Kosong."<<endl;
			return " ";
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
	int n;
	string m;
	
	cout<<"Masukkan Jumlah Nama Yang Ingin Dimasukkan Kedalam Antrian: ";
	cin>>n;
	
	queue q[n];
	
	for(int i=0 ; i<n ; i++){
		cout<<"Masukkan Nama Ke-"<<i+1<<": ";
		cin>>m;
	
	q[i].enqueue(m);	
	}
	
	cout<<endl<<"Nama Dalam Antrian: "<<endl;
	
	for(int j=0 ; j<n ; j++){
		cout<<q[j].peek()<<endl;	
	}

	return 0;
}
