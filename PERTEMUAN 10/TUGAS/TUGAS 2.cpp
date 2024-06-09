#include <iostream>
#include <vector>

using namespace std;

class Graf {
    int J;
    vector<vector<pair<int, int> > > daftarAdj;

public:
    Graf(int J) {
        this->J = J;
        daftarAdj.resize(J);
    }

    void tambahSisi(int u, int v) {
        daftarAdj[u].push_back(make_pair(v, 0));
        daftarAdj[v].push_back(make_pair(u, 0));
    }

    void tambahSisiBerarah(int u, int v) {
        daftarAdj[u].push_back(make_pair(v, 0));
    }

    void tambahSisiBerbobot(int u, int v, int bobot) {
        daftarAdj[u].push_back(make_pair(v, bobot));
    }

    vector<pair<int, int> >& tetanggaBerbobot(int u) {
        return daftarAdj[u];
    }
};

int main() {
    int JumlahSimpul = 5;

    Graf grafTakBerarah(JumlahSimpul);
    grafTakBerarah.tambahSisi(0, 1);
    grafTakBerarah.tambahSisi(0, 4);
    grafTakBerarah.tambahSisi(1, 2);
    grafTakBerarah.tambahSisi(1, 3);
    grafTakBerarah.tambahSisi(1, 4);
    grafTakBerarah.tambahSisi(2, 3);
    grafTakBerarah.tambahSisi(3, 4);

    cout << "Daftar Ketetanggaan (Graf Tidak Berarah):" << endl;
    for (int i = 0; i < JumlahSimpul; ++i) {
        cout << "Simpul " << i << ": -> ";
        for (int j = 0; j < grafTakBerarah.tetanggaBerbobot(i).size(); ++j) {
            cout << grafTakBerarah.tetanggaBerbobot(i)[j].first << " ";
        }
        cout << endl;
    }

    Graf grafBerarah(JumlahSimpul);
    grafBerarah.tambahSisiBerarah(0, 1);
    grafBerarah.tambahSisiBerarah(0, 4);
    grafBerarah.tambahSisiBerarah(1, 2);
    grafBerarah.tambahSisiBerarah(1, 3);
    grafBerarah.tambahSisiBerarah(1, 4);
    grafBerarah.tambahSisiBerarah(2, 3);
    grafBerarah.tambahSisiBerarah(3, 4);

    cout << "\nDaftar Ketetanggaan (Graf Berarah):" << endl;
    for (int i = 0; i < JumlahSimpul; ++i) {
        cout << "Simpul " << i << ": -> ";
        for (int j = 0; j < grafBerarah.tetanggaBerbobot(i).size(); ++j) {
            cout << grafBerarah.tetanggaBerbobot(i)[j].first << " ";
        }
        cout << endl;
    }

    Graf grafBerbobot(JumlahSimpul);
    grafBerbobot.tambahSisiBerbobot(0, 1, 10);
    grafBerbobot.tambahSisiBerbobot(0, 4, 20);
    grafBerbobot.tambahSisiBerbobot(1, 2, 30);
    grafBerbobot.tambahSisiBerbobot(1, 3, 40);
    grafBerbobot.tambahSisiBerbobot(1, 4, 50);
    grafBerbobot.tambahSisiBerbobot(2, 3, 60);
    grafBerbobot.tambahSisiBerbobot(3, 4, 70);

    cout << "\nDaftar Ketetanggaan (Graf Berbobot):" << endl;
    for (int i = 0; i < JumlahSimpul; ++i) {
        cout << "Simpul " << i << ": -> ";
        for (int j = 0; j < grafBerbobot.tetanggaBerbobot(i).size(); ++j) {
            cout << "(" << grafBerbobot.tetanggaBerbobot(i)[j].first << ", " << grafBerbobot.tetanggaBerbobot(i)[j].second << ") ";
        }
        cout << endl;
    }

    return 0;
}

