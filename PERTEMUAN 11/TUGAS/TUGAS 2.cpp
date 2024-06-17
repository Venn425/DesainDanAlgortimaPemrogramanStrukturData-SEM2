#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <functional>
#include <climits>
using namespace std;

#define INF INT_MAX
#define NODES 6

typedef pair<int, int> iPair;

struct compare {
    bool operator()(const iPair& lhs, const iPair& rhs) const {
        return lhs.second > rhs.second;
    }
};

void printResult(const vector<int>& dist)
{
    cout << "Jarak terpendek dari simpul 1 ke setiap simpul:\n";
    for (int i = 0; i < NODES - 1 ; i++)
        cout << "Ke Simpul- " << i + 2 << " Berjarak " << dist[i+1] << endl;
}

void dijkstra(const vector<vector<iPair> >& graph, int src)
{
    priority_queue<iPair, vector<iPair>, compare> pq;
    vector<int> dist(NODES, INF);

    pq.push(make_pair(src, 0));
    dist[src] = 0;

    while (!pq.empty())
    {
        int u = pq.top().first;
        pq.pop();

        for (size_t i = 0; i < graph[u].size(); ++i)
        {
            int s = graph[u][i].first;
            int weight = graph[u][i].second;

            if (dist[u] + weight < dist[s])
            {
                dist[s] = dist[u] + weight;
                pq.push(make_pair(s, dist[s]));
            }
        }
    }

    printResult(dist);
}

int main()
{
    vector<vector<iPair> > graph(NODES);

    graph[0].push_back(make_pair(1, 7));
    graph[0].push_back(make_pair(2, 9));
    graph[0].push_back(make_pair(5, 14));
    graph[1].push_back(make_pair(0, 7));
    graph[1].push_back(make_pair(2, 10));
    graph[1].push_back(make_pair(3, 15));
    graph[2].push_back(make_pair(0, 9));
    graph[2].push_back(make_pair(1, 10));
    graph[2].push_back(make_pair(3, 11));
    graph[2].push_back(make_pair(5, 2));
    graph[3].push_back(make_pair(1, 15));
    graph[3].push_back(make_pair(2, 11));
    graph[3].push_back(make_pair(4, 6));
    graph[4].push_back(make_pair(3, 6));
    graph[4].push_back(make_pair(5, 9));
    graph[5].push_back(make_pair(0, 14));
    graph[5].push_back(make_pair(2, 2));
    graph[5].push_back(make_pair(4, 9));

    dijkstra(graph, 0);

    return 0;
}

