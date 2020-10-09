from collections import defaultdict 
  
# This class represents a directed graph 
# It is using adjacency list representation 
class Graph: 
  
    # Constructor 
    def __init__(self, number_of_nodes): 
        # default dictionary to store graph 
        self.graph = defaultdict(list) 
        self.nodes = number_of_nodes
  
    # Function to add an edge to graph 
    def addEdge(self,u,v): 
        self.graph[u].append(v) 
  
    # Function to print a BFS of graph 
    def BFS(self, s): 
  
        # Mark all the vertices as not visited 
        visited = [False] * (self.nodes)
  
        # Create a queue for BFS 
        queue = [] 
  
        # Mark the source node as  
        # visited and enqueue it 
        queue.append(s) 
        visited[s] = True
  
        while queue: 
  
            # Dequeue a vertex from  
            # queue and print it 
            s = queue.pop(0) 
            print str(s) + " " 
  
            # Get all adjacent vertices of the 
            # dequeued vertex s. If a adjacent 
            # has not been visited, then mark it 
            # visited and enqueue it 
            for i in self.graph[s]: 
                if visited[i] == False: 
                    queue.append(i) 
                    visited[i] = True
  
def main():
    g = Graph(6) 
    g.addEdge(0, 1)
    g.addEdge(0, 2)
    g.addEdge(1, 3)
    g.addEdge(1, 4)
    g.addEdge(2, 4)
    g.addEdge(3, 4)
    g.addEdge(3, 5)
    g.addEdge(4, 5)
    
    print "Following is Breadth First Traversal (starting from vertex 1)"
    g.BFS(0) 
     

if __name__ == "__main__":
    main()
