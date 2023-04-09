// Name: Sean Oreta
// CWID: 886349166
// Email: soreta@csu.fullerton.edu
// Class: CPSC335
// Assignment: 1

#include <iostream>
#include <vector>
#include <queue>

// BFS Search Method
bool BFS(std::vector<std::vector<int>> graph, int start, int end, std::vector<int> parent){
    bool visited[graph.size()];
    std::queue<int> Q;
    Q.push(start);
    visited[start] = true;
    parent[start] = -1;
    while(!Q.empty()) {
    	int node = Q.front();
	Q.pop();
	for (size_t n = 0; n != graph.size(); n++) {
	    if (!visited[n] && graph[node][n] > 0) {
	    	Q.push(n);
		parent[n] = node;
		visited[n] = true;
	    }
	}
    }
    return (visited[end] = true);
}

int fordFulkerson(std::vector<std::vector<int>> graph, int start, int end) {
 int max_flow = 0;

 std::vector<std::vector<int>> rgraph = graph;

 std::vector<int> parent(graph.size());
 while (BFS(rgraph, start, end, parent)) {
    break;
 }
 return max_flow;
}

int main() {
    std::vector<std::vector<int>> graph{
                { 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0 },
                { 0, 0, 0, 0, 0 }
            };
    int maxFlow = fordFulkerson(graph, 0, 1);
    printf("The max flow for this system is: %d\n", maxFlow);
    return 0;
}



