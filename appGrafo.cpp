// =========================================================
// File: appGrafo.cpp
// Author: Erik Cabrera
// Date: 10 de noviembre 2022
// =========================================================

#include <iostream>
#include <cstring>
#include "ugraph.h"
#include "exception.h"
#include "header.h"


int main() {
    std::fstream inputF("input.txt", std::ios::in);
    int inp;
    inputF >> inp;
    UMatrixGraph<int> graph(inp);
    graph.getGraph(inputF);
    // Imprimir DFS
    std::cout << "Depth First Search: \n";
    dfs(0, &graph);
    std::cout << std::endl;
    // Imprimir BFS
    std::cout << "Breadth First Search: \n";
    bfs(0, &graph);
    std::cout << std::endl;
    // Termina ejecución
    return 0;
}
