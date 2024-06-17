#include <iostream>
#include <vector>
#include <climits>
#include <cctype> 

using namespace std;

class Graf{
	public:
	    vector<vector<int> > adj; 
	    vector<char> simpul_data;
	    int n;
	
	    Graf(int n)
	    {
	        this->n = n;
	        adj.resize(n, vector<int>(n, 0));
	        simpul_data.resize(n);
	    }
	
	    void tambahSisi(int u, int v, int w)
	    {
	        if (u >= 0 && u < n && v >= 0 && v < n)
	        {
	            adj[u][v] = w;
	            adj[v][u] = w; // graf tak berarah
	        }
	    }
	
	    void tambahDataSimpul(int v, char data)
	    {
	        if (v >= 0 && v < n)
	        {
	            simpul_data[v] = data;
	        }
	    }
};

	void dijkstra(Graf &g, int awal, vector<int> &jarak, vector<int> &pred){
	    vector<bool> dikunjungi(g.n, false);
	    jarak.assign(g.n, INT_MAX);
	    pred.assign(g.n, -1);
	    jarak[awal] = 0;
	
	    for (int hitung = 0; hitung < g.n - 1; hitung++)
	    {
	        int min = INT_MAX, indeks_min = -1;
	
	        for (int v = 0; v < g.n; v++)
	        {
	            if (!dikunjungi[v] && jarak[v] <= min)
	            {
	                min = jarak[v];
	                indeks_min = v;
	            }
	        }
	
	        if (indeks_min == -1)
	            break;
	
	        int u = indeks_min;
	        dikunjungi[u] = true;
	
	        for (int v = 0; v < g.n; v++)
	        {
	            if (!dikunjungi[v] && g.adj[u][v] && jarak[u] != INT_MAX &&
	                jarak[u] + g.adj[u][v] < jarak[v])
	            {
	                jarak[v] = jarak[u] + g.adj[u][v];
	                pred[v] = u;
	            }
	        }
	    }
}

	int indeksSimpul(char v){
	    v = toupper(v);
	    if (v >= 'A' && v <= 'F')
	    {
	        return v - 'A';
	    }
	    return -1;
}

	int main(){
	    Graf g(6);
	
	    g.tambahDataSimpul(0, 'A');
	    g.tambahDataSimpul(1, 'B');
	    g.tambahDataSimpul(2, 'C');
	    g.tambahDataSimpul(3, 'D');
	    g.tambahDataSimpul(4, 'E');
	    g.tambahDataSimpul(5, 'F');
	
	    g.tambahSisi(0, 1, 1); 
	    g.tambahSisi(0, 2, 2); 
	    g.tambahSisi(1, 3, 5);
	    g.tambahSisi(1, 4, 1); 
	    g.tambahSisi(2, 3, 2); 
	    g.tambahSisi(3, 4, 2); 
	    g.tambahSisi(3, 5, 2); 
	    g.tambahSisi(4, 5, 1); 
	
	    cout << "Representasi Graf:\n";
	    cout << "\t A -1- B\n";
	    cout << "\t |     |  \\\n";
	    cout << "\t2|     5   1\n";
	    cout << "\t |     |    \\\n";
	    cout << "\t C -2- D -2- E\n";
	    cout << "\t        |    /\n";
	    cout << "\t        2   1\n";
	    cout << "\t        | /\n";
	    cout << "\t        F\n";
	
	    vector<int> jarak(g.n);
	    vector<int> pred(g.n);
	    char sumber, tujuan;
	    cout << "Masukkan simpul asal (A-F): ";
	    cin >> sumber;
	    cout << "Masukkan simpul tujuan (A-F): ";
	    cin >> tujuan;
	
	    int awal = indeksSimpul(sumber);
	    int akhir = indeksSimpul(tujuan);
	
	    if (awal == -1 || akhir == -1)
	    {
	        cout << "Simpul tidak valid" << endl;
	        return 1;
	    }
	
	    dijkstra(g, awal, jarak, pred);
	
	    cout << "Jarak dari simpul " << sumber << " ke simpul " << tujuan << " adalah " << jarak[akhir] << endl;
	
	    return 0;
}

