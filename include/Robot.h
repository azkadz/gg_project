#include <queue>
#include <vector>
#include "Order.h"
#include "Map.h"

class Robot {
    public:
        void addOrder(const Order& order) {
            orderQueue.push(order);
        }

        void createDeliveryPlan();

    private:
        // create a queue of Orders
        std::queue<Order> orderQueue;
};