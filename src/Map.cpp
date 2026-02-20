#include "../include/Map.h"
#include <iostream>
#include <algorithm>
#include <random>

Map::Map() {
    std::random_device rd;
    generator.seed(rd());

    // initialise nodes
    nodes.push_back(Node(0, "Store", true));
    for (int i = 1; i <= 10; ++i) {
        nodes.push_back(Node(i, "House " + std::to_string(i)));
    }
}

void Map::addEdge(int a, int b) {
    // create a random distance
    std::uniform_real_distribution<double> distribution(0.1,1.0);
    double dist = distribution(generator);
    Path newPath(a, b, dist);
    paths.push_back(newPath);
    
}