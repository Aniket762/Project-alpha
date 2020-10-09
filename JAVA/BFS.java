import java.util.*;
import java.io.*;

//In this code, the vertex index starts from 0. The first vertex will have index 0, not 1.
class Graph{
    public int noOfVertices;
    public LinkedList<Integer> adjLst[];

    //This constructor will form the skeleton of the Graph
    Graph(int noOfVertices){
        
        //Creates a graph with the given number of vertices
        this.noOfVertices = noOfVertices;
        adjLst = new LinkedList[noOfVertices];

        //Adjacency lists are created for each vertex
        for(int i=0; i<noOfVertices; i++){
            adjLst[i] = new LinkedList();
        }
    }

    //This method adds an edge between vertex u and v
    public void addEdge(int u, int v){
        //Represents an edge u -> v
        adj[u].add(v);
        
        //Depending upon the use case (directed or undirected graph) the below piece of code can be uncommented
        //adj[v].add(u);
    }
}


public class BFS {
  
  //Code for BFS that starts from vertex s
  void bfs(int s, int noOfVertices) {

    //Marks vertices which are visited during our traversal
    boolean[] visited = new boolean[noOfVertices];

    //This queue will take the neighbours of the head element and carry on with the traversal
    LinkedList<Integer> visVertices = new LinkedList();

    //Marks the starting vertex as visited
    visited[s] = true;
    visVertices.add(s);

    //When the queue becomes empty, it means that we have considered all the neighbours and traveresed through all the vertices in a cycle
    while (visVertices.size() != 0) {

      //We remove this from the queue since we will be taking its neighbours now
      s = visVertices.poll();

      //Prints the order of traversal
      System.out.print(s + " ");
      
      //Since the adjaceny lists contains all the vertices that share an edge with s, we will loop through them and add them to our queue if they aren't visited
      for(int n : adj[s]) {
        if (!visited[n]) {
          visited[n] = true;
          visVertices.add(n);
        }
      }
    }
  }

  public static void main(String args[]) {
    int noOfVertices = 5;
    Graph g = new Graph(noOfVertices);
    g.addEdge(0, 1);
    g.addEdge(1, 3);
    g.addEdge(3, 0);
    g.addEdge(1, 2);
    g.addEdge(2, 4);

    //Will call this function so the path can be printed for BFS
    g.BFS(4, noOfVertices);
  }
}