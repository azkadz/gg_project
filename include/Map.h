#ifndef MAP_H
#define MAP_H

#include <vector>
#include <random>
#include "Node.h"
#include "Path.h"


class Map {
    public:
        Map();

        void generateRandomTopology();

        void displayMap() const;

        std::vector<int> getPath(int a, int b);

    private:
        std::vector<Node> nodes;
        std::vector<Path> paths;
        
        // put the generator in the private section so any function
        // in the Map classs can use the same 'engine'
        std::default_random_engine generator;

        // helper function to check if a path already exists
        void addEdge(int a, int b);

};

#endif