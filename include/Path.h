#ifndef PATH_H
#define PATH_H

class Path {
    public:
        Path(int a, int b, double d)
            : nodeA(a), nodeB(b), distance(d) {}

        int getNodeA() const {
            return nodeA;
        }
        int getNodeB() const {
            return nodeB;
        }
        double getDistance() const {
            return distance;
        }
    private:
        int nodeA;
        int nodeB;
        double distance;
};

#endif