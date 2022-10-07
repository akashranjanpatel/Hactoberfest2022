#include<iostream>
#include<list>

using namespace std;

class Graph {

    int V; // number of vertices
    list<int> *adj; // for storing the graph

    public:

        Graph(int V) {

            this->V = V;
            adj = new list<int>[V];
        } // end of constructor

        void addEdge(int v, int item) { adj[v].push_back(item); } // adding item to list of v

        void bfs(int s) {

            bool *visited = new bool[V]{false}; // marking visited vertices

            list<int> queue; // storing adjacent vertices

            visited[s] = true; // marking current vertex as visited

            queue.push_back(s); // enqueue value of current vertex

            list<int>::iterator i; // used for iterating through all adjacent vertices

            while (!queue.empty()) {

                s = queue.front();
                printf("%d ", s);
                queue.pop_front();

                for (i = adj[s].begin(); i != adj[s].end(); ++i) {

                    if (!visited[*i]) {

                        visited[*i] = true;
                        queue.push_back(*i);
                    }
                } // end of inner for loop

            } // end of outer while loop
        } // end of bfs(int)
}; // end of Graph class

int main() {

    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    printf("Following is Breadth First Traversal (starting from vertex 2) \n");
    g.bfs(2);

    printf("\n");
    return 0;
} // end of main()