#ifndef ORDER_H
#define ORDER_H

// define an order class to add metadate like priority level of order

class Order {
    public:
        Order(int houseID, int priority = 0)
            : houseID(houseID), priority(priority) {}
        int getHouseID() const {
            return houseID;
        }

    private:
        int houseID;
        int priority;
};


#endif