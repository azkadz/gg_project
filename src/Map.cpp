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

void Map::generateRandomTopology() {
    std::vector<int> connected = {0};
    std::vector<int> unconnected = {1,2,3,4,5,6,7,8,9,10};

    while (!unconnected.empty()) {
        std::uniform_int_distribution<> unconnDist(0, unconnected.size() - 1);
        int unconnIdx = unconnDist(generator);
        int houseID = unconnected[unconnIdx];

        std::uniform_int_distribution<> connDist(0, connected.size() - 1);

        int nodeA = connected[connDist(generator)];
        int nodeB = houseID;

        addEdge(nodeA, nodeB);

        connected.push_back(houseID);
        unconnected.erase(unconnected.begin() + unconnIdx);


    }
}

void Map::displayMap() const {
    std::cout << "TESTING PATHS: " << std::endl;

    for (int i = 0; i < paths.size(); i++) {
        std::cout << "Path " << i << ": ";
        std::cout << paths[i].getNodeA() << " to " << paths[i].getNodeB();
        std::cout << " dist: " << paths[i].getDistance() << std::endl;
    }
}