#include <iostream>
#include <string>
using namespace std;

int binarySearch(string bk[], int left, int right, string x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (bk[mid] == x)
            return mid;

        if (bk[mid] < x)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout<<"Masukkan jumlah Buku: ";
    cin>>n;

    string buku[n];
    cout<<"Masukkan Judul Buku: ";
    for (int i = 0; i < n; ++i) {
        cin>>buku[i];
    }

    string x;
    cout<<"Masukkan Judul Buku Yang Ingin Dicari: ";
    cin>>x;

    int result = binarySearch(buku, 0, n - 1, x);
    if (result == -1)
        cout<<"Buku tidak ditemukan";
    else
        cout<<"Buku ditemukan pada rak "<<result;

    return 0;
}

