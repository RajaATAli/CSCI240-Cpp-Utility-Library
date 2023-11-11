# Compiler settings - Can be customized.
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Paths for CppUnit includes and libraries
CPPUNIT_INCLUDE = /opt/homebrew/include
CPPUNIT_LIB = /opt/homebrew/lib

# Source files and objects
SRC = $(wildcard Data-Structures/arrays/*.cpp)
OBJ = $(SRC:.cpp=.o)
TEST_SRC = $(wildcard Tests/*.cpp)
TEST_OBJ = $(TEST_SRC:.cpp=.o)

# Main target
all: main

# Main program compilation
main: $(OBJ)
	$(CXX) $(CXXFLAGS) -o main $(OBJ)

# Test target
test: $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) -I$(CPPUNIT_INCLUDE) -L$(CPPUNIT_LIB) -o test $(TEST_OBJ) -lcppunit -ldl


# Clean up
clean:
	rm -f $(OBJ) $(TEST_OBJ) main test

# Pattern rule for object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -I$(CPPUNIT_INCLUDE) -c $< -o $@

# Phony targets
.PHONY: all clean test
