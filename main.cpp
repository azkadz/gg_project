#include <iostream>
#include <vector>
#include "include/Map.h"
#include "include/Order.h"

int main() {
    // create the map object
    Map oxfordMap;
    oxfordMap.generateRandomTopology(); 
    oxfordMap.displayMap();

    // create a random order for house 7
    int targetHouse = 8;
    Order customerOrder(targetHouse);
    std::cout << "New order received from House " << customerOrder.getHouseID() << std::endl;

    std::vector<int> deliveryRoute = oxfordMap.getPath(0, targetHouse);

    if (deliveryRoute.empty()) {
        std::cout << "No path found to House " << targetHouse << std::endl;
    } else {
        std::cout << "DELIVERY PLAN: ";
        for (size_t i = 0; i < deliveryRoute.size(); ++i) {
            std::cout << deliveryRoute[i];
            if (i < deliveryRoute.size() - 1) {
                std::cout << " -> ";
            }
        }
        std::cout << " [Arrived]" << std::endl;
    }

    return 0;
}