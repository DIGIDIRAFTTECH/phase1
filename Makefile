CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJS = Main.o Shape.o Triangle.o Rectangle.o Circle.o Point.o Edge.o

all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) -o main $(OBJS)

Main.o: Main.cpp Shape.h Triangle.h Rectangle.h Circle.h Edge.h Point.h
Shape.o: Shape.cpp Shape.h
Triangle.o: Triangle.cpp Triangle.h Edge.h Point.h Shape.h
Rectangle.o: Rectangle.cpp Rectangle.h Point.h Edge.h Shape.h
Circle.o: Circle.cpp Circle.h Point.h Shape.h
Point.o: Point.cpp Point.h
Edge.o: Edge.cpp Edge.h

clean:
	rm -f *.o main
