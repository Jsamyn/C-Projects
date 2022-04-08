# Makefile responsible for compiling the source code
# into object files and placing them into the build/obj
# directory 

# Set compiler
CC = clang
CFLAGS = -lm

SRCS := $(wildcard *.c)
OBJS := $(SRCS:%.c=%)

all: compile

compile: 
	$(CC) $(CFLAGS) -c $(SRCS) -o ../build/obj/$(OBJS).o
