
build: calc.c
	$(CC) $(CFLAGS) calc.c -o calc

run: calc
	./calc

