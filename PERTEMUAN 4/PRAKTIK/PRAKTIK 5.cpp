#include <iostream>
#include <string>
using namespace std;

class Book {
	public:
		Book(string judul, string penulis, int tahun)
		: judul_(judul), penulis_(penulis), tahun_(tahun){
		}
	
	~Book(){
	}
	
	void TampilkanBuku(){
		cout<<"Judul: "<<judul_<<endl;
		cout<<"Penulis: "<<penulis_<<endl;
		cout<<"Tahun Terbit: "<<tahun_<<endl;
	}
	private:
		string judul_, penulis_;
		int tahun_;
};

int main(){
	{
	cout<<"Informasi Buku 1:"<<endl;
	Book buku1("Harry Potter and the Philosopher's Stone", "J.K. Rowling", 1997);
	buku1.TampilkanBuku();
	cout<<endl;
	cout<<"Informasi Buku 2: "<<endl;
	Book buku2("To Kill a Mocking Bird", "Harper Lee", 1960);
	buku2.TampilkanBuku();
	
	}
}
