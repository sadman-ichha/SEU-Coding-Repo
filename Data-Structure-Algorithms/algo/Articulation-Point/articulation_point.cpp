#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> G[100];
int st[100], low[100], arti[100], tim, nodes, edges;

void DFS(int u, int parent)
{
    st[u] = low[u] = ++tim;
    int children = 0;

    for (int v : G[u])
    {
        if (v == parent)
            continue;
        if (!st[v])
        {
            DFS(v, u);
            low[u] = min(low[u], low[v]);
            children++;
            if (low[v] >= st[u] && parent != -1)
                arti[u] = 1;
        }
        else
        {
            low[u] = min(low[u], st[v]);
        }
    }

    if (parent == -1 && children > 1)
        arti[u] = 1;
}

int main()
{
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        char U, V;
        cin >> U >> V;
        int u = U - 'A' + 1, v = V - 'A' + 1;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    for (int i = 1; i <= nodes; i++)
    {
        if (!st[i])
            DFS(i, -1);
    }

    cout << "Articulation Points Check:\n";
    for (int i = 1; i <= nodes; i++)
    {
        cout << char('A' + i - 1) << " is ";
        if (!arti[i])
            cout << "not ";
        cout << "an articulation point\n";
    }
    return 0;
}