#ifndef NODE_H
#define NODE_H

#include <string>

class Node {
    public:
        Node(int id, std::string name, bool isStore = false)
            : id(id), name(name), isStore(isStore) {}

    // add public getter functions
    int getId() const {
        return id;
    } 
    std::string getName() const {
        return name;
    }
    bool getIsStore() const {
        return isStore;
    }
    
    private:
    int id;
    std::string name;
    bool isStore; // to check if the node is the store
};

#endif