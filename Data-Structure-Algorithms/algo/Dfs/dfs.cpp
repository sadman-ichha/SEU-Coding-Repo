#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

vector<int> G[100];   // Original Graph
vector<int> GT[100];  // Transpose Graph
int st[100], ft[100]; // Start & Finish time
int tim;
int node, edge;

vector<int> compo;

// First DFS (on original graph)
void DFS(int u) {
    ++tim;
    st[u] = tim;
    for (int v : G[u]) {
        if (st[v] == 0) {
            DFS(v);
        }
    }
    ++tim;
    ft[u] = tim;
}

// Second DFS (on transpose graph)
void DFS2(int u) {
    compo.push_back(u);
    ++tim;
    st[u] = tim;
    for (int v : GT[u]) {
        if (st[v] == 0) {
            DFS2(v);
        }
    }
    ++tim;
    ft[u] = tim;
}

int main() {
    cin >> node >> edge;

    for (int i = 1; i <= edge; i++) {
        char U, V;
        int u, v;
        cin >> U >> V;
        u = (U - 'A' + 1);
        v = (V - 'A' + 1);

        G[u].push_back(v);
        GT[v].push_back(u);
    }

    // Step 1: DFS on original graph
    tim = 0;
    for (int i = 1; i <= node; i++) {
        if (st[i] == 0) DFS(i);
    }

    // Prepare finish times
    vector<pair<int,int>> temp;
    for (int i = 1; i <= node; i++) {
        temp.push_back({ft[i], i});
    }

    sort(temp.begin(), temp.end());

    // Step 2: DFS on transpose graph in reverse order
    memset(st, 0, sizeof(st));
    memset(ft, 0, sizeof(ft));
    tim = 0;

    cout << "Strongly Connected Components:\n";
    for (int i = temp.size() - 1; i >= 0; i--) {
        int x = temp[i].second;
        if (st[x] == 0) {
            DFS2(x);
            for (int j = 0; j < compo.size(); j++) {
                cout << char('A' - 1 + compo[j]) << " ";
            }
            cout << endl;
            compo.clear();
        }
    }

    return 0;
}

