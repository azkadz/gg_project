#include "../include/Map.h"
#include <iostream>
#include <algorithm>
#include <random>

void Map::addEdge(int a, int b) {
    // create a random distance
    std::uniform_real_distribution<double> distribution(0.1,1.0);
    double dist = distribution(generator);
    Path newPath(a, b, dist);
    paths.push_back(newPath);
    
}