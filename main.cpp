// Name: Sean Oreta
// CWID: 886349166
// Email: soreta@csu.fullerton.edu
// Class: CPSC335
// Assignment: 1

#include <iostream>
#include <vector>
#include <queue>


int fordFulkerson(std::vector<std::vector<int>> graph, int start, int end) {
 int ans = 0;

 return ans;
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



