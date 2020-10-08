#include <bits/stdc++.h>

using namespace std;

/*

Breadth-first search (BFS) is an algorithm for traversing or searching 
tree or graph data structures. 

It starts at the tree root (or some arbitrary node of a graph and
explores all of the neighbor nodes at the present depth prior to 
moving on to the nodes at the next depth level.

Time Complexity - O(V + E), where V is the number of nodes and E is the number of edges.

Space Complexity - O(|V|)

*/

vector<bool> v;
vector<vector<int>> g;

void edge(int a, int b)
{
    g[a].emplace_back(b);
}

void bfs(int u)
{
    queue<int> q;

    q.push(u);
    v[u] = true;

    while (!q.empty())
    {

        int f = q.front();
        q.pop();

        cout << f << " ";

        // Enqueue all adjacent of f and mark them visited
        for (auto i = g[f].begin(); i != g[f].end(); i++)
        {
            if (!v[*i])
            {
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cout << "Enter Number of Nodes and Edges" << endl;
    cin >> n >> e;

    v.assign(n, false);
    g.assign(n, vector<int>());

    int a, b;
    for (int i = 0; i < e; i++)
    {
        cout << "Enter the edges " << endl;
        cin >> a >> b;
        edge(a, b);
    }

    for (int i = 0; i < n; i++)
    {
        if (!v[i])
            bfs(i);
    }

    return 0;
}