CXXFLAGS=-Wall -Wextra -std=c++14 -g -O3

out/fread.o: fread.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/ifstream.o: ifstream.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/istream.o: istream.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/assign.o: assign.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/copy.o: copy.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/read_buffer.o: read_buffer.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/for_approach.o: for_approach.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/read: out/fread.o main.cpp
	g++ -o $@ $^ $(CXXFLAGS)

clean:
	rm -rf out/*

.PHONY=clean