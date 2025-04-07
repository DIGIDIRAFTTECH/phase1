#include "Edge.h"

Edge::Edge() : length(0) {}
Edge::Edge(double len) : length(len) {}

void Edge::setLength(double len) { length = len; }
double Edge::getLength() const { return length; }
