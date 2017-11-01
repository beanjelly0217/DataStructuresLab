#include<iostream>
#include<list>
using namespace std;

// Adjacency list representation of graph
struct Graph
{
    int V ;
    list < int > *adj;
    Graph( int V )
    {
        this->V = V ;
        adj = new list<int>[V]; //create a list of V size
    }
    void addEdge ( int u, int v ) ;
    int countEdges () ;
};

// add edge to graph
void Graph :: addEdge ( int u, int v ) //U first node V second node of edge
{
    adj[u].push_back(v);//Add element at the end of vector
    adj[v].push_back(u);
}

int Graph :: countEdges()
{
    int sum = 0;
    for (int i = 0 ; i < V ; i++) //traverse every vertex
        sum += adj[i].size();// add every edge that are linked to the current vertex

    return sum/2; //because every edge has two vartics
}

int main()
{
    int V = 9 ;// Number of Nodes
    Graph g(V);

    g.addEdge(0, 1 ); //first node 0 last node 1
    g.addEdge(0, 7 );
    g.addEdge(1, 2 );
    g.addEdge(1, 7 );
    g.addEdge(2, 3 );
    g.addEdge(2, 7 );

    cout <<"Number of Edge of this graph is : " <<g.countEdges() << endl;

    return 0;
}
