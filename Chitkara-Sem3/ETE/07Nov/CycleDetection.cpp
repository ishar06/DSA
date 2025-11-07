#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
public:
    int V;
    list<int>* adjList;

    Graph(int vertices) {
        V = vertices;
        adjList = new list<int>[V];
    }

    // u = Source
    void createEdge(int u, int dest) {
        adjList[u].push_back(dest);
        adjList[dest].push_back(u);
    }

    // u = Source
    void removeEdge(int u, int v) {
        adjList[u].remove(v);
        adjList[v].remove(u);
    }

    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << " -> ";
            for (int x : adjList[i])
                cout << x << " ";
            cout << endl;
        }
    }

    void helper(int u, vector<bool>& vis) {
        vis[u] = true;
        cout << u << " ";
        for (int v : adjList[u]) {
            if (!vis[v]) {
                helper(v, vis);
            }
        }
    }

    void DFS(int start) {
        vector<bool> vis(V, false);
        helper(start, vis);
        cout << endl;
    }

    bool isCyclicVertex(int u, vector<bool>& visited, int parent) {
        visited[u] = true;
        for (int x : adjList[u]) {
            if (!visited[x]) {
                if (isCyclicVertex(x, visited, u))
                    return true;
            } else if (x != parent)
                return true;
        }
        return false;
    }

    bool isCyclic() {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++)
            if (!visited[i])
                if (isCyclicVertex(i, visited, -1))
                    return true;
        return false;
    }

    ~Graph() {
        delete[] adjList;
    }
};

int main() {
    Graph g(7);

    g.createEdge(0, 1);
    g.createEdge(0, 2);
    g.createEdge(2, 3);
    g.createEdge(2, 5);
    g.createEdge(3, 4);
    g.createEdge(3, 6);

    cout << "DFS Traversal starting from vertex 0: ";
    g.DFS(0);

    cout << "Graph is Cyclic: " << ((g.isCyclic()) ? "Yes" : "No") << endl;

    return 0;
}
