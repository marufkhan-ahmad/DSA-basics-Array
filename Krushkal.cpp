#include <bits/stdc++.h>
using namespace std;
class MST
{
    int *parent;
    int *child;

public:
    MST(int n)
    {
        parent = new int[n];
        child = new int[n];
        for (int i = 0; i < n; i++)
        {
            parent[i] = -1;
            child[i] = 1;
        }
    }
    int get(int i)
    {
        if (parent[i] == -1)
            return i;
        return parent[i] = get(parent[i]);
    }

    //   union function
    void unite(int x, int y)
    {
        int a = get(x);
        int b = get(y);
        if (a != b)
        {
            if (child[a] < child[b])
            {
                parent[a] = b;
            }
            else if (child[a] > child[b])
            {
                parent[b] = a;
            }
            else
            {
                parent[b] = a;
                child[a] = child[a] + 1;
            }
        }
    }
};
class Graph
{
    vector<vector<int>> edgelist;
    int V;

public:
    Graph(int V)
    {
        this->V = V;
    }
    void addEdge(int x, int y, int w)
    {
        edgelist.push_back({w, x, y});
    }
    void krushkals()
    {
        // sort the edge
        sort(edgelist.begin(), edgelist.end());
        // initialize MST
        MST s(V);
        int ans = 0;
        cout << "These are the edges present in MST:" << endl;
        for (auto edge : edgelist)
        {
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];
            // Edge in MST that does not make cycle
            if (s.get(x) != s.get(y))
            {
                s.unite(x, y);
                ans = ans + w;
                cout << x << "--" << y << "==" << w << endl;
            }
        }
        cout << "The minimum spanning tree is:" << ans << endl;
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1, 2);
    g.addEdge(1, 2, 5);
    g.addEdge(2, 3, 35);
    g.addEdge(0, 2, 15);
    g.addEdge(0, 3, 25);
    g.krushkals();
    return 0;
}