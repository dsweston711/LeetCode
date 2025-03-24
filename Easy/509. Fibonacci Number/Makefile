CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = FibonacciNumberSolution
SRC = $(TARGET).cpp
OBJ = $(TARGET).o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET).exe $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: all
	./$(TARGET).exe

clean:
	del /F /Q $(TARGET).exe $(OBJ)
