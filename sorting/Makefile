CC=gcc
INC=-I../utils -I.
SRCS=$(wildcard ../utils/*.c)
SRCS+=$(wildcard *.c)
PKG=test_main
#OBJS = $(patsubst %.c,%.o,$(SRCS))

all:
	$(CC) $(INC) $(SRCS) -o $(PKG)

clean:
	rm -rf test_main

test: all
	@echo
	@echo "test sorting..."
	@echo
	@./$(PKG)
	@echo

.PHONY: all clean test
