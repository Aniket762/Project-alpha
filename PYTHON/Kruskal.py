#Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
# I have found and printed the Minimum Spanning Tree (MST) using Kruskal's algorithm.
#For printing MST I have followed the steps -
#1. In one line, print an edge which is part of MST in the format -v1 v2 w  ,where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w. And v1 <= v2 i.e. print the smaller vertex first while printing an edge.
#2. Print V-1 edges in above format in different lines.



#Input Format :
#Line 1: Two Integers V and E (separated by space)
#Next E lines : Three integers ei, ej and wi, denoting that there exists an edge between vertex ei and vertex ej with weight wi (separated by space)



#Output Format :
#MST
class Edge:
    def __init__(self,src,dest,wt):
        self.src=src
        self.dest=dest
        self.wt=wt

def getParent(v,parent):
    if (v==parent[v]):
        return v
    return getParent(parent[v],parent)

def kruskal(edges,nVertices):
    parent=[i for i in range(nVertices)]
    edges=sorted(edges,key=lambda edge:edge.wt)
    count=0
    output=[]
    i=0
    while count<(nVertices-1):
        currentEdge=edges[i]
        srcParent=getParent(currentEdge.src,parent)
        destParent=getParent(currentEdge.dest,parent)
        if srcParent!=destParent:
            output.append(currentEdge)
            count+=1
            parent[srcParent]=destParent
        i=i+1
        
    return output
print("Enter the vertices and edges separated by space")
li=[int(ele) for ele in input().split()]
n=li[0]
E=li[1]
edges=[]
print("Enter Next E lines : Three integers ei, ej and wi, denoting that there exists an edge between vertex ei and vertex ej with weight wi (separated by space)")
for i in range(E):
    curr_input=[int(ele)for ele in input().split()]
    src=curr_input[0]
    dest=curr_input[1]
    wt=curr_input[2]
    edge=Edge(src,dest,wt)
    edges.append(edge)
output=kruskal(edges,n)
print("\nMST::  \n")
for edge in output:
    if (edge.src<edge.dest):
        
        print(str(edge.src)+" "+str(edge.dest)+" "+ str(edge.wt))
    else:
        
        print(str(edge.dest)+" "+str(edge.src)+" "+ str(edge.wt))