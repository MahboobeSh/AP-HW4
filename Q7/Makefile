CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main2.o 
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main2.o: main2.cpp
	$(CXX) $(CXXFLAGS) main2.cpp

clean:
	rm -f $(TARGET) $(OBJECTS)
