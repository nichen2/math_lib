CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRCS = main.cpp math_lib.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = math_lib.h
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
