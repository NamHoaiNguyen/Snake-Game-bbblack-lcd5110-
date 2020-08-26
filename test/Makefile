NCLUDE_DIR=../lib
CFLAGS=-I$(INCLUDE_DIR) -Wall
LDFLAGS=-L$(INCLUDE_DIR) -llcd_lib

TARGET=button
CC=gcc

all:
	$(CC) button.c -o $(TARGET) $(CFLAGS) $(LDFLAGS)


clean:
	rm $(TARGET) 

