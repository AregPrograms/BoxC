$CC = gcc

all:
	@$(CC) box.c -o "box" -O2
	@$(CC) formatted.c -o "formatted" -O2