#ifndef NODE_H
#define NODE_H

#include <string>

class Node {
    public:
        Node(int id, std::string name, bool isStore = false)
            : id(id), name(name), isStore(isStore) {}
    private:
    int id;
    std::string name;
    bool isStore; // to check if the node is the store
};

#endif