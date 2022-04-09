# Makefile for basic C program used to experiment with C points

CC := clang
CFLAGS := -lm # link math library 

SRC := src/
OBJS := $(wildcard build/obj/*.o) # finds all object files in the obj directory 
BINS := a.out

all: build

build: compile
	echo "Linking and assembling executable.."
	$(CC) $(CFLAGS) -o build/bin/$(BINS) build/obj/*.o

compile: 
	echo "Compiling c files.."
	$(MAKE) -C $(SRC)

run:
	build/bin/a.out

clean:
	@echo "Cleaning project..."
	rm -rf build/bin/* build/obj/*
	@echo "Clean successful!"
