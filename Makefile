CC = gcc
CFLAGS = -Wall -Wextra -g -I src
SRC = src/main.c src/parser.c
OUT = mini-shell

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
