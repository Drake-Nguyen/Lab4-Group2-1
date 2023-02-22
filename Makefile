# Original Author: Diamond Dinh
# Created: 2023/02/20
# Last Updated by: Diamond Dinh
# Contact information: diamondburned@csu.fullerton.edu
# Purpose of this file: This file serves as the build script for the project.
# (c) Copyright/license info 

CXX ?= g++

.all: main.out

main.out: *.cpp *.h
	$(CXX) -g -O1 -o $@ $^
