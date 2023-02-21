CXX ?= g++

.all: main.out

main.out: *.cpp *.h
	$(CXX) -g -O1 -o $@ $^
