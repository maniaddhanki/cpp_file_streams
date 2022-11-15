CXXFLAGS=-Wall -Wextra -std=c++14 -g

out/fwrite.o: fwrite.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/ostream.o: ostream.cpp
	g++ -shared -fpic -o $@ $^ $(CXXFLAGS)

out/write: out/fwrite.o main.cpp
	g++ -o $@ $^ $(CXXFLAGS)

clean:
	rm -rf out/*

.PHONY=clean