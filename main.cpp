// Name: Sean Oreta
// CWID: 886349166
// Email: soreta@csu.fullerton.edu
// Class: CPSC240
// Assignment: 5
// Program Info:
//    Program Name: Merge Sort Benchmark
//    Start Date: 2022-11-01
//    Date of Completion: N/A
// Summary:
//    
// This File:
//    File name: MSort.cpp
//    Language: C++
//    Must be run alongside intarray.asm

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
    printf("hi\n");
    int maxFlow = fordFulkerson(graph, 0, 1);
    printf("The max flow for this system is: %d\n", maxFlow);
    return 0;
}



