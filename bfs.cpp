#include <bits/stdc++.h>
using namespace std;

class Graph
{

    int V;                 // no. of vertices
    vector<list<int>> adj; // array with adjacency lists

public:
    Graph(int V);

    void addEdge(int v, int w);

    void BFS(int s); // traversal from source s gets printed
};

Graph ::Graph(int V)
{
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(V, false); // setting all vertices as unvisited

    list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    while (!queue.empty())
    {
        s = queue.front();
        cout << s << " -> ";
        queue.pop_front();

        // visit adj vertex if not visited then visit vertex and mark it visited, also push it in queue-
        for (auto adjacent : adj[s])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;
                queue.push_back(adjacent);
            }
        }
    }

}
int main(){
    Graph a(4);
    a.addEdge(0, 1);
    a.addEdge(0, 2);
    a.addEdge(3,1);
    a.addEdge(1, 2);
    a.addEdge(2, 0);
    a.addEdge(2, 3);
    a.addEdge(3, 3);

    
    a.BFS(2);

    return 0;
}