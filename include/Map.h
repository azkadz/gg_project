#ifndef MAP_H
#define MAP_H

#include <vector>
#include "Node.h"
#include "Path.h"


class Map {
    public:
        Map();

        void generateRandomTopology();

        void displayMap() const;

    private:
        std::vector<Node> nodes;
        std::vector<Path> paths;

        // helper function to check if a path already exists
        void addEdge(int a, int b);

};

#endif