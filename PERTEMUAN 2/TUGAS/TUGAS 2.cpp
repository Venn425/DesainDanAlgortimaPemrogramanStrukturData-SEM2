#include <iostream>
using namespace std;

void merge(int AR[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);

int main() {
    int n = 8 , AR[8] = {2, 5, 60, 43, 27, 10, 89, 17};
    mergeSort(AR, 0, n - 1);
    return 0;
}

void merge(int AR[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) {
        L[i] = AR[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = AR[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            AR[k] = L[i];
            i++;
        } else {
            AR[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        AR[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        AR[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int AR[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        cout << "Memecah list [";
        for (int i = l; i <= r; i++) {
            cout << AR[i];
            if (i < r)
                cout << ", ";
        }
        cout << "]" << endl;

        mergeSort(AR, l, m);    
        mergeSort(AR, m + 1, r);

        cout << "Penggabungan list [";
        for (int i = l; i <= r; i++) {
            cout << AR[i];
            if (i < r)
                cout << ", ";
        }
        cout << "]" << endl;

        merge(AR, l, m, r); 
        cout << "Penggabungan list [";
        for (int i = l; i <= r; i++) {
            cout << AR[i];
            if (i < r)
                cout << ", ";
        }
        cout << "]" << endl;
	}
}
