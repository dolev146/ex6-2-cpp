#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a -Wall
HEADERS=
OBJECTS=Game.o Leauge.o Schedule.o Team.o Schedule.o
SOURCES=Game.cpp Leauge.cpp Schedule.cpp Team.cpp Schedule.cpp

run: test
	./test

demo: Demo.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o demo

test: TestCounter.o Test.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

tidy:
	clang-tidy $(SOURCES) -checks=bugprone-*,clang-analyzer-*,cppcoreguidelines-*,performance-*,portability-*,readability-* --warnings-as-errors=-* --

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

clean:
	rm -f *.o demo test
