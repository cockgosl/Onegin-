CXXFLAGS := -g -fsanitize=address -Iinclude
CPPOBJ := build/bubble_sort.o build/comparator.o build/main.o build/my_strcmp.o build/pointer_array.o build/reading_buffering.o

all: main.exe

main.exe: $(CPPOBJ) 
	g++ $(CXXFLAGS) $(CPPOBJ) -o main

build/bubble_sort.o : src/bubble_sort.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/comparator.o : src/comparator.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/main.o : src/main.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/my_strcmp.o : src/my_strcmp.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/pointer_array.o : src/pointer_array.cpp
	g++ $(CXXFLAGS) -c $< -o $@

build/reading_buffering.o : src/reading_buffering.cpp
	g++ $(CXXFLAGS) -c $< -o $@

clean :
	rm build/*.o