all: install

install:
	gcc *.c -o build/pythagorean -lm

clean:
	rm build/*
