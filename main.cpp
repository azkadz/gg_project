#include <iostream>
#include "include/Map.h"

int main() {
    // create the map object
    Map oxfordMap;

    // generate the topology
    std::cout << "Generating random delivery map..." << std::endl;
    oxfordMap.generateRandomTopology(); 

    // display results
    std::cout << "Generate connectivity" << std::endl;
    oxfordMap.displayMap();
}