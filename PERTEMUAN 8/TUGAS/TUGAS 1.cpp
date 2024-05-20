#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

class queue {
    private:
        int front, rear, count;
        string arr[MAX];
    
    public:
        queue() {
            front = 0;
            rear = MAX - 1;
            count = 0;
        }
    
        void enqueue(string x) {
            if(count >= MAX) {
                cout << "Antrian penuh." << endl;
                return;
            }
            rear = (rear + 1) % MAX;
            arr[rear] = x;
            count++;
        }
    
        string dequeue() {
            if(count <= 0) {
                cout << "Antrian Kosong." << endl;
                return " ";
            }
            string x = arr[front];
            front = (front + 1) % MAX;
            count--;
            return x;
        }
    
        string peek() {
            if(count <= 0) {
                cout << "Antrian Kosong." << endl;
                return " ";
            }
            return arr[front];
        }
    
        int size() {
            return count;
        }
    
        bool isEmpty() {
            return count == 0;
        }
    
        bool isFull() {
            return count == MAX;
        }
};

void Judul(){
	cout << "=============================================" << endl;
    cout << "=========== LOKET PEMBELIAN TIKET ===========" << endl;
    cout << "=============================================" << endl;
}

int main() {
    string m;
    char x, y;
    queue q;

   Judul();

    int i = 1;

    antri:
	
    cout << "Masukkan Nama Anda: ";
    cin >> m;	
    cout << "Anda Mendapatkan Nomor Antrian Ke-" << i << "\n\n";

    q.enqueue(m);	
    i++;
    
    cout << "Apakah Anda Ingin Menambah Antrian? (Y/T)" << endl;
    cin >> x;
    cout << endl;

    if (x == 'y' || x == 'Y') {
        system("cls");
		Judul(); 
		goto antri;
    }
    
    if (x == 't' || x == 'T') {
        goto next1;
    }

    next1:
    cout << "Apakah Anda Ingin Melihat Antrian? (Y/T)" << endl;
    cin >> y;
    cout<< endl;

    if (y == 'y' || y == 'Y') {
        cout << "Saat Ini Antrian Ada Sebanyak " << q.size() << " Orang" << endl;
        cout << "Berikut nama-nama yang ada didalam antrian:" << endl;
        
        i = 1;
        while (!q.isEmpty()) {
            cout << i << ". " << q.peek() << endl;
            q.dequeue();
            i++;
        }
    } 

    return 0;
}

