import java.io.*; 
import java.util.*; 

class BFS
{   

	private int noOfVertices;  
	private LinkedList<Integer> adjLst[];  

    //This constructor will automatically create a graph with noOfVertices vertices
    //It will also make noOfVertices adjacency lists corresponding to each vertex
    //An adjaceny list corresponding to vertex u will have the vertices which are neighbours of u
    BFS(int noOfVertices) { 
		this.noOfVertices = noOfVertices; 
		adjLst = new LinkedList[noOfVertices + 1]; 
		for (int i=1; i <= noOfVertices; i++) 
			adjLst[i] = new LinkedList(); 
	} 

    //Function to add an edge into the graph
    //Depending upon your use case, i.e directed or undirected graph, comment/uncomment the second line
    //I have considered an undirected graph here
    void addEdge(int u, int v) { 
        adjLst[u].add(v);
        adjLst[v].add(u); 
	} 

	//prints BFS traversal from a given source vertex -> start 
	void bfs(int start) 
	{ 
		//Mark all the vertices as not visited, i.e false 
		boolean visited[] = new boolean[noOfVertices + 1]; 
 
		LinkedList<Integer> queue = new LinkedList<Integer>(); 

		//We mark the source node as visited and add it inside the queue 
		visited[start]=true; 
		queue.add(start); 

		while (queue.size() != 0) 
		{ 
			//We will dequeue this vertex and start traversing through its neighbours
			int next = queue.poll(); 
			System.out.print(next + " -> "); 

            //Now we are traversing through each neighbour of next
            //If it is not marked visited, we will add it in the queue
			for(int n : adjLst[next]) { 
				if (!visited[n]) { 
					visited[n] = true; 
					queue.add(n); 
				} 
			} 
		} 
	} 

	public static void main(String args[]) 
	{ 
		BFS b = new BFS(5); 

		b.addEdge(1, 2); 
		b.addEdge(2, 4); 
		b.addEdge(4, 1); 
		b.addEdge(3, 5); 
		b.addEdge(2, 3);  

		b.bfs(3); 
	} 
} 
