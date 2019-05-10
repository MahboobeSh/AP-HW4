CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o circle.o cube.o point.o Shape.o sphere.o square.o ThreeDimensionalShape.o TwoDimensionalShape.o 
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
circle.o : circle.cpp ThreeDimensionalShape.h TwoDimensionalShape.h
	$(CXX) $(CXXFLAGS) circle.cpp
cube.o: cube.cpp ThreeDimensionalShape.h TwoDimensionalShape.h
	$(CXX) $(CXXFLAGS) cube.cpp
point.o: point.cpp
	$(CXX) $(CXXFLAGS) point.cpp
Shape.o: Shape.cpp
	$(CXX) $(CXXFLAGS) Shape.cpp
sphere.o : sphere.cpp ThreeDimensionalShape.h TwoDimensionalShape.h
	$(CXX) $(CXXFLAGS) sphere.cpp
square.o : square.cpp ThreeDimensionalShape.h TwoDimensionalShape.h
	$(CXX) $(CXXFLAGS) square.cpp
TwoDimensionalShape.o : TwoDimensionalShape.cpp Shape.h 
	$(CXX) $(CXXFLAGS) TwoDimensionalShape.cpp
ThreeDimensionalShape.o: ThreeDimensionalShape.cpp Shape.h
	$(CXX) $(CXXFLAGS) ThreeDimensionalShape.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)