#ifndef EDGE_H
#define EDGE_H

class Edge {
private:
    double length;
public:
    Edge();
    Edge(double len);
    void setLength(double len);
    double getLength() const;
};

#endif
