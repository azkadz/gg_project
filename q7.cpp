/*
Fully automated robot delivery system
10 customers subscribed, no customer can order more than 2 baskets.

Q7 (a): Design the set of classes to represent the location of the store and customers.

Map Class that holds Node and Path objects.
Node Class represents a location (store or house) which will need an ID or name.
Path will connect two Nodes as an edge. It will hold the distance and the IDs of two nodes it connects.
Map Class will have member function to randomly generate connectivity between Node and create Path objects.

Use a Spanning Tree approach to make sure that every house is connected somehow to the store.
1. Create 10 house and 1 store Node objects
2. Begin with two sets. Connected set containing just the store + Unconnected set containing all 10 houses
3. Pick a random house from Unconnected set, connect to a random node in the Connected set.
4. Repeat until Unconnected set is empty
*/