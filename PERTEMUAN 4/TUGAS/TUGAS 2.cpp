#include<iostream>
using namespace std;

class contoh{
	private:
		int nilai;
	public:
//		constructor menggunakan parameter
		contoh (int n){
			nilai = n;
		}
//		mengambil value dari nilai
		int getNum(){
			return nilai;
		}	
};

int main(){
//	membuat objek class dengan value yang ditentukan
	contoh obj(10);
//	menampilkan nilai
	cout<<"Nilai yang diinput: "<<obj.getNum()<<endl;
	
	return 0;
}
