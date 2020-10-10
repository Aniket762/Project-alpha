import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

public class DjikstraShortestPathFromSource {
	
	public static Graph djikstraShortestPathFromSource(Graph graph, Node sourceNode) {
		sourceNode.setDistance(0);
		
		Set<Node> settledNodes = new HashSet<Node>();
		Set<Node> unsettledNodes = new HashSet<Node>();
		unsettledNodes.add(sourceNode);
		
		while(unsettledNodes.size() != 0) {
			Node currentNode = getLowestDistance(unsettledNodes);
			unsettledNodes.remove(currentNode);
			for (Entry<Node, Integer> neigborPair : currentNode.getNeighborNode().entrySet()) {
				if(!settledNodes.contains(neigborPair.getKey())) {
					minimumDistanceBetweenTwoNodes(neigborPair, currentNode);
					unsettledNodes.add(neigborPair.getKey());
				}
			}
			settledNodes.add(currentNode);
		}
		
		return graph;
	}
	
	private static void minimumDistanceBetweenTwoNodes(Map.Entry<Node, Integer> evaluationNodeEntry, Node sourceNode) {
		Integer sourceDistance = sourceNode.getDistance();
		Node evaluationNode = evaluationNodeEntry.getKey();
		Integer distanceToNeighbor = evaluationNodeEntry.getValue();
		Integer newDistance = sourceDistance + distanceToNeighbor;
		if(newDistance < evaluationNode.getDistance()) {
			evaluationNode.setDistance(newDistance);
			LinkedList<Node> shortestPath = new LinkedList<Node>(sourceNode.getShortestPath());
			shortestPath.add(sourceNode);
			evaluationNode.setShortestPath(shortestPath);
		}
	}
	
	private static Node getLowestDistance(Set<Node> unsettledNodes) {
		Node closestNode = null;
		int smallestDistance = Integer.MAX_VALUE;
		for (Node node : unsettledNodes) {
			int nodeDistance = node.getDistance();
			if(smallestDistance > nodeDistance) {
				smallestDistance = nodeDistance;
				closestNode = node;
			}
		}
		return closestNode;
	}

}

class Node {
	
	private String name;
	private Collection<Node> shortestPath = new LinkedList<Node>();
	private Integer distance = Integer.MAX_VALUE;
	private Map<Node, Integer> neighborNodes = new HashMap<Node, Integer>();
	
	public Node(String name) {
		this.name = name;
	}
	
	public void addDestination(Node destination, int distance) {
		neighborNodes.put(destination, distance);
    }
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public Collection<Node> getShortestPath() {
		return shortestPath;
	}
	public void setShortestPath(Collection<Node> shortestPath) {
		this.shortestPath = shortestPath;
	}
	public Integer getDistance() {
		return distance;
	}
	public void setDistance(Integer distance) {
		this.distance = distance;
	}
	public Map<Node, Integer> getNeighborNode() {
		return neighborNodes;
	}
	public void setNeighborNode(Map<Node, Integer> neighborNode) {
		this.neighborNodes = neighborNode;
	}
}

class Graph {
	
	private Set<Node> nodes = new HashSet<Node>();
	
	public void addNode(Node node) {
		nodes.add(node);
	}

	public Set<Node> getNodes() {
		return nodes;
	}

	public void setNodes(Set<Node> nodes) {
		this.nodes = nodes;
	}
	
}