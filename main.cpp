// Name: Sean Oreta
// CWID: 886349166
// Email: soreta@csu.fullerton.edu
// Class: CPSC335
// Assignment: 1
// Notes: https://www.programiz.com/dsa/ford-fulkerson-algorithm 
// 	  https://www.youtube.com/watch?v=Tl90tNtKvxs&t=190s
// 		^ Websites used as a reference for Ford Fulkerson 

#include <iostream>
#include <vector>
#include <queue>
#include <climits>

std::vector<int> parent; // Used to store parents of nodes later.

// BFS Search Method
bool BFS(std::vector<std::vector<int>> graph, int start, int end){
    bool visited[graph.size()];
    for (size_t x = 0; x < graph.size(); x++) {
    	visited[x] = false;
	parent[x] = false;
    }
    std::queue<int> Q;
    Q.push(start);
    visited[start] = true;
    parent[start] = -1;
    while(!Q.empty()) {
    	int node = Q.front();
	Q.pop();
	for (size_t n = 0; n != graph.size(); n++) {
	    if (visited[n] == false && graph[node][n] > 0) {
	    	Q.push(n);
		parent[n] = node;
		visited[n] = true;
	    }
	}
    }
    return (visited[end] == true);
}

int fordFulkerson(std::vector<std::vector<int>> graph, int start, int end) {
 int max_flow = 0;
 // Residual Graph
 std::vector<std::vector<int>> rgraph = graph;

 parent.resize(graph.size());

 // Looping different paths.
 while (BFS(rgraph, start, end)) {
    int flow = INT_MAX;
    int current_node;
    // Find smallest flow in path.
    for (int x = end; x != start; x = parent[x]) {
    	current_node = parent[x];
	flow = std::min(flow, rgraph[current_node][x]);
    }
    // Adjust values based on flow.
    for (int x = end; x != start; x = parent[x]) {
    	current_node = parent[x];
	rgraph[current_node][x] -= flow;
	rgraph[x][current_node] += flow;
    }
    // Add to max flow. 
    max_flow += flow;
    
 }
 return max_flow;
}

int main() {
    // Graph is saved as an adjacency matrix.
    std::vector<std::vector<int>> graph{
                { 0, 10, 0, 10, 0, 0 }, // S
                { 0, 0, 4, 2, 8, 0}, 	// A
                { 0, 0, 0, 0, 0, 10 },	// B
                { 0, 0, 0, 0, 9, 0 },	// C
                { 0, 0, 6, 0, 0, 10 },	// D
                { 0, 0, 0, 0, 0 }	// T 
            };
    int maxFlow = fordFulkerson(graph, 0, 5);
    printf("The max flow for this system is: %d\n", maxFlow);
    return 0;
}



