CC=g++
CFLAGS=-pedantic -Wall
SOURCES= main.cpp Shape.cpp Circle.cpp Rectangle.cpp Square.cpp

all:
	$(CC) $(CFLAGS) $(SOURCES)

